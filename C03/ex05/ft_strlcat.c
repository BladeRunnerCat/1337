
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && nb > i)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    ft_strlen(ft_strncat(dest,src,size));
}
/* 
/////////////////////////////////////////////////////////////////////

to the old me:
the code above is correct its just that we could used what we created
from the start to finish this faster then we took trying to create
and fix the new one taht we created howover its been love 

/////////////////////////////////////////////////////////////////////
*/