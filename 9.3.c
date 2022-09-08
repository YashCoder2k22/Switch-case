#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Today is Monday the working day");
        break;

        case 2:
        printf("Today is Tuesday");
        break;

        case 3:
        printf("Today is Wednesday");
        break;

        case 4:
        printf("Today is Thursday");
        break;

        case 5:
        printf("Today is Fun Friday");
        break;

        case 6:
        printf("Today is Saturday");
        break;

        case 7:
        printf("Today is Super Sunday");
        break;

        default:
        printf("Invalid Number");
        }
        return 0;
}