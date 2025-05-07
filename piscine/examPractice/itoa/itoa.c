#include <stdlib.h>

int	ft_strlen(int nbr)
{
	int size = 0;
	if (nbr < 0){
		nbr = -nbr;
		size++;
	}
	while ( nbr > 0){
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int	size = ft_strlen(nbr);
	
	res = (char *) malloc(size + 1 * sizeof(char));
	if (!res)
		return (0);
	res[size] = '\0';
	size--;
	if (nbr == 0)	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)	{
		res[size] = '0' + (nbr % 10) ;
		nbr = nbr / 10;
		size--;
	}
	return (res);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(-8938198));
}
