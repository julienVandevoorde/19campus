/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:22:44 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:05:15 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dest;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    dest = ft_calloc(len + 1, sizeof(char));
    if (!dest)
        return (NULL);
    while (i < len)
    {
        dest[i] = s[start + i];
        i++;
    }
    return (dest);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    char* result;

    if (argc != 4)
    {
        printf("Please put 3 variables");
        return (0);
    }
    result = ft_substr((const char*)argv[1], (unsigned int)ft_atoi(argv[2]),
        (size_t)ft_atoi(argv[3]));
    printf("%s", result);
    return (0);
}*/