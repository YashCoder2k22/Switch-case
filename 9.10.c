#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2,y;
    printf("Enter three numbers of quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    switch(d>0)
    {
        case 1:
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Roots of quadratic equation are %f and %f",x1,x2);
        break;
        case 0:
        switch(d==0)
        {
        case 1:
        x1=-b/(2*a);
        printf("Roots of quadratic equation are %f and %f",x1,x1);
        break;
        case 0:
        x1=-b/(2*a);
        y=sqrt(4*a*c-(b*b));
        printf("Roots of quadratic equation are %f + %fi and %f - %fi ",x1,y,x1,y);
        break;
        }
    }    
    return 0;
}