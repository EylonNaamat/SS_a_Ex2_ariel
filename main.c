#include <stdio.h>
#include "my_mat.h"


int main()
{
    char c = 0;
    int i = 0;
    int j = 0;
    scanf("%c", &c);
    while(c != 'D')
    {
        if(c == 'A')
        {
            function1();
        }
        if(c == 'B')
        {
            scanf("%d %d", &i, &j);
            function2(i,j);
        }
        if(c == 'C')
        {
            scanf("%d %d", &i, &j);
            function3(i,j);
        }
        scanf("%c", &c);
    }
}