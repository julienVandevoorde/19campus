#include <stdio.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

char *ft_strrev(char *str){
	
	int i = 0;
	int size = ft_strlen(str);
	char temp;
	
	while(i < size / 2){
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	return str;
}

int main(void){
	char a[] = "salut   ";
	printf("%s\n", ft_strrev(a));
}
