#include <stdlib.h>
#include <stdio.h>

int ft_strlen(int nb){

	int size = 0;
	if(nb < 0){
		nb = -nb;
		size++;
	}
	while(nb > 0){
		nb = nb / 10;
		size++;
	}
	return size;
}

char *ft_itoa(int nb){

	int size = ft_strlen(nb);
	char *tab;
	
	tab = (char *)malloc((size + 1) * sizeof(char));
	if(!tab)
		return NULL;
	tab[size] = '\0';
	size--;
	if(nb == 0){
		tab[0] = '0';
		return tab;		
	}
	if(nb < 0){
		nb = -nb;
		tab[0] = '-';
	}
	while(nb > 0){
		tab[size] = '0' + (nb % 10);
		nb = nb / 10;
		size--;
	}
	return tab;
}

int main(void){
	int nb = -1234567890;
	char *a = ft_itoa(nb);
	printf("%s\n", a);

}
