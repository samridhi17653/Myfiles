#include<stdio.h>
#include<conio.h>
void show();
//int check();
int inputData();

char name[20];
int age;
char branch[5];
int year;
int semester;
float score;

void main()
{
clrscr();
int a;
a=inputdata();
if(a!=1)
{
printf("Invalid Details");
}
else
{
show();
}
}

int inputData()
{
printf("\nA Management Systemm Application");
printf("\n \nWelcome User");
printf("\n Please Fill In the Following Details:");
printf("\n Name:");
gets(name);
printf("\n Age:");
scanf("%d",&age);
printf("\n Branch:");
gets(branch);
printf("\n Year:");
scanf("%d",&year);
printf("\n Semester");
scanf("%d",&semester);
printf("\nPrevious Semester Score: ");
scanf("%f",&score);
FILE *fptr;
fptr=fopen("C:\Users\IIMT.lab1\Desktop\Details.txt","w");
if(fptr==NULL)
{
printf("Error");
return(0);
}
fprintf(fptr,"%s",name);
fprintf(fptr,"%d",age);
fprintf(fptr,"%s",branch);
fprintf(fptr,"%d",year);
fprintf(fptr,"%d",semester);
fprintf(fptr,"%f",score);
fclose(fptr);
return(1);
}
void show()
{
FILE *fptr;
fptr=fopen("C:\Users\IIMT.lab1\Desktop\Details.txt","r");
if (fptr==NULL)
{
printf("Error");
}
else
{
char c=fgetc(fptr);
while(c!=EOF)
{
printf("\n");
fscanf(fptr,"%s",&name);
puts(name);
fscanf(fptr,"%d",&age);
printf("\t%d",age);
fscanf(fptr,"%s",&branch);
printf("\t");
puts(branch);
fscanf(fptr,"%d",&year);
printf("\t%d",year);
fscanf(fptr,"%d",&semester);
printf("\t%d",semester);
fscanf(fptr,"%d",&score);
printf("\t%d",score);
}
fclose(fptr);
}
}