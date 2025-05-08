/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <jvandevo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:19:35 by jvandevo          #+#    #+#             */
/*   Updated: 2025/05/08 11:38:02 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str){
    unsigned int i = 0;
    int sign = 1;
    int nb = 0;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)){
        i++;
    }
    if(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-'){
            sign = -sign;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9'){
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (sign*nb);
}