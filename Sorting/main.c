#include <stdio.h>
#define size 10
void main(void)
{
    int arr[]={2,5,4,6,4,6,2,12,145,200};
    int i,temp,up,low;
    printf("Before : ");
    for (i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    while (arr[9]>=arr[10])
    {
     for (i=0;i<size;i++)
    {
        if (arr[i]>arr[i+1])
        {
          temp = arr[i];
          arr[i]=arr[i+1];
          temp = arr[i];
        }
    }
    }
    printf("After : ");
    for (i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n\n");
}
