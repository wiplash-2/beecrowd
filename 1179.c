#include <stdio.h>

int main()
{
    int par[5], impar[5];// ara[15];
    int num, count=0, count2=0;
    /*for (int i=0; i<15; i++){
        scanf("%d", &ara[i]);
    }*/int ara[15]={1,3,4,-4,2,3,8,2,5,-7,54,76,789,23,98};
    for (int i=0; i<15; i++){
        num = ara[i];
        if (num%2==0){
            par[count] = num;
            if (count == 4){
                for (int i=0; i<5; i++){
                    printf("par[%d] = %d\n",i,par[i]);
                }
                count = 0;
            }else{
                count++;
            }
        }else{
            impar[count2] = num;
            if (count2 == 4){
                for (int i=0; i<5; i++){
                    printf("impar[%d] = %d\n",i,impar[i]);
                }
                count2 = 0;
            }else{
                count2++;
            }
        }
    }
        for(int j=0; j<count2; j++){
                printf("impar[%d] = %d\n", j, impar[j] );
            }
            for(int j=0; j<count; j++){
                printf("par[%d] = %d\n", j, par[j] );
            } return 0;
        }
