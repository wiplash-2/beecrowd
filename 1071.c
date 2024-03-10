#include <stdio.h>
int main(){
    int a, b, oddSum=0;
    scanf("%d %d", &a, &b);
    if (b%2!=0){
        b += 1;
    }
    for (int i=b+1; i<a; i=i+2){
        oddSum += i;
    }
    printf("%d\n", oddSum);
    return 0;
}
