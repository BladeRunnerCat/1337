#include <stdio.h>
#include <limits.h>

int d = __INT_MAX__;
void	ft_swap(int *a, int *b)
{
	int	changer;

	changer = *a;
	*a = *b;
	*b = changer;
}


void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j = 1;
    int lop = size - 1;
    while (lop > 0)
    {
        while (j < size)
        {
            if(tab[i] > tab[j])
                ft_swap(&tab[i],&tab[j]);
            i++;
            j++;
            
        }
        j = 1;
        i = 0;
        lop--;
    }
}
int main()
{
    int i = 0;
    int tab[] = {4, 2, 5, 1, 3, 6};
    ft_sort_int_tab(tab,6);
    while (i <= 5)
    {
        printf("%d ", tab[i]);
        i++;
    }
}