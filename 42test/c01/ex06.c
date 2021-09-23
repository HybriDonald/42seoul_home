#include <assert.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
    char * string0 = "abcdefghijklmnopqrstuzwxyz\n";
    char * string1 = "~!@#%^&*()_+\n";
    char * string2 = "1 2  3   4    .";
    
    assert((int)strlen(string0) == ft_strlen(string0));
    assert((int)strlen(string1) == ft_strlen(string1));
    assert((int)strlen(string2) == ft_strlen(string2));

    return 0;
}