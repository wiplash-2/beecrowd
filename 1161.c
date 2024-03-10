
#include <stdio.h>
long long int fac(long long int n){
    long long int result=1;
    for (long long int i=n; i>0; i--){
        result *= i;
    }return result;
}
int main(){
    long long int n, m;
    while(scanf("%lld", &n) && scanf("%lld", &m) != EOF){
        n = fac(n);
        m = fac(m);
        printf("%lld\n", n+m);
    }return 0;
}
