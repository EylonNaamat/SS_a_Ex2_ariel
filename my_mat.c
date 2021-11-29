#include <stdio.h>
#include "my_mat.h"


int mat [10][10];

int min(int a, int b)
{
  return ((a < b) ? a : b);
}


void shortestPath()
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i != j && mat[i][j] == 0)
            {
                mat[i][j] = (__INT_MAX__);
            }
        }
    }

    for(int k = 0; k < 10; k++)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                int temp = 0;
                if(mat[i][k] == __INT_MAX__ || mat[k][j] == __INT_MAX__)
                {
                    temp = __INT_MAX__;
                }
                else
                {
                    temp = mat[i][k] + mat[k][j];
                }
                mat[i][j] = min(mat[i][j], temp);
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(mat[i][j] >= (__INT_MAX__))
            {
                mat[i][j] = 0;
            }
        }
    }
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
    shortestPath(); 
}


void function2(int i, int j)
{
    if(mat[i][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void function3(int i, int j)
{
    if(mat[i][j] != 0)
    {
        printf("%d\n", mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}




