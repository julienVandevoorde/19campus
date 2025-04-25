/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:07:39 by jvandevo          #+#    #+#             */
/*   Updated: 2025/04/25 14:32:41 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t len){
    char *temp_dest;
    char *temp_src;
    size_t i;

    if(!dest && !src){
        return (NULL);
    }

    temp_dest = (char *) dest;
    temp_src = (char *) src;
    i = 0;

    if(temp_dest > temp_src){
        while(len > 0){
            
            temp_dest[len] = temp_src[len];
            len--;
        }
    } else {
        while(i < len){
            
            temp_dest[i] = temp_src[i];
            i++;
        }
    }
    return (dest);
}