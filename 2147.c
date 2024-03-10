#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        char str[10001];
        scanf(" %[^\n]%*c", str);
        int i=0; double count=0;
        while(str[i] != '\0'){
            count++;
            i++;
        }
        double result = count/100;
        printf("%.2lf\n", result);
    }
    return 0;
}
