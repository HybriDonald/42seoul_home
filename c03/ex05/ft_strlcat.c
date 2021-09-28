unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_size;
	unsigned int	s_size;

	i = 0;
	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	if (size <= d_size)
		return (s_size + size);
	while (src[i] && i < (size - d_size - 1))
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (d_size + s_size);
}
