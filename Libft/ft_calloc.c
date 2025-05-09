/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:40:11 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:57:01 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *str;

    if (count > 0 && size > SIZE_MAX / count)
        return (NULL);
    str = malloc(count * size);
    if (!str)
        return (NULL);
    ft_bzero(str, count * size);
    return (str);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    unsigned char* result;
    int	i;

    if (argc != 3)
    {
        printf("Please put 2 numbers");
        return (0);
    }
    result = ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
    i = 0;
    while (i < (ft_atoi(argv[1]) * ft_atoi(argv[2])))
    {
        printf("%d", result[i]);
        i++;
    }
    return (0);
}*/