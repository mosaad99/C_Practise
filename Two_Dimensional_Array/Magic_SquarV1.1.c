#include<stdio.h>
#include <windows.h>
#include <time.h>


void main(void)
{
    int size,row,col,num=1;
    printf("Enter the size : ");
    scanf("%d",&size);
    int magic[size+1][size+1];

    row=1;
    col=(size+1)/2;

    do {
        magic[row][col]=num;
       //5 delay(1);
        if (num % size == 0 )
         row++;
        else {
        row--;
        col--;
        }
        if (row==0)
            row=size;
        if (col==0)
            col=size;
        num++;
    }while (num <= size*size);

    for (row=1;row<=size;row++)
    {
        for (col=1;col<=size;col++)
            printf("%3d",magic[row][col]);
        printf("\n");
    }
}

