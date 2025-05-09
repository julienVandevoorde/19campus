/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:14:34 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:59:42 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *ptr;

    ptr = (const unsigned char *)s;
    i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)(ptr + i));
        i++;
    }
    return (NULL);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    void*	result;

    if (argc != 4)
    {
        printf("Please put 3 variables");
        return (0);
    }
    result = memchr(NULL, argv[2][0], (size_t)ft_atoi(argv[3]));
    if (result != NULL)
        printf ("%c", *(unsigned char*)result);
    else
        printf("Character not found");
    return (0);
}*/