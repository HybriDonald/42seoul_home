void ft_putstr(char *str);

int main(void)
{
    char * string0 = "abcdefghijklmnopqrstuzwxyz\n";
    char * string1 = "~!@#%^&*()_+\n";
    char * string2 = "1 2  3   4    .";

    ft_putstr(string0);
    ft_putstr(string1);
    ft_putstr(string2);

    return 0;
}