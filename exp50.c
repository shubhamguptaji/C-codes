#include<stdio.h>
int main()
{
FILE *fileptr1, *fileptr2;
char filename[40];
char ch;
int delete_line, temp = 1;
printf("Enter file name: ");
scanf("%s", filename);
fileptr1 = fopen(filename, "r");
printf("\nEnter line number of the line to be deleted:");
scanf("%d", &delete_line);
fileptr2 = fopen("replica.txt", "w");
ch = getc(fileptr1);
while (ch != EOF)
{
if (ch == '\n')
temp++;
if (temp != delete_line)
{
putc(ch, fileptr2);
}
ch = getc(fileptr1);
}
fclose(fileptr1);
fclose(fileptr2);
fileptr1 = fopen(filename, "w");
fileptr2 = fopen("replica.txt", "r");
ch=fgetc(fileptr2);
while(ch!=EOF)
{
fputc(ch,fileptr1);
ch=fgetc(fileptr2);
}
fclose(fileptr1);
fclose(fileptr2);
fileptr1 = fopen(filename, "r");
printf("\n\n The contents of file after being modified are as follows:\n");
fileptr1 = fopen(filename, "r");
ch = getc(fileptr1);
while (ch != EOF)
{
printf("%c", ch);
ch = getc(fileptr1);
}
fclose(fileptr1);
return 0;
}
