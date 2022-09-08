#include<stdio.h>
int main()
{
    int charge_units;
    float x,y,z,a,sum=0;
    printf("Enter the charge_units");
    scanf("%d",&charge_units);
    switch(charge_units<=50)
    {
        case 1:
        x=charge_units*0.5;
        sum=sum+(x+x*20/100);
        printf("Total electricity bill is %f",sum);
        break;
        case 0:
        switch(charge_units<=150)
        {
            case 1:
            charge_units=charge_units-50;
            y=charge_units*0.75+0.5*50;
            sum=sum+(y+y*20/100);
            printf("Total electricity bill is %f",sum);
            break;
            case 0:
            switch(charge_units<=250)
            {
                case 1:
                charge_units=charge_units-150;
                z=charge_units*1.2+0.75*100+0.5*50;
                sum=sum+(z+z*20/100);
                printf("Total electricity bill is %f",sum);
                break;
                case 0:
                switch(charge_units>250)
                {
                    case 1:
                    charge_units=charge_units-250;
                    a=charge_units*1.5+1.2*100+0.75*100+0.5*50;
                    sum=sum+(a+a*20/100);
                    printf("Total electricity bill is %f",sum);
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    return 0;
}