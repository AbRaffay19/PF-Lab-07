#include<stdio.h>
int main()
{
    int marks[3][4][5];
    int i,j,k,r,d,t=0,topper[4],top,fail;
    float avg,high,dptavg[3],depavg;
    {
        for ( i = 0; i < 3; i++)
        {
            printf("--------Department %d--------\n",i+1);
            for ( j = 0; j < 4; j++)
            {
                printf("Enter Marks of student %d:\n",j+1);
                for ( k = 0; k < 5; k++)
                {
                    printf("Subject %d:\n",k+1);
                    scanf("%d",&marks[i][j][k]);
                }
            }
        }
    }
    high=-99;
         for ( i = 0; i < 3; i++)
        {       depavg=0;
               top=-99;
            printf("====DEPARTMENT %d====",i+1);
            for ( j = 0; j < 4; j++)
            {
                fail=0;
                for ( k = 0; k < 5; k++)
                {
                    if (marks[i][j][k]<40)
                        {
                            fail=1; 
                        }   
                    t+=marks[i][j][k];  
                }
                    topper[j]=t;
                    depavg+=t;
                    avg=t/5.0;
                    printf("\nAverage of student %d=%.2f\n",j+1,avg);
                    if (fail==1)
                        {
                            printf("Student %d of Department %d is Fail\n",j+1,i+1);
                        }                    
                    t=0;
                    if (topper[j]>top)
                        {
                            r=j;
                            top=topper[j];
                        }                
            }
             printf("Student %d is topper of Department %d\n",r+1,i+1);
                dptavg[i]=depavg/20.0;  
            if (dptavg[i]>high) 
            {
                high = dptavg[i];
                d=i;
            }
        }
        printf("Department %d has highest average =%.2f ",d+1,high);
        return 0;
}