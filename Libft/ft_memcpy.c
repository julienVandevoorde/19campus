/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:31:48 by jvandevo          #+#    #+#             */
/*   Updated: 2025/04/24 15:16:23 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memcpy(void *dst, const void *src, size_t n){
    unsigned char *temp_dst;
    unsigned char *temp_src;

    if(!src && !dst){
        return dst;
    }
    temp_dst = (unsigned char *) dst;
    temp_src = (unsigned char *) src;
    while(n > 0){


        *(temp_dst++) = *(temp_src++);        
        n--;
    }
    return (dst);

}




void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /* declare a temporary pointer for dst */
    /* declare a temporary pointer for src */
    
    /* if src and dst are NULL, return dst */
    /* make dst tmp pointer equal to dst converted to unsigned char * */
    /* make src tmp pointer equal to src converted to unsigned char * */
    /* loop over the dst tmp pointer while we didn't reach n */
        /* set the current byte of dst tmp pointer equal to current byte of src tmp pointer */
        /* return dst */
}