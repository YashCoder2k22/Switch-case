#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
    printf("Enter three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    while(1)
    {
    printf("\n1. Check whether a given set of three numbers are lenths of an isosceles triangle or not");
    printf("\n2. Check whether a given set of three numbers are lenths of a right angled triangle or not");
    printf("\n3. Check whether a given set of three numbers are lenths of a equilateral triangle or not");
    printf("\n4. Exit");
    printf("\n\nEnter an option");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        if(a==b||b==c||c==a)
        {
            printf("\nIsoscales triangle\n");
        }
        else
        {
            printf("\nNot a isoscales triangle\n");
        }
        break;
        case 2:
        if((a*a+b*b)==c*c||(b*b+c*c)==a*a||(c*c+a*a)==b*b)
        {
            printf("\nRight angled triangle\n");
        }
        else
        {
            printf("\nNot a right angled triangle\n");
        }
        break;
        case 3:
        if(a==b&&b==c&&c==a)
        {
            printf("\nEquilateral triangle\n");
        }
        else
        {
            printf("\nNot a equilateral triangle\n");
        }
        break;
        case 4:
        exit(0);
        default:
        printf("Invalid option");
    }
    }
    return 0;
}

    