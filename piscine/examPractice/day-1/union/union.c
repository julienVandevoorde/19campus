#include <unistd.h>

int check_not_doubles(char c, char *str){

	int i = 0;
	while(str[i]){
		if(c == str[i]){
			return 0;
		}
		i++;
	}
	return 1;
}

void ft_union(char *s1, char *s2){
	
	int i = 0;
	int j = 0;
	int k = 0;
	char dest[256] = {0};
	
	while(s1[i]){
		if(check_not_doubles(s1[i], dest)){
			dest[k] = s1[i];
			k++;
		}
		i++;
	}
	while(s2[j]){
		if(check_not_doubles(s2[j], dest)){
			dest[k] = s2[j];
			k++;
		}
		j++;
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
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
