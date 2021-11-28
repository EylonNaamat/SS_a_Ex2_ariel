#include <stdio.h>
#include "my_mat.h"


int mat [10][10];

int min(int a, int b)
{
  return ((a < b) ? a : b);
}


void function1()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    } 
}


void function2(int i, int j)
{
    for(int n = 0; n < 10; n++)
    {
        for(int m = 0; m < 10; m++)
        {
            for(int k = 0; k < 10; k++)
            {
                if(mat[m][k] == 0 && m != k)
                {
                    mat[m][k] = mat[m][n] + mat[n][k];
                }
            }
        }
    }
    if(mat[i][j] > 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

void function3(int i, int j)
{
    for(int n = 0; n < 10; n++)
    {
        for (int m = 0; m < 10; m++)
        {
            for (int k = 0; k < 10; k++)
            {
                int temp = mat[m][n] + mat[n][k];
                mat[m][k] = min(mat[m][k], temp);
            }
        }
    }
    if(mat[i][j] != 0)
    {
        printf("%d", mat[i][j]);
    }
    else
    {
        printf("-1");
    }
}




