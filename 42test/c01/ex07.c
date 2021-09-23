#include <assert.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed_tab1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int tab2[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int reversed_tab2[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int tab3[1] = {1};
    int reversed_tab3[1] = {1};

    ft_rev_int_tab(tab1, 10);
    ft_rev_int_tab(tab2, 11);
    ft_rev_int_tab(tab3, 1);

    for(int i = 0; i < 10; i++)
        assert(tab1[i] == reversed_tab1[i]);
    
    for(int i = 0; i < 11; i++)
        assert(tab2[i] == reversed_tab2[i]);
    
    assert(tab3[0] == reversed_tab3[0]);
    
    return 0;
}