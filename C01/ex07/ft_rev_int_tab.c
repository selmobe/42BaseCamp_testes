void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	*array;

	array = tab + size - 1;
	i = 0;
	while (i < size / 2)
	{
		swap = *tab;
		*tab = *array;
		*array = swap;
		tab++;
		array--;
		i++;
	}
}
