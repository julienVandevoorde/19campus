/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:07:39 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:00:29 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest2;
    const unsigned char *src2;

    if (!dest && !src && n > 0)
        return (NULL);
    dest2 = (unsigned char *)dest;
    src2 = (const unsigned char *)src;
    i = 0;
    if (src2 < dest2)
    {
        while (n-- > 0)
            dest2[n] = src2[n];
    }
    else
    {
        while (i < n)
        {
            dest2[i] = src2[i];
            i++;
        }
    }
    return (dest);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    void* result;
    char dest[100];

    if (argc != 3)
    {
        printf("Please put 2 variables");
        return (0);
    }
    result = ft_memmove(dest, argv[1], (size_t)ft_atoi(argv[2]));
    printf("%s", dest);
    return (0);
}*/