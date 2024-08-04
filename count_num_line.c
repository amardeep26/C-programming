
#include <stdio.h>

 
int main()
{
    FILE *fp;
    int count = 0; // Line counter (result)
    char filename[100];
    char c; // To store a character read from file
 
    // Get file name from user. The file should be
    // either in current folder or complete path should be provided
    printf("Enter file name: ");
    scanf("%s", filename);
 
    // Open the file
    fp = fopen(filename, "r");
 
    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }
 
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
 
    // Close the file
    fclose(fp);
    printf("The file %s has %d lines\n ", filename, count);
 
    return 0;
}
