/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:11:51 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:02:16 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dest;
    size_t size;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2);
    dest = (char *)malloc((size + 1) * sizeof(char));
    if (!dest)
        return (NULL);
    i = 0;
    while (s1[i] != 0)
    {
        dest[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != 0)
        dest[i++] = s2[j++];
    dest[i] = '\0';
    return (dest);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    char* result;

    if (argc != 3)
    {
        printf("Please put 2 variables");
        return (0);
    }
    result = ft_strjoin((const char*)argv[1], (const char*)argv[2]);
    printf("%s", result);
    return (0);
}*/