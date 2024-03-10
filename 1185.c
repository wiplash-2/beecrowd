#include <stdio.h>
int main()
{
    double sum=0, avg=0; int range=12;
    double ara[range][range];
    //scanf("%d", &column);
    char ch;
    scanf(" %c", &ch);
    for (int row=0; row<range; row++){
        for (int col=0; col<range; col++){
            scanf("%lf", &ara[row][col]);
        }
    }int count=1;
    for (int i=0; i<range; i++){
        for (int j=0; j<(range-count); j++){
            sum += ara[i][j];
        }count++;
    }
    if (ch=='S'){
        printf("%.1lf\n", sum);
    }
    if (ch == 'M'){
        printf("%.1lf\n", sum/66.0);
    }
    return 0;
}
