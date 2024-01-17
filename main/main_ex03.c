#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int dividend = 20;
    int divisor = 3;
    int division_result, modulo_result;

    ft_div_mod(dividend, divisor, &division_result, &modulo_result);

    printf("Divisore: %d\nResto: %d\n", division_result, modulo_result);

    return 0;
}
