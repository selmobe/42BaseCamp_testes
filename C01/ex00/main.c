# include <stdio.h>
void	ft_ft(int *nbr);

int main(void)
{
	int *nbr;
	int n;
	nbr = &n;
	ft_ft(nbr);

	printf("%d", *nbr);
}