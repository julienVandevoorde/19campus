/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_J.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:46:05 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/20 15:52:58 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot_13(char *str){

	int i = 0;

	while(str[i] != '\0'){
		if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')){
			
			str[i] = str[i] + 13;
		} else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z')){
			str[i] = str[i] - 13;
		}
		i++;
	}
	i = 0;
	while(str[i] != '\0'){
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[]){

	if(argc == 2){
		rot_13(argv[1]);
	}
	write(1, "\n", 1);
}
