#include <stdio.h>
int main(){
    int n, num;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &num);
        int div = (int) num/2;
        if(num == 2){
            printf("%d eh primo\n", num);
        }
        else if (num%2==0){
            printf("%d nao eh primo\n", num);
        }else{
            int count=0;
            for(int j=3; j<=div; j=j+2){
                if(num%j==0){
                    printf("%d nao eh primo\n", num);
                    count++;
                    break;
                }
            }if(count==0){
                printf("%d eh primo\n", num);
            }
        }
    }return 0;
}
