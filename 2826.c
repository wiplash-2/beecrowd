#include <stdio.h>
int main()
{
    char str1[30], str2[30];
    scanf(" %[^\n]%*c", str1);
    scanf(" %[^\n]%*c", str2);
    int length_f=0, length_s=0, aihi=0;
    for (; str1[length_f]!='\0'; length_f++);
    for (; str1[length_s]!='\0'; length_s++);
    int small;
    if (length_f<length_s){
        small = length_f;
    }else{
        small = length_s;
    }
    int i=0;
    while(i!=small){
        if (str1[i]<str2[i]){
            printf("%s\n%s\n",str1, str2);
            break;
        }else if (str1[i]>str2[i]){
            printf("%s\n%s\n", str2, str1);
            break;
        }
        else{
            i++;
        }if (i>(small-1)){
            aihi++;
            break;
        }
    }
    if (aihi>0){
        if (small == length_f){
            printf("%s\n%s\n",str1, str2);
        }else{
            printf("%s\n%s\n",str2, str1);
        }

    }return 0;
}
