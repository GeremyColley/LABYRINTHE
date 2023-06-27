#include <stdio.h>
// #include "global.h"

int main(int argc, char *argv[])
{
    const int NbLine = 3;
    const int NbCol = 3;
    int matrix[NbLine][NbCol] = {{1, 4, 2}, {3, 6, 8}, {10, 5, 78}};
    int i, j;

    for (i = 0; i < NbLine; i++)
    {
        for (j = 0; j < NbCol; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
