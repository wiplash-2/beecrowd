
#include <stdio.h>

int main()
{
    char ch;
    int n, data, total_animal, rab_count=0, rat_count=0, frog_count=0;
    double rab_per, rat_per, frog_per;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %c", &data, &ch);
        if (ch == 'C'){
            rab_count+=data;
        }else if(ch == 'R'){
            rat_count+=data;
        }else{
            frog_count+=data;
        }
    }total_animal = rab_count+rat_count+frog_count;
    rab_per = (rab_count * 100)/(double)total_animal;
    rat_per = (rat_count * 100)/(double)total_animal;
    frog_per = (frog_count * 100)/(double)total_animal;
    printf("Total: %d cobaias\n", total_animal);
    printf("Total de coelhos: %d\n", rab_count);
    printf("Total de ratos: %d\n",rat_count);
    printf("Total de sapos: %d\n",frog_count);
    printf("Percentual de coelhos: %.2lf %%\n", rab_per);
    printf("Percentual de ratos: %.2lf %%\n", rat_per);
    printf("Percentual de sapos: %.2lf %%\n", frog_per);
    return 0;
}
