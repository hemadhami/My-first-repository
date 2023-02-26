#include<stdio.h>
int main()
{
    int x;
    int arr[]={5,10,15,20,25,30,35};
    printf("Enter a number:");
    scanf("%d" ,&x);
    for (int i=0; i<7 ;i++)
    {
        if (arr[i]==x)
        {
            printf("number found");
            return 0;
        }
        printf("number not found");
        return 0;
    }
}
