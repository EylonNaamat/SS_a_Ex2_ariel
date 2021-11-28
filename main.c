#include <stdio.h>
#include "my_mat.h"


int main()
{
    char c = 0;
    int i = 0;
    int j = 0;
    //printf("pick a function");
    scanf("%c", &c);
    while(c != 'D')
    {
        if(c == 'A')
        {
            function1();
        }
        if(c == 'B')
        {
            //printf("insert i, j");
            scanf("%d %d", &i, &j);
            function2(i,j);
        }
        if(c == 'C')
        {
            //printf("insert i, j");
            scanf("%d %d", &i, &j);
            function3(i,j);
        }
        //printf("pick a function");
        scanf("%c", &c);
    }
}