#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value\n");
    scanf("%d",&n);
    int spaces=4,stars=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<spaces;j++)//spaces
        {
            printf(" ");
        }
        for(int j=0;j<stars;j++){//stars
        printf("* ");
    }
    spaces--;
    stars+=2;
    printf("\n");
    }
}
