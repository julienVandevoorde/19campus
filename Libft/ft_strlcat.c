/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:51:29 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/09 17:02:52 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t dest_len;
    size_t src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (dest_len >= size)
        return (size + src_len);

    i = 0;
    while (src[i] && (dest_len + i) < (size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}