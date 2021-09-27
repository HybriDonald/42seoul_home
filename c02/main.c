void	*ft_print_memory(void *addr, unsigned int size);
void	ft_putstr_non_printable(char *str);

int main(void)
{
    char c[] = "sadflkj\n\n\n\n\n\t\t\t\t";
    char d = (char)127;
    ft_putstr_non_printable(c);
    ft_putstr_non_printable(&d);
    return (0);
}