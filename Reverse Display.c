#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],n,i;
    printf("Input the numbers of elements to store in the array:");
    scanf("%d",&n);
    printf("Input %d elements i the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("elements-%d:",i);
        scanf("%d",&arr[i]);
    }
    printf("The values stored in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n The values stored in reverse are:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
