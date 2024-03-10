#include <stdio.h>
int is_large(int x, int y){
    if (x>y){
        return x;
    }else{
        return y;
    }
}
int main()
{
    int l, c, x_one, x_two;
    while(1){
        scanf("%d %d %d %d", &l, &c, &x_one, &x_two);
        if ((l==0 && c==0 && x_two==0 && x_one==0)){
            break;
        }
        int x = x_one*2 + x_two*2;
        int y, large;
        large = is_large(l, c);
        y = is_large(x_two, x_one);
        if ( x <= l){
            if (y>=c){
                printf("S\n");
            }else{
                printf("N\n");
            }
        }else if(y<=l){
            if (x <= c){
                printf("S\n");
            }else{
                printf("N\n");
            }
        }else{
            printf("N\n");
        }
    }

    return 0;
}
