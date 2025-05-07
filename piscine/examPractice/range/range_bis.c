#include <stdlib.h>



int *ft_range(int start, int end){

	int i = 0;
	int size;
	int *tab;
	
	if(start == end){
		size = 1;
		tab = (int *)malloc(size * sizeof(int));
		if(!tab)
			return NULL;
		tab[0] = start;
	} else if(start < end){
		size = end - start;
		tab = (int *)malloc((size + 1) * sizeof(int));
		if(!tab)
			return NULL;
		while(i < size + 1){
			tab[i] = start;
			i++;
			start++;
		}
	} else if(start > end){
		size = start - end;
		tab = (int *)malloc((size + 1) * sizeof(int));
		if(!tab)
			return NULL;
		while(i < size + 1){
			tab[i] = start;
			i++;
			start--;
		}
	}
	return tab;
}
