#include <stdio.h>
int main()
{
    int i,j,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[100];
    
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted array is \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}