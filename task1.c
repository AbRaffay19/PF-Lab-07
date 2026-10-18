#include<stdio.h>
int main()
{
int i,j,a=0,t=0,ticket[5][8];
printf("Enter 1 to book and 0 for not to book:\n");
for ( i = 0; i < 5; i++)
{
    for ( j = 0; j < 8; j++)
    {   
        scanf("%d",&ticket[i][j]);
    }    
}
for ( i = 0; i < 5; i++)
{
    for ( j = 0; j < 8; j++)
    {   
        if (ticket[i][j]==1)
        {
            printf("X");
        }
        else
        {
            printf(".");
        }
    }    
    printf("\n");
}
for(i=0;i<5;i++)
{
    for ( j = 0; j < 8; j++)
    {   
        if (ticket[i][j]==0)
        {
            a+=1;
            t+=1;
        }
    }    
    printf("row %d has %d empty seats\n",i+1,a);
        a=0;
}
    printf("Total Free seats = %d\n",t);
return 0;    
}