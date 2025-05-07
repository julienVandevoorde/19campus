/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:04:08 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/08 20:04:21 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void first_row(int x, int x_max){
    //si c'est le premier caractere
    if(x == x_max){
        ft_putchar('A');
    } else if(x == 1){
        ft_putchar('C');
    } else {
        ft_putchar('B');
    }
}

void last_row(int x, int x_max){
    if(x == x_max){
        ft_putchar('C');
    } else if(x == 1){
        ft_putchar('A');
    } else {
        ft_putchar('B');
    }
}

void middle_row(int x, int x_max){
    if(x == x_max || x == 1){
        ft_putchar('B');
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
                //si cest la premiere ligne
                if(y == y_max){
                    first_row(x, x_max);
                //si c'est la derniere ligne
                } else if(y == 1){
                    last_row(x, x_max);
                //si cest au milieu
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
int main(){
    rush(9, 6);
    return (0);
}
