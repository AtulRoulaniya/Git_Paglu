#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    if ( fp == NULL)
    {
        printf("Error\n");
        return 1;
    }
    fp= fopen("info.txt", "r");

    while((ch=fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}