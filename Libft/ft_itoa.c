/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:50:13 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:58:32 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_strlenR(int nbr)
{
	int size;

	size = 0;
	if (nbr <= 0)
		size++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char *ft_itoa(int n)
{
	char *str;
	int len;
	long nbr;

	nbr = n;
	len = ft_strlenR(nbr);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
	char*	result;
	char* result2;

	if (argc != 2)
	{
		printf("Please put one variable");
		return (0);
	}
	result = ft_itoa(ft_atoi(argv[1]));
	printf("%s, %s", result, result2);
	return (0);
}*/