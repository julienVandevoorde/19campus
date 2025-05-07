/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word_J.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:06:03 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/20 14:28:54 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char *str){
	int i = 0;

	while(str[i] == 32 || str[i] == '\t')
		i++;
	while(str[i] != '\0' && str[i] != 32 && str[i] != '\t'){
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[]){
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
