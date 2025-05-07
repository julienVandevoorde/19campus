/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:11:44 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/24 12:11:46 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sep(char *str, char *charset){
	
	//strlen de charset
	int i =  0;
	
	while(str[i] && charset[i] && str[i] == charset[i]){
		i++;
	}
	
	if(charset[i] == '\0'){
		return 1;
	}
	return 0;
}

int	ft_nb_strings(char *str, char *charset){
	
	int i = 0;
	int nb_str = 0;
	while(str[i]){
		if(ft_is_sep(str, charset)){
			nb_str++;
		}
		i++;
	}
	return nb_str;
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	**dest;
	
	i = 0;
	
	while(str[i] != 0){

	}
}

/*

-> decouper une string en pointeurs de pointeurs
-> chaque pointeur contiendra une string (qui se trouve entre charset)
-> calculer un malloc pour savoir combien de strings (premier pointeur)
-> calculer un autre malloc pour savoir la taille de chaque mini strings
-> calculer la taille de charset pour pouvoir prendre la string avant et etre sur que l'on a compare bien notre string avec charset
-> compter 

exemple :
./a.out "Hello, world, 42"

Hello
World
42

*/
