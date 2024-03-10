#include <stdio.h>
int main(){
    int a, b;
    while (1){
        int sum=0, temp;
        scanf("%d %d", &b, &a);
        if (b<a){
            temp = a;
            a = b;
            b = temp;
        }
        if (a<=0 || b<=0){
            break;
        }
        for (int i=a; i<=b; i++){
            printf("%d ",i);
            sum += i;
        }
        printf("Sum=%d\n", sum);   
    }
    return 0;
}
