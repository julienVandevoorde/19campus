/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:40:11 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/08 11:40:14 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    size_t total_size;
    unsigned char *ptr;
    size_t i;

    total_size = count * size;
    ptr = (unsigned char *)malloc(total_size);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < total_size)
    {
        ptr[i] = 0;
        i++;
    }
    return ((void *)ptr);
}
