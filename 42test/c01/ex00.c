#include <assert.h>
 
void ft_ft(int *nbr);

int main(void)
{
    int nbr = 99;
    ft_ft(&nbr);
    assert(nbr == 42);
    return 0;
}