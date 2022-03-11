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


    int result = binearysearch(n , num , arr);
    printf("element found at %d",result);
    


    
    
}
int binearysearch(int n , int num , int arr[n])
{
   int  L = 0;
   int  H = n -1;

    while ( L <= H)
    {
      int M = (L+H)/2;
        if (arr[M]== num)
        {
            return M ;

        }
        if(arr[M]>num)
        {
            H = M-1;
        }
        else {
            L = M + 1;
        }
        

    }


}
