#include <unistd.h>
int checkdoubles(char c, char *str){

	int i = 0;
	while(str[i]){
		if(c == str[i])
			return 0;
		i++;
	}
	return 1;
}

void inter(char *s1, char *s2){
	
	int i = 0;
	int j;
	int k = 0;
	char dest[256] = {0};
	
	while(s1[i]){
		
		j = 0;
		while(s2[j]){
			if(checkdoubles(s1[i], dest)){
				dest[k] = s1[i];
				k++;
			}
			j++;
		}
		i++;
	}
	dest[k] = '\0';
	k = 0;
	while(dest[k]){
		write(1, &dest[k], 1);
		k++;
	}
	
}

int main(int argc, char *argv[]){
	if(argc == 3){
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
