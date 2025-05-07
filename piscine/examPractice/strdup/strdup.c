

int ft_strlen(char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

char *strdup(char *src){

	int i = 0;
	char *tab;
	int size = ft_strlen(str);
	
	tab = (char *)malloc((size + 1) * sizeof(char));
	if(!tab){
		return NULL;
	}
	
	while(i < size){
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return tab;
}
