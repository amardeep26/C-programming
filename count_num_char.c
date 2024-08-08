#include <stdio.h> 
#define MAX_FILE_NAME 100 
  
int main() 
{ 
    FILE* fp; 
  
    // Character counter (result) 
    int count = 0; 
  
    char filename[MAX_FILE_NAME]; 
  
    // To store a character read from file 
    char c; 
  
    // Get file name from user. 
    // The file should be either in current folder 
    // or complete path should be provided 
    printf("Enter file name: "); 
    scanf("%s", filename); 
  
    // Open the file 
    fp = fopen(filename, "r"); 
  
    // Check if file exists 
    if (fp == NULL) { 
        printf("Could not open file %s", 
               filename); 
        return 0; 
    } 
  
    // Extract characters from file 
    // and store in character c 
    for (c = getc(fp); c != EOF; c = getc(fp)) 
  
        // Increment count for this character 
        count = count + 1; 
  
    // Close the file 
    fclose(fp); 
  
    // Print the count of characters 
    printf("The file %s has %d characters\n ", 
           filename, count); 
  
    return 0; 
} 