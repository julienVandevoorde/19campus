/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:36:12 by jvandevo          #+#    #+#             */
/*   Updated: 2025/04/25 14:48:57 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = 0;
    
    while (src[src_len])
        src_len++;

    if (dstsize == 0)
        return (src_len);
    
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    
    dst[i] = '\0';
    
    return (src_len);
}