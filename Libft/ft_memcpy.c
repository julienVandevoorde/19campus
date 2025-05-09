/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:31:48 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:00:05 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *temp_dst;
    unsigned char *temp_src;

    if (!src && !dst)
    {
        return dst;
    }
    temp_dst = (unsigned char *)dst;
    temp_src = (unsigned char *)src;
    while (n > 0)
    {

        *(temp_dst++) = *(temp_src++);
        n--;
    }
    return (dst);
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
    result = ft_memcpy(dest, argv[1], (size_t)ft_atoi(argv[2]));
    printf("%s", dest);
    return (0);
}*/