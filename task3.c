#include<stdio.h>
int main()
{
    int temp[7][4],hot,avg,cold,i,j,t=0,row1,col1,row2,col2;
    for ( i = 0; i < 7; i++)
    {
        printf("Enter Temperature at 4 times of day: %d\n",i+1);
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&temp[i][j]);
        }
    }
    hot=temp[0][0];
    cold=temp[0][0];
    for ( i = 0; i < 7; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (temp[i][j]>hot)
            {
                hot=temp[i][j];
                row1=i;
                col1=j;
            }
            if (temp[i][j]<cold)
            {
                cold=temp[i][j];
                row2=i;
                col2=j;
            }
        }
    }
    printf("hottest reading:%d found at day %d and time %d\n",hot,row1+1,col1+1);
    printf("Coldest reading:%d found at day %d and time %d\n",cold,row2+1,col2+1);
    for ( i = 0; i < 7; i++)
    {
         t+=temp[i][2];      
    }
    avg=t/7;
    printf("Days when noon tmperature was above weekkly noon average:\n");
    for ( i = 0; i < 7; i++)
    {
        if (temp[i][2]>avg)
        {
            printf("%d\t",i+1);
        }
    }
return 0;
}