#include <stdio.h> 
int main()	
{
FILE *fp;
int l= 1;
char chr;
fp = fopen("E:\\myFile.txt", "r");
chr = getc(fp);
while (chr != EOF)
{	
if (chr == '\n')
{
l = l + 1;
}
chr = getc(fp);
}
fclose(fp); //close file.
printf("There are %d lines in a file\n",l);
return 0;
}
