#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for (int j=0; j<n; j++){
        for (int k=0; k<n-j-1; k++){
            if (ara[k]>ara[k+1]){
                int temp = ara[k];
                ara[k] = ara[k+1];
                ara[k+1] = temp;
            }
        }
    }
    /*for (int l=0; l<n; l++){
        printf("%d ", ara[l]);
    }*/
    int trace[n], trace2[n], pos=0, count_first=0;
    for (int i=0; i<n; i++){
        int count = 0;
        trace2[pos] = ara[i];
        for (int j=i; j<n; j++){
            if (ara[i] == ara[j]){
                count++;
            }
        }
        i = (count_first + count)-1;
        trace[pos] = count;pos++;
        count_first += count;

    }
    for (int l=0; l<pos; l++){
        printf("%d aparece %d vez(es)\n", trace2[l],trace[l]);
    }return 0;
}
