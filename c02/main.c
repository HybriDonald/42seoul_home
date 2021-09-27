void	*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    char    c[] = "jklmno*+,-12389fhsadf98h32./:;<=>?JKLMNOP\n\n\n\n\t\t\t\tsd";

    ft_print_memory(c, sizeof(c));
}