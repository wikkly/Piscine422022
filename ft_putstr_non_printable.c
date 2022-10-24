
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_non_printable(char chr)
{
	if (chr < 32 || chr >= 127)
		return (0);
	return (1);
}

void	ft_hexa(unsigned char chr)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[chr / 16]);
	ft_putchar(base[chr % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_non_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_hexa(str[i]);
		i++;
	}
}
