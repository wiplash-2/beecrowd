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
            //ara[row][col] = 1;
        }
    }int count=5;
    for (int i=7; i<range; i++){
    int j;
        for (j=count; j<range-count; j++){
            sum += ara[i][j];
        }
        count--;//printf("%d count \n", count);
        j=count;
    }
    if (ch=='S'){
        printf("%.1lf\n", sum);
    }
    if (ch == 'M'){
        printf("%.1lf\n", sum/30.0);
    }
    return 0;
}
