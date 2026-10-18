
#include <stdio.h>
int main()
{
    int stock[3][4][5];
    int i,j,k,btotal,shelfTotal;
    int high=-1,bestB=0,bestS=0;
    for(i=0;i<3;i++)
    {
        printf("Building %d\n",i+1);
        for(j=0;j<4;j++)
        {
            printf("Shelf %d:\n",j+1);
            for(k=0;k<5;k++)
            {
                printf("Enter items in slot %d: ",k+1);
                scanf("%d",&stock[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        btotal=0;
        for(j=0;j<4;j++)
        {
            shelfTotal=0;
            for(k=0;k<5;k++)
            {
                shelfTotal+=stock[i][j][k];
                if(stock[i][j][k]<5)
                {
                    printf("Needs restock: Building %d, Shelf %d, Slot %d\n",
                           i+1,j+1,k+1);
                }
            }
            btotal+=shelfTotal;
            if(shelfTotal>high)
            {
                high=shelfTotal;
                bestB=i;
                bestS=j;
            }
        }
        printf("Total stock of Building %d = %d\n",i+1,btotal);
    }
    printf("Fullest shelf is Shelf %d of Building %d\n",
           bestS+1,bestB+1);
    printf("Items in fullest shelf = %d\n",high);
    return 0;
}
