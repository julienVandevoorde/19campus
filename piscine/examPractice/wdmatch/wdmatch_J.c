#include <unistd.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

void ft_wdmatch(char *s1, char *s2){
	
	int i = 0;
	int j = 0;
	int len = ft_strlen(s1);
	
	while(s1[i] && s2[j]){
		if(s1[i] == s2[j]){
			i++;
		}
		j++;
	}
	if(i == len){
		i = 0;
		while(s1[i]){
			write(1, &s1[i], 1);
			i++;
		}
	}
}

int main(int argc, char *argv[]){
	if(argc == 3){
		ft_wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}

/*
"faya" "fgvvfdxcacpolhyghbreda"
*/
