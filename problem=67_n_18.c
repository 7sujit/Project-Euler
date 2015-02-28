#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (a > b)?a:b

int
main(void)
{
    int line_no[101][101] = {0};
    int path_sum[102][102] = {0};
    int i,j;
    int rows = 100;


    for(i = 1; i <= rows; ++i)
    {
        for(j=1; j<= i;scanf("%d",&line_no[i][j]), ++j);
    }

    for(i = 1; i <= rows; ++i)
    {
        for(j = 1; j<= i; ++j)
        {
            path_sum[i][j] = MAX(path_sum[i-1][j-1], path_sum[i-1][j]) ;
            path_sum[i][j] = path_sum[i][j]+ line_no[i][j];

        }
    }
  
    j = path_sum[rows][1];
    for(i=2; i <= rows; ++i)
    {
        if(path_sum[rows][i] > j)
            j = path_sum[rows][i];
    }
    printf("%d\n",j);

    return 0;
}
