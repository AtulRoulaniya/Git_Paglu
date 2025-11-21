#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");
    if( fp == NULL)
    {
        printf("Error\n");
        return 1;
    }
    printf("Enter your name.\n");
    scanf("%s", name);

    printf("Enter you age.\n");
    scanf("%d",&age);

    fprintf(fp,"Name:%s\n Age:%d\n",name,age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}