#include <stdio.h>
int main(){
    int count=0;
    char str[1000];
    scanf("%s", str);
    int i=0;
    while (str[i] != '\0'){
        if (str[i] == '1'){
            count++;
        }
        i++;
    }
    if (count%2==0){
        str[i] = '0';
    }else{
        str[i] = '1';
    }
    str[i+1] = '\0';
    printf("%s\n", str);
    return 0;
}
