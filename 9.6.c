#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year");
    scanf("%d",&x);
    switch(x%100)
    {
        case 0:
        switch(x%400)
        {
            case 0:
            printf("Leap year");
            break;
            case 1:
            printf("Not a leap year");
            break;
        }
        break;
        case 1:
        switch(x%4)
        {
            case 0:
            printf("Leap year");
            break;
            case 1:
            printf("Not a leap year");
            break;
        }
        break;
    }
    return 0;
}