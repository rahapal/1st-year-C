/*
 Name:-Sushant Rahapal
 Roll no:-32

*/
#include<stdio.h>
int main()
{
    int z,a,b,c,d,e,f,g,t_1,t_2,t_3,t_4,t_5,t_6,t_7,t_8;
    printf("Welcome to the program which calculate the tax for bulidings that are built in an area worth 30 lakhs\n");
    printf("How many Floors:-");
    scanf("%d",&z);
    if (z==1)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        t_1=a*10;
     printf("Total tax user need to pay=%d",t_1);
    }
    else if (z==2)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        printf("Enter the 1st floor area:-");
        scanf("%d",&b);
        t_2=a*10+b*12;
        printf("Total tax user need to pay=%d",t_2);
    }
   else if (z==3)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        printf("Enter the 1st floor area:-");
        scanf("%d",&b);
        printf("Enter the 2nd floor area:-");
        scanf("%d",&c);
        t_3=a*10+b*12+c*14;
        printf("Total tax user need to pay=%d",t_3);
    }
    else if (z==4)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        printf("Enter the 1st floor area:-");
        scanf("%d",&b);
        printf("Enter the 2nd floor area:-");
        scanf("%d",&c);
        printf("Enter the 3rd floor area:-");
        scanf("%d",&d);
        t_4=a*10+b*12+c*14+d*15;
        printf("Total tax user need to pay=%d",t_4);
    }
    else if (z==5)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        printf("Enter the 1st floor area:-");
        scanf("%d",&b);
        printf("Enter the 2nd floor area:-");
        scanf("%d",&c);
        printf("Enter the 3rd floor area:-");
        scanf("%d",&d);
        printf("Enter the 4th floor area:-");
        scanf("%d",&e);
        t_5=a*10+b*12+c*14+d*15+e*20;
        printf("Total tax user need to pay=%d",t_5);
    }
    else if (z==6)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        printf("Enter the 1st floor area:-");
        scanf("%d",&b);
        printf("Enter the 2nd floor area:-");
        scanf("%d",&c);
        printf("Enter the 3rd floor area:-");
        scanf("%d",&d);
        printf("Enter the 4th floor area:-");
        scanf("%d",&e);
        printf("Enter the 5th floor area:-");
        scanf("%d",&f);
        t_6=a*10+b*12+c*14+d*15+e*20+f*25;
        printf("Total tax user need to pay=%d",t_6);
    }
    else if (z==7)
    {
            printf("Enter the ground floor area:-");
            scanf("%d",&a);
            printf("Enter the 1st floor area:-");
            scanf("%d",&b);
            printf("Enter the 2nd floor area:-");
            scanf("%d",&c);
            printf("Enter the 3rd floor area:-");
            scanf("%d",&d);
            printf("Enter the 4th floor area:-");
            scanf("%d",&e);
            printf("Enter the 5th floor area:-");
            scanf("%d",&f);
            printf("Enter the 6th floor area:-");
            scanf("%d",&g);
        t_7=a*10+b*12+c*14+d*15+e*20+f*25+g*30;
        printf("Total tax user need to pay=%d",t_7);
    }
    else if (z==8)
    {
        printf("Enter the ground floor area:-");
        scanf("%d",&a);
        printf("Enter the 1st floor area:-");
        scanf("%d",&b);
        printf("Enter the 2nd floor area:-");
        scanf("%d",&c);
        printf("Enter the 3rd floor area:-");
        scanf("%d",&d);
        printf("Enter the 4th floor area:-");
        scanf("%d",&e);
        printf("Enter the 5th floor area:-");
        scanf("%d",&f);
        printf("Enter the 6th floor area:-");
        scanf("%d",&g);
        t_8=a*10+b*12+c*14+d*15+e*20+f*25+g*30+10;
        printf("Total tax user need to pay=%d",t_8);
    }
    return 0;
}
