#include <stdlib.h>
int count_words(char *str){
	
	int i = 0;
	int count = 0;
	
	while(str[i]){
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;		
		if(str[i] >= 33 && str[i] <= 126)
			count++;
		while(str[i] >= 33 && str[i] <= 126)
			i++;
	}
	return (count);
}

char *ft_strdup(char *start, char *end){
	
	int i = 0;
	char *tab;
	int size = end - start;
	
	tab = (char *)malloc((size + 1) * sizeof(char));
	if(!tab)
		return NULL;
	while(i < size){
		tab[i] = *start;
		i++;
		start++;
	}
	tab[i] = '\0';
	return tab;
}


char **ft_split(char *str){
	
	char **tab;
	char *end;
	char *start;
	int nbr_words = count_words(str);
	int lign = 0;
	int i = 0;
	
	tab = (char **)malloc((nbr_words + 1) * sizeof(char *));
	if(!tab)
		return NULL;
	while(str[i]){
		if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
			i++;
		}
		if(str[i] >= 33 && str[i] <= 126){
			start = &str[i];
			while(str[i] >= 33 && str[i] <= 126)
				i++;
			end = &str[i];
			tab[lign] = ft_strdup(start, end);
			lign++;
		}
	}
	tab[lign] = NULL;
	return tab;
}
#include <stdio.h>

int main(void)
{
    char *str = "Clement De Dessus les Moustier";
    char **tab;
    int i = 0;
    tab = ft_split(str);
    if (!tab)
        return (-1);
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    
    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}

/*

1. fonction count words, pour trouver le nbre de ligne

2. fonction strdup, pour remplir les lignes de strings

3. fonction split qui contient le tout

*/
