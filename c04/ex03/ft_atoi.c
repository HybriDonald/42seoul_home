char	ft_is_pm(char c)
{
	if (c == '+')
		return ('+');
	else if (c == '-')
		return ('-');
	return (0);
}

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_valid(char c)
{
	if ((c == ' ' || c == '\n' || c == '\t'
			|| c == '\v' || c == '\f' || c == '\r')
		|| ft_is_pm(c) || ft_is_digit(c))
		return (1);
	return (0);
}

int	ft_put_result(char *c)
{
	int	result;
	int	place;

	result = 0;
	place = 1;
	while (ft_is_digit(*c))
		c++;
	c--;
	while (*(c) && ft_is_digit(*c))
	{
		result += (*c - '0') * place;
		place *= 10;
		c--;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		pm_flag;

	result = 0;
	i = 0;
	pm_flag = 0;
	while (str[i] && ft_is_valid(str[i]))
	{
		if (ft_is_pm(str[i]) == '-')
			pm_flag++;
		if (ft_is_digit(str[i]))
			break ;
		i++;
	}
	if (ft_is_digit(str[i]))
		result = ft_put_result(&str[i]);
	if (pm_flag % 2)
		result = result * -1;
	return (result);
}
