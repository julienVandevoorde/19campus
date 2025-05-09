/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:36:12 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:03:03 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = 0;

    while (src[src_len])
        src_len++;

    if (dstsize == 0)
        return (src_len);

    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return (src_len);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    size_t result;
    char dest[100];

    if (argc != 3)
    {
        printf("Please put 2 variables");
        return (0);
    }
    result = ft_strlcpy(dest, (const char*)argv[1], (size_t)ft_atoi(argv[2]));
    printf("%ld", result);
    return (0);
}*/