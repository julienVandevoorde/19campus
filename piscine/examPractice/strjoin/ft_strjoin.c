/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvandevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:40:12 by jvandevo          #+#    #+#             */
/*   Updated: 2025/02/23 11:32:40 by jvandevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
	//vetifier si size est vide
	if(size == 0){
		char *vide = (char *)malloc(1 * sizeof(char));
		vide[0] = '\0';
		return vide;
		
	}

	//trouver la length du sep
	int s = 0;
	while(sep[s] != '\0'){
		s++;
	}

	//trouver la taille complete
	int i = 0;
	int taille = 0;

	while(i < size){
		int j = 0;
		while(strs[i][j] != '\0'){
			taille++;
			j++;	
		}
		i++;
	}
	taille = taille + (size * s - s); //car la last concat n'aura pas de virgule apres

	//allouer la memoir necessaire avec la taille
	char *dest; //ce que je vais return
	dest = (char *)malloc((taille + 1)*sizeof(char));

	//concatener les strings dans dest
	int m = 0;
	int h = 0;
	while(m < size){
		int n = 0;
		while(strs[m][n] != '\0'){
			dest[h] = strs[m][n];
			n++;
			h++;
		}
		if(m < size - 1){
			int x = 0;
			while(sep[x] != '\0'){
				dest[h] = sep[x];
				x++;
				h++;
			}
		}
		m++;
	}
	dest[h] = '\0';
	return dest;
}


int main()
{
    char *strs[] = {"Hello", "World", "42"};
    char *sep = ", ";
    int size = 3;

    char *result = ft_strjoin(size, strs, sep);
    if (result)
    {
        printf("Résultat : %s\n", result);
        free(result);
    }
    return 0;
}

