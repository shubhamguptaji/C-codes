#include <stdio.h>
void main()
{
int line_count = 1, n_o_c_l = 0,  n_o_b_l = 0, n_e_c = 0;
FILE *fp1;
char ch;
fp1 = fopen("myFile.txt", "r");
while ((ch = fgetc(fp1)) != EOF)
{
if (ch  ==  '\n')
{
line_count++;
}
if (ch  ==  '\n')
{
if ((ch = fgetc(fp1))  ==  '\n')
{
fseek(fp1, -1, 1);
n_o_b_l++;
}
}
}
fseek(fp1, 0, 0);
while ((ch = fgetc(fp1)) != EOF)
{
if (ch  ==  '/')
{
if ((ch = fgetc(fp1))  ==  '/')
{
n_o_c_l++;
}
}
}
printf("Total no of lines: %d\n", line_count);
printf("Total no of comment line: %d\n", n_o_c_l);
printf("Total no of blank lines: %d\n", n_o_b_l);
}
