void	ft_swap(int *a, int *b)
{
	int	changer;

	changer = *a;
	*a = *b;
	*b = changer;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = size - 1;
    int j = 0;

    while (i > j)
    {
        ft_swap(&tab[j],&tab[i]);
        j++;
        i--;
    }
}