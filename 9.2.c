#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,u,v;
    while(1)
    {
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");

    printf("\nEnter your option");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter two numbers");
        scanf("%d%d",&u,&v);
        printf("Addition is %d",u+v);
        break;

        case 2:
        printf("Enter two numbers");
        scanf("%d%d",&u,&v);
        printf("Subtraction is %d",u-v);
        break;

        case 3:
        printf("Enter two numbers");
        scanf("%d%d",&u,&v);
        printf("Multiplication is %d",u*v);
        break;

        case 4:
        printf("Enter two numbers");
        scanf("%d%d",&u,&v);
        printf("Division is %d",u/v);
        break;

        case 5:

        exit(0);

        default:
        printf("Invalid option");
    }

    }
return 0;
}