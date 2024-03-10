#include <stdio.h>
int main()
{
    int N, M, t_row, t_col, o_row, o_col;
    while(scanf("%d %d", &N, &M)!=EOF){
        int ara[N][M];
        for (int row=0; row<N; row++){
            for (int col=0; col<M; col++){
                scanf("%d", &ara[row][col]);
                if (ara[row][col] == 2){
                    t_row = row+1;
                    t_col = col+1;
                }if(ara[row][col] == 1){
                    o_row = row+1;
                    o_col = col+1;
                }
            }
        }
        if (t_row < 0){
            t_row = t_row * (-1);
        }
        if (t_row < 0){
            t_col = t_row * (-1);
        }
        if (t_row < 0){
            o_row = o_row * (-1);
        }
        if (t_row < 0){
            o_col = o_col * (-1);
        }
        int row = t_row - o_row;
        int col = t_col - o_col;
        if (row < 0){
            row = row*(-1);
        }if (col < 0){
            col = col*(-1);
        }
        printf("%d\n", row+col);}
}
