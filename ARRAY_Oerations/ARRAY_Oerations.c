#include <stdio.h>
void sort_array(int arr[],  int size);
void print_array(int arr[],  int size);
void main(void)
{
   int x[]={15,10,30,25,20,50,45,35,40,5};
   int size = sizeof(x)/sizeof(x[0]);
   int y[]={8,10,6,4,2,16,12,14,20,18};
   int size1 = sizeof(y)/sizeof(y[0]);
   print_array(x,size);
   sort_array(x,size);
   print_array(x,size);
   print_array(y,size1);
   sort_array(y,size1);
   print_array(y,size1);
}

void sort_array(int arr[],  int size)
{
   int flag=1;
   int i;
    do
    {
       flag=0;
       for (i=0;i<size-1;i++)
       {
           if (arr[i]>arr[i+1])
        {
            int aux=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=aux;
            flag=1;
        }
       }
    }while(flag==1);
}
void print_array(int arr[],  int size)
{
    printf("\n ------------------- \n");
    for(int i=0;i<size;i++)
    {
    printf("\nM%d is : %d",i,arr[i]);
    }
}

"//Just_a_comment"  
"//Just_another_comment"  
