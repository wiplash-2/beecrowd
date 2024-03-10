#include <stdio.h>
int main(){
    int nu, m=1, n=1, i=3;
    scanf("%d", &nu);
    if (nu == 1){
        printf("0\n");    
    }else if(nu == 2){
        printf("0 1\n");
    }else if(nu == 3){
        printf("0 1 1\n");
    }else if(nu > 3){
        printf("0 1 1");
        while(i!=nu){
            int temp = m + n;
            m = n;
            n = temp;
            printf(" %d", temp);
            i++;
        }
    }
    printf("\n");

}
