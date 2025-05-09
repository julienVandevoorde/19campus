/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:38:33 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:01:33 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }

    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
    char* result = NULL;

    if (argc != 2)
    {
        printf("Please put 2 variables");
        return (0);
    }
    result = strchr(result, argv[1][0]);
    if (result == NULL)
        printf("Character not found");
    else
        printf("%s", result);
    return (0);
}*/