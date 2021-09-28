#include <unistd.h>

int	ft_is_blank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		 || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126 || ft_is_blank(base[i]))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_print_nbr(unsigned int nb, char *base, int len)
{
	char	c[62];
	int		i;

	i = 0;
	while (nb > 0)
	{
		c[i] = base[nb % len];
		nb = nb / len;
		i++;
	}
	i--;
	while (c[i])
		write(1, &c[i--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	nb;

	base_len = ft_valid_base(base);
	nb = nbr;
	if (!base_len)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = nbr * (-1);
	}
	else if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	ft_print_nbr(nb, base, base_len);
}
