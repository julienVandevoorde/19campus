/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:05:47 by jvandevo          #+#    #+#             */
/*   Updated: 2025/04/22 10:24:09 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *b, int c, size_t len){
    unsigned char *temp;

    temp = (unsigned char *) b;

    while(len > 0){
        len--;
    }
    
}


void    *ft_memset(void *b, int c, size_t len)
{
    /* declare a temporary unsigned char * */
    /* make this temporary variable equals to void *b converted to unsigned char */
    /* loop on the temporary variable while we didn't reach len */
        /* in that loop, set the current byte equal to c converted to unsigned char */
    /* return void *b */
}