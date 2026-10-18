
#include <stdio.h>

int main()
{
    int rooms[4][6], vacant[4];
    int i, j, max, floor, count;
    for (i = 0; i < 4; i++)
    {
        printf("Enter(1 to book,0 if you dont want to book) rooms for floor %d :\n", i + 1);
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &rooms[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        vacant[i] = 0;
        for (j = 0; j < 6; j++)
        {
            if (rooms[i][j] == 0)
            {
                vacant[i]++;
            }
        }
        printf("Vacant rooms on floor %d = %d\n",
               i + 1, vacant[i]);
    }
    max = vacant[0];
    floor = 0;
    for (i = 1; i < 4; i++)
    {
        if (vacant[i] > max)
        {
         max = vacant[i];
         floor = i;
        }
    }
    printf("Floor with most vacancies = %d\n", floor + 1);
    for (i = 0; i < 4; i++)
    {
        count = 0;
        for (j = 0; j < 6; j++)
        {
            if (rooms[i][j] == 0)
            {
                count++;
                if (count == 3)
                {
                    printf("Floor %d has 3 or more consecutive room \n Its starting room %d\n", i + 1, j - 1);
                }
            }
            else
            {
                count = 0;
            }
        }
    }
    return 0;
}
