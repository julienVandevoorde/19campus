/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:54:49 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:03:47 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && (s1[i] || s2[i]))
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
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
    result = ft_strncmp((const char*)argv[1], (const char*)argv[2],
        (size_t)ft_atoi(argv[3]));
    printf("%d", result);
    return (0);
}*/