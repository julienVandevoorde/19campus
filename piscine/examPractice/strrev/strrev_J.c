/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev_J.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:22:23 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/20 20:56:37 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

char *ft_strrev(char *s1){
	int i = 0;
	int size = ft_strlen(s1);
	char temp;

	while(i < size / 2){
		temp = s1[i];
		s1[i] = s1[size - 1 - i];
		s1[size - 1 - i] = temp;
		i++;
	}
	return s1;
}

int main(void){
	char a[] = "salut";
	printf("%s\n", ft_strrev(a));
}
