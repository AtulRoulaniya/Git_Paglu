#include<stdio.h>
int main()
{
  int sec;
   printf("Enter seconds:");
    scanf("%d", &sec);
     int h=sec / 3600;
     int m=(sec % 3600) / 60;
     int s=(sec % 3600) % 60;
     printf("H:M:s=%d:%d:%d\n", h,m,s);
     return 0;
}

