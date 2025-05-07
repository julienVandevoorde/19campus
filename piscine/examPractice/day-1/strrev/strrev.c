

int ft_strlen(char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return i;
}


char *ft_strrev(char *str){
	
	int i = 0;
	char temp;
	int size = ft_strlen(str);
	
	while(i < size / 2){
		
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	return str;
}
#include <stdio.h>

int main(void){
	 char a[] = "salut";
	 char *b = ft_strrev(a);
	 printf("%s\n", b);
}
