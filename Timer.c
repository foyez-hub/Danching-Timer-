#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//FOYEZ
#include<windows.h>
int main()
{
        int hour,min,sec;
        printf("Set hour\n");
        scanf("%d",&hour);
        printf("Set minute\n");
        scanf("%d",&min);
        printf("Set second\n");
        scanf("%d",&sec);
        system("cls");
        int h=0,m=0,s=0;
        while(1)
        {
             printf("---------------TIMER--------------\n");
             printf("         %.2d:%.2d:%.2d\n",h,m,s);
             printf("-----------------------------------\n");
             if(s%2==0)
             {
                  printf("%d\n",ran_dom());
                 display1(ran_dom());
             }
             else
             {
                 printf("%d\n",ran_dom());
                 display2(ran_dom());
             }

            Sleep(1000);
             if(h==hour&&m==min&&s==sec)
               {
        // printf("----------------------\n");
                     system("cls");
                     display3();
                     break;
               }
               else
               {
                      system("cls");
               }
            s++;
            if(s==60)
            {
                m++;
                s=0;
            }
            if(m==60)
            {
                h++;
                m=0;
            }


        }

}
void display1(int N)
{
    int i, j;
    int count;

    count = N * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

}
void display2(int N)
{
    int i, j;




    for(i=1; i<=(N * 2 - 1); i++)
    {

        if(i == N)
        {
            for(j=1; j<=(N * 2 - 1); j++)
            {
                printf("+");
            }
        }
        else
        {

            for(j=1; j<=N-1; j++)
            {
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }
}
void display3()
{
    int i, j, n=10;
    char name[50]="Times Up";
    int len;





    len = strlen(name);


    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }


        if(i == n)
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");
            }

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }


}
int ran_dom()
{

        srand(time(0));
        int num = (rand() % (10 - 4 + 1)) + 4;
        return num;

}














