/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:50:32 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:13:38 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dest;
    unsigned int len;
    unsigned int i;

    len = ft_strlen(s1);
    i = 0;
    dest = malloc((len + 1) * sizeof(char));
    if (dest == NULL)
    {
        return NULL;
    }

    while (i < len)
    {
        dest[i] = s1[i];
        i++;
    }
    dest[len] = '\0';

    return (dest);
}