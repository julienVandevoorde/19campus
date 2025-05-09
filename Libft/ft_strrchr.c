/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:00:52 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:15:48 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char *last;

    i = 0;
    last = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            last = (char *)(s + i);
        i++;
    }
    if (s[i] == (char)c)
        last = (char *)(s + i);
    return (last);
}
