/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n > m){
        int temp = m;
        m = n;
        n = temp;
    }for (int i=n+1; i<m; i++){
        if (i%5==2 || i%5==3){
            printf("%d\n", i);
        }
    }

    return 0;
}

