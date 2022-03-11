#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n ;
    int *ptr;

//     printf("Enter the number of element you want  ");
//     scanf("%d",&n);
//     ptr = (int * )malloc(n * sizeof(int));



//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the element at index: %d = ",i);
//         scanf("%d",&ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("Element enterd are : %d\n",ptr[i]);
//     }
// // use of realloc
//     printf("Enter the number of element you want  ");
//     scanf("%d",&n);

//     ptr = (int *)realloc(ptr , n*sizeof(int));



//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the element at index: %d = ",i);
//         scanf("%d",&ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("Element enterd are : %d\n",ptr[i]);
//     }

// use of calloc
    printf("Enter the number of element you want  ");
    scanf("%d",&n);
    ptr = (int * )calloc(n , sizeof(int));

    




    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index: %d = ",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Element enterd are : %d\n",ptr[i]);
    }

    

    
    

    
    
}