#include <stdio.h>
int main()
{
    unsigned ara[] = {1, 7, 9, 3};
    unsigned start;
    scanf("%u", &start);
    while(start--){
        unsigned number;
        scanf("%u", &number);
        printf("%u\n", ara[number%4]);
    }

    return 0;
}
