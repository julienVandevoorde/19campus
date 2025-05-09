/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:19:39 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 10:20:05 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *res;

    if (!s || !f)
        return (NULL);

    res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);

    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }

    res[i] = '\0';

    return (res);
}
