#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d", &n);
    for (int j=0; j<n; j++){
        char str[501];
        scanf(" %[^\n]%*c", str);
        int count=0;
        for (; str[count] != '\0'; count++);
        if (str[count-1] == '?'){
            printf("I am Toorg!\n");
        }
    }
    return 0;
}
