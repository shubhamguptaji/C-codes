#include<stdio.h>
int to_initcap_file(FILE*);
int main(int argc,char*argv[])
{
FILE *fp1;
char fp[10];
int p;
fp1=fopen(argv[1],"r+");
if(fp1==NULL)
{
printf("Cannot open file");
}
p=to_initcap_file(fp1);
if(p==1)
{
printf("Success");
}
else
{
printf("Failure");
}
fclose(fp1);
}
int to_initcap_file(FILE*fp)
{
char c;
c=fgetc(fp);
if(c>='a' && c<='z')
{
fseek(fp,-1L,1);
fputc(c-32,fp);
}
while(c!=EOF)
{
if(c==' ' || c=='\n')
{
c=fgetc(fp);
if(c>='a' && c<='z')
{
fseek(fp,-1L,1);
fputc(c-32,fp);
}
}
else
{
c=fgetc(fp);
}
}
return 1;
}
