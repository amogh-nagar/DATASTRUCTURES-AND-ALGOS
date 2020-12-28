//1.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
   printf("%d %d %d %d %d %d", a+3,*(a+3),*(a+2)+3,*(*(a+3)),*a,**a);
    return 0;
    }