#include <stdio.h>

int main()
{
    int count=0;
    char str[501];
    scanf("%[^\n]%*c", str);
    for (; str[count]!='\0'; count++);
    if (count>80){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}
