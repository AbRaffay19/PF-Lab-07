#include<stdio.h>
int main()
{
char board[3][3];
int i,j,win;
printf("Enter characters x,o,-:\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        scanf(" %c",&board[i][j]);    
    }
}
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
        {
            printf("Winner: %c\n", board[i][0]);
            win = 1;
        }
    }
    for ( i = 0; i < 3; i++)
    {
        if ((board[0][i] == board[1][i]) && 
        (board[1][i] == board[2][i]))
        {
            win=1;
            printf("Winner: %c\n",board[0][i]);
        }
    }

        if ((board[0][0] == board[1][1]) && 
        (board[1][1] == board[2][2]))
        {
            win=1;
            printf("Winner: %c\n",board[0][0]);
        }
         if ((board[0][2] == board[1][1]) && 
        (board[1][1] == board[2][0]))
        {
            win=1;
            printf("Winner: %c\n",board[0][2]);
        }
if (win==0)
{
    printf("Draw");
}
return 0;
}