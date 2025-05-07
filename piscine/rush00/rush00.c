/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:51:04 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/09 13:42:37 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void first_or_last_row(int x, int x_max){
    //si c'est le premier ou dernier caractere
    if(x == x_max || x == 1){
        ft_putchar('o');
    } else {
        ft_putchar('-');
    }
}

void middle_row(int x, int x_max){
    if(x == x_max || x == 1){
        ft_putchar('|');
    } else {
        ft_putchar(' ');
    }
}

void rush(int x, int y){
    
    int y_max = y;
    int x_max = x;
    
    if(x > 0 && y > 0){
        while(y != 0){
            x = x_max;
    
            while(x != 0){
                //si cest la premiere ou derniere ligne
                if(y == y_max || y == 1){
                    first_or_last_row(x, x_max);
                //si c'est ni la premiere ni la derniere ligne    
                } else {
                    middle_row(x, x_max);
                }
                x--; //decrementer le nombre de caractere
            }
            ft_putchar('\n');
            y--; //decrementer y pour le nombre de ligne
        }
    }
}



//main
int main()
{
rush(8, 3);
return (0);
}
