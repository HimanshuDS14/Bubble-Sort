#include<stdio.h>

int main()
{
    int size,i;
    printf("Enter array size : ");
    scanf("%d" , &size);
    int arr[size];

    printf("Enter %d elements into an array : " , size);
    for(i=0;i<size;i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array is(descending order) : ");
    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array is(Ascending order) : ");
    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

}

