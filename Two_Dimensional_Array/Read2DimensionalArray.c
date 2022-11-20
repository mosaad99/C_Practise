#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int arr[4][3] = {{2,4,6},{1,3,5},{7,5,3},{8,5,2}};
    //initialize a 2 Dimensional array with 4 rows, 3 columns.
    int arr[4][3];
    int i,j;//Don't initialize them in the loop.
    for (i =0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
        printf("Enter the value : ");
        scanf("%d",&arr[i][j]);
        }
    }
     for (int i =0;i<4;i++)
    {
        for (int j=0;j<3;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }

    return 0;
}
