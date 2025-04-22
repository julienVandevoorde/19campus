/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:50:12 by jvandevo          #+#    #+#             */
/*   Updated: 2025/04/17 14:01:34 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

/*
#include <stdio.h>
int main(void){
    printf("%d\n", ft_strlen("coucuuuou"));
}
*/