/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int attemts;
    double low=0,n;
    while (scanf("%d", &attemts) != EOF){
        scanf("%lf", &low);
        for (int i=0; i<attemts-1; i++){
            scanf("%lf", &n);
            if ((double) low > (double)n){
                low = n;
            }
        }printf("%0.2lf\n", low);
    }
    return 0;
}
