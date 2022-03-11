#include<stdio.h>




int main()
{
    int n , num ;
    printf("Enter the number of element for arr : \n");
    scanf("%d ",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("completer array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);

    }

    printf("Enter the element to search in array : ");
    scanf("%d",&num);
   // linearsearching(n , num , arr[n]);

   for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)                
        {
            printf("element is found at index %d",i);
        }
        else 
            printf("Element not found");
        
        
    }
 
}
