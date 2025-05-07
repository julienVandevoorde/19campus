#include <stdlib.h>
#include <stdio.h>

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


int main(void) {
    int start = 2;
    int end = -7;

    int *q = ft_range(start, end);

    if (!q) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    int size;
    if (start == end) {
        size = 1;
    } else if (start > end) {
        size = start - end + 1;
    } else {
        size = end - start + 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d\n", q[i]);
    }

    free(q); // Libération de la mémoire allouée
    return 0;
}
