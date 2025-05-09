/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:19:39 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:15:14 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
