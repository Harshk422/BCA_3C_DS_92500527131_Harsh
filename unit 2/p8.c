#include <stdio.h>

void main() {

int a[10],i,min,max;

for (i=0;i<10;i++)
{
    printf("\n Enter a value : ");
    scanf("%d",&a[i]);
}
   min = a[0];
   max = a[0];

for (i=0;i<10;i++)
{
    if (a[i] > max)
    {
        max = a[i];
    }
    if(a[i] < min)
    {
        min = a[i];
    }
}
 printf("\n Maximum number is :%d", max);
 printf("\n Minimum number is :%d", min);

}
