#include<stdio.h>
int main()
{
int marks[6][4],best,t=0,k,avg,aveg[4],i,j;
for ( i = 0; i < 6; i++)
{
    printf("Enter Marks of each student for subject %d\n",i+1);
    for ( j = 0; j < 4; j++)
    {
        scanf("%d",&marks[i][j]);
    }
}
for ( i = 0; i < 6; i++)
{
    for ( j = 0; j < 4; j++)
    {
        t+=marks[i][j];
    }
    avg=t/4;
    printf("Student: %d \n Total=%d\tAverage=%d\n",i+1,t,avg);
    avg=0;
    t=0;
}
for ( j = 0; j < 4; j++)
{
    for ( i = 0; i< 6; i++)
    {
        t+=marks[i][j];
    }
    aveg[j]=t/4;
    printf("Subject %d Average:%d\n",j+1,aveg[j]);
    avg=0;
}
best=aveg[0];
for ( i = 0; i < 4; i++)
{
    if(aveg[i]>best)
    {
        best=aveg[i];
        k=i;
    }
}
printf("Subject where student perform better:%d",k);
return 0;
}