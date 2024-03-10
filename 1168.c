#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        char ara[102];
        scanf("%s", ara);
        int l = strlen(ara), count=0;
        for (int j=0; j<l; j++){
            if (ara[j] == '0'){
                count += 6;
            }else if(ara[j] == '1'){
                count += 2;
            }else if(ara[j] == '2'){
                count += 5;
            }else if(ara[j] == '3'){
                count += 5;
            }else if(ara[j] == '4'){
                count += 4;
            }else if(ara[j] == '5'){
                count += 5;
            }else if(ara[j] == '6'){
                count += 6;
            }else if(ara[j] == '7'){
                count += 3;
            }else if(ara[j] == '8'){
                count += 7;
            }else if(ara[j] == '9'){
                count += 6;
            }
        }
        printf("%d leds\n", count);
    }
    return 0;
}

