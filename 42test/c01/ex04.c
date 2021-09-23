#define TEST_CASES 10

#include <assert.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a[TEST_CASES] = {0, 2, 20, 45, 13, 7, 9, 100, 2304121, (1<<31)};
    int b[TEST_CASES] = {1, 2, 4, 13, 6, 10, 2, 5, 123123, 987654321};
    
    int correct_div, correct_mod;

    for(int i = 0; i < TEST_CASES; i++)
    {
        correct_div = a[i] / b[i];
        correct_mod = a[i] % b[i];
        ft_ultimate_div_mod(a + i, b + i);

        assert(a[i] == correct_div);
        assert(b[i] == correct_mod);
    }

    return 0;
}