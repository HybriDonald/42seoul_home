#include <assert.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab1[10] = { -84, 7, -83, -62, 65, 98, 52, -34, 60, -89 };
    int sorted_tab1[10] = { -89, -84, -83, -62, -34, 7, 52, 60, 65, 98 };

    int tab2[11] = { 10, 26, 39, 99, -95, 95, 39, 24, -62, -50, 92 };
    int sorted_tab2[11] = { -95, -62, -50, 10, 24, 26, 39, 39, 92, 95, 99 };

    int tab3[1] = { 123 };
    int sorted_tab3[1] = { 123 };

    ft_sort_int_tab(tab1, 10);
    ft_sort_int_tab(tab2, 11);
    ft_sort_int_tab(tab3, 1);

    for(int i = 0; i < 10; i++)
        assert(tab1[i] == sorted_tab1[i]);
    
    for(int i = 0; i < 11; i++)
        assert(tab2[i] == sorted_tab2[i]);
    
    assert(tab3[0] == sorted_tab3[0]);

    return 0;
}