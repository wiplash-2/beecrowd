#include <stdio.h>
int main(){
    int n, number, for_two=0, for_three=0, for_four=0, for_five=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &number);
        if (number % 2==0){
            for_two++;
        }
        
        if (number % 3==0){
            for_three++;
        }
        
        if (number % 4==0){
            for_four++;
        }
        
        if (number % 5==0){
            for_five++;
        }
    }   printf("%d Multiplo(s) de 2\n", for_two);
        printf("%d Multiplo(s) de 3\n", for_three);
        printf("%d Multiplo(s) de 4\n", for_four);
        printf("%d Multiplo(s) de 5\n", for_five);
}
