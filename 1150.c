#include <stdio.h>
int main(){
    int x, z;
    scanf("%d", &x);
    while(1){
        scanf("%d", &z);
        if (x<z){
            break;
        }
    }int sum=0, count=0;
    for (int i=x; i<z; i++){
        sum += i;
        count++;
        if (sum > z){
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}
