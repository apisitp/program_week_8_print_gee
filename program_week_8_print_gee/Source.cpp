#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<math.h>

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    scanf("%d", &rows);

    for (i = 1; i <= int(ceil(rows / 2.0)); i++)
    {
        /* Print trailing spaces */
        for (j = i; j < rows / 2.0; j++)
        {
            printf("-");
        }

        /* Print hollow pyramid */
        for (j = 1; j <= (2 * i - 1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */
            if (i == rows || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        for (j = i; j < rows / 2.0; j++)
        {
            printf("-");
        }
        /* Move to next line */
        printf("\n");
    }

    for (i = int(floor(rows / 2.0)); i >= 1; i--)
    {
        /* Print trailing spaces */
        for (j = i; j < rows / 2.0; j++)
        {
            printf("-");
        }

        /* Print hollow pyramid */
        for (j = 1; j <= (2 * i - 1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */
            if (i == rows || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        for (j = i; j < rows / 2.0; j++)
        {
            printf("-");
        }
        /* Move to next line */
        printf("\n");
    }
    return 0;
}

