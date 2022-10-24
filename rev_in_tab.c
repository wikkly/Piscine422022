#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = t;
		ft_putchar(tab[i]);
		i++;
	}
}

int	main(void)
{
	int tab[] = {'1','2','3','4'};
	ft_rev_int_tab(tab, 4);
}
