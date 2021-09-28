#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	char	binary[] = "01";
	char	eight[] = "poneyvif";
	char	what[] = "qwertyuiop";
	char	error[] = "1";
	char	err[] = "";
	char	er[] = "1+2+3-4-5";
	char	e[] = "12132435467";
	char	r[] = "123456 7890";
	int		nbr = 12345;

	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, binary);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, eight);
	write(1, "\n", 1);
	ft_putnbr_base(-nbr, what);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, error);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, err);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, er);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, e);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, r);
	write(1, "\n", 1);
	return (0);
}
