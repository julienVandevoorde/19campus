#include <stdio.h>

int ft_atoi(const char *str){

	int i = 0;
	int sign = 1;
	int result = 0;
	
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '-'){
		sign = -sign;
		i++;
	} else if(str[i] == '+'){
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9'){
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main(void){
	char *a = "   +12345yytv5 ";
	int i = ft_atoi(a);
	printf("%d\n", i);
}
