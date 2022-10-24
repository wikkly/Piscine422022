#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

char	*fullsize(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	k;
	int	j;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		total_size;

	i = 0;
	total_size = 0;
	if (size == 0)
	{
		tab = (char *) malloc(sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	tab = (char *) malloc(sizeof(char)
			* (total_size + ft_strlen(sep) * (size - 1) + 1));
	tab = fullsize(size, strs, sep, tab);
	return (tab);
}
