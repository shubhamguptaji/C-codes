#include <stdio.h>
#include <string.h>
#define MAX 256
 int main() 
{
FILE *fp1, *fp2;
int lnum, lineCount = 0;
char file[MAX], string[MAX];
char newline[MAX], temp[] = "temp.txt";
printf("Enter your input file name:");
fgets(file, MAX, stdin);
file[strlen(file) - 1] = '\0';
fp1 = fopen(file, "r");
if (!fp1)
{
printf("Unable to open the input file!!\n");
return 0;
}
fp2 = fopen(temp, "w");
if (!fp2) 
{
printf("Unable to open a temporary file to write!!\n");
fclose(fp1);
return 0;
}
printf("Enter your new input line(to replace):");
fgets(newline, MAX, stdin);
printf("Enter the line no of the line you want to replace:");
scanf("%d", &lnum);
while (!feof(fp1)) 
{
strcpy(string, "\0");
fgets(string, MAX, fp1);
if (!feof(fp1)) 
{
lineCount++;
/* skip the line at given line number */
if (lineCount != lnum)
{
fprintf(fp2, "%s", string);
} 
else
{
/* replacing with new input line */
fprintf(fp2, "%s", newline);
}
}
}
fclose(fp1);
fclose(fp2);
remove(file);
rename(temp, file);
return 0;
}
