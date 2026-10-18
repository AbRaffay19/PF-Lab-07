#include<stdio.h>
int main()
{
    int sales[3][5],branch[3],prod[5],l,i,j,k,tb,tp,best,low;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter sales for branch %d:\n",i+1);
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&sales[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            tb+=sales[i][j];
        }
        branch[i]=tb;
        printf("Branch %d Sales:%d\n",i+1,tb);
        tb=0;
    }
    for ( j = 0; j < 5; j++)
    {
        for ( i = 0; i < 3; i++)
        {
            tp+=sales[i][j];            
        }
        printf("Product %d Sales:%d\n",j+1,tp);
        prod[j]=tp;
        tp=0;
    }
    best=branch[0];
    for ( i = 0; i < 3; i++)
    {
        if (branch[i]>best)
        {
            best=branch[i];
            k=i;
        }
    }
    printf("The best selling branch :%d\n",k+1);
    low=prod[0];
    for ( i = 0; i < 5; i++)
    {
        if (prod[i]<low)
        {
            low = prod[i];
            l=i;
        }
    }
    printf("Product %d has lowest sales overall\n",l+1);
return 0;
}