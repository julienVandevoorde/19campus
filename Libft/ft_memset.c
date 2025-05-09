/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:05:47 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 16:10:21 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp;

    temp = (unsigned char *)b;
    while (len > 0)
    {
        *(temp++) = (unsigned char)c;
        len--;
    }
    return (b);
}
