#define TAST_CASES 11

#include <assert.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int a_backup, b_backup;
    int a[TAST_CASES] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[TAST_CASES] = {0, 7, 6, 8, 2, 3, 5, 4, 9, 10, 1};

    for(int i = 0; i < TAST_CASES; i++) {
        a_backup = a[i];
        b_backup = b[i];
        
        ft_swap(a + i, b + i);

        assert(a_backup == b[i] && b_backup == a[i]);
    }
    return 0;
}