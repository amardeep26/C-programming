#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char str[100], word[100], substr[100][100];
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0;
 
	printf ("Enter the string\n");
	fgets (str,100,stdin);
 
	// let us convert the string into 2D array
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			substr[k][j] = '\0';
			k ++;
			j = 0;
		}
		else
		{
			substr[k][j] = str[i];
			j ++;
		}
	}
 
	substr[k][j] = '\0';
 
	j = 0;
	for (i = 0; i < k; i++)
	{
		int present = 0;
		for (l = 1; l < k + 1; l++)
		{
			if (substr[l][j] == '\0' || l == i)
			{
				continue;
			}
 
			if (strcmp (substr[i], substr[l]) == 0) {
				substr[l][j] = '\0';
				present = present + 1;
			}
		}
		// if (present > 0)	     | uncomment this `if` block if you
		// {			     | want to remove all the occurrences 
		// 	substr[i][j] = '\0';   | of the words including the word
		// }			     | itself.
	}
 
	j = 0;
 
	for (i = 0; i < k + 1; i++)
	{
		if (substr[i][j] == '\0')
			continue;
		else
			printf ("%s ", substr[i]);
	}
 
	printf ("\n");
 
	return 0;
}
