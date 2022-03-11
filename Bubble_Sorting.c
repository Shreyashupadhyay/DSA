#include<stdio.h>

int main()
{
    int n ;
    printf("enter the number of element in array : ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0 ; i<n ; i++)
    {
        printf("Enter the element : ");
        scanf("%d\n",&arr[i]);

    }
    printf("Unsorted array ");

    for (int i = 0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

int temp;


for ( int i = 0 ; i < n-1 ; i++)//for number of pass
{

    for (int j = 0; i < n-1-i ; i++) // for comparision in each pass
    {
        /* code */
    }
    
    if(arr[i]>arr[i+1])
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
  

}
printf("sorted array : ");

    for (int i = 0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }


}