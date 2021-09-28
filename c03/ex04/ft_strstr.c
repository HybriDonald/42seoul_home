int	ft_to_find(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0] && ft_to_find(&str[i], &to_find[0]))
			return (&str[i]);
		i++;
	}
	return (&str[i]);
}
