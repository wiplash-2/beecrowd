#include <stdio.h>
int main()
{
    double sum=0, avg=0;
    double ara[12][12];
    //scanf("%d", &column);
    char ch;
    scanf(" %c", &ch);
    for (int row=0; row<12; row++){
        for (int col=0; col<12; col++){
            scanf("%lf", &ara[row][col]);
        }
    }
    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            if (i>j){
                sum += ara[i][j];
            }
        }
    }
    if (ch=='S'){
        printf("%.1lf\n", sum);
    }
    if (ch == 'M'){
        printf("%.1lf\n", sum/66.0);
    }
    return 0;
}
