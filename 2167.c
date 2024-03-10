#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    int current = ara[0], pos = 0;
    for (int i=1; i<n; i++){
        if (current>ara[i]){
            pos=i+1;
            break;
        }else{
            current = ara[i];
        }
    }printf("%d\n", pos);
    return 0;
}
