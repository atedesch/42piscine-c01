#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int dividend = 20;
    int divisor = 3;

    printf("Prima della divisione: dividend = %d, divisor = %d\n", dividend, divisor);
    ft_ultimate_div_mod(&dividend, &divisor);
    printf("Dopo la divisione: Quoziente = %d, Resto = %d\n", dividend, divisor);

    return 0;
}
