/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:11:51 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/08 16:46:31 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *str){
    unsigned int i;
    i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

char *ft_strjoin(char const *s1, char const *s2){
    unsigned int i;
    unsigned int j;
    unsigned int k;
    char *dest;

    i = 0;
    j = 0;
    k = 0;
    dest = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if(!dest){
        return NULL;
    }

    while(s1[i]){
        dest[k] = s1[i];
        i++;
        k++;
    }
    while(s2[j]){
        dest[k] = s2[j];
        j++;
        k++;
    }

    dest[k] = '\0';
    return dest;
}