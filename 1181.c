#include <stdio.h>
int main()
{
    int line;
    double sum=0, avg=0;
    double ara[12][12];
    scanf("%d", &line);
    char ch;
    scanf(" %c", &ch);
    for (int row=0; row<12; row++){
        for (int col=0; col<12; col++){
            scanf("%lf", &ara[row][col]);
        }
    }
    for (int j=0; j<12; j++){
        sum += ara[line][j];
    }
    if (ch=='S'){
        printf("%.1lf\n", sum);
    }
    if (ch == 'M'){
        printf("%.1lf\n", sum/12);
    }
    return 0;
}

