#define TEST_CASES 10

#include <assert.h>

void ft_is_negative(int n);

int main()
{
    int n[TEST_CASES] = { 2147483647, -2147483648, 0, 1, 345, 5675, -23423, -234234, 1231, 5406897 };
    for(int i = 0; i < TEST_CASES; i++)
        ft_is_negative(n[i]);
    return 0;
}