unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*(str + count))
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_size;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	dest_size = ft_strlen(dest);
	count = ft_strlen(src);
	if (count > nb)
		count = nb;
	while (src[i] && i < count)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
