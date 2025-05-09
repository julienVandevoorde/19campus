/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:54:43 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:59:36 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return 0;
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    int	result;

    if (argc != 4)
    {
        printf("Please put 3 variables");
        return (0);
    }
    result = ft_memcmp((const void*)argv[1], (const void*)argv[2],
        (size_t)ft_atoi(argv[3]));
    printf("%d", result);
    return (0);
}*/