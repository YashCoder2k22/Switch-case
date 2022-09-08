#include<stdio.h.>
int main()
{
    int x;
    printf("Enter an even number");
    scanf("%d",&x);
    switch(x%2)
    {
        case 0:
        printf("%d",x+1);
        break;
        case 1:
        printf("Not a even number");
        break;
    }
    return 0;
}