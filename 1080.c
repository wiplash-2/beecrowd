#include <stdio.h>
int main(){
    int highest = 0, n, pos;
    for (int i=0; i<100; i++){
        scanf("%d", &n);
        if (n > highest){
            highest = n;
            pos = i;
        }
    }printf("%d\n%d\n", highest, pos+1);
    return 0;
}
