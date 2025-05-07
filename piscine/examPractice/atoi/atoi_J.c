int ft_atoi(const char *str){
	
	int i = 0;
	int sign = 1;
	int result = 0;
	
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32){
		i++;
	}
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
	return(result * sign);
}

#include <stdio.h>

int ft_atoi(const char *str);

int main()
{
    printf("%d\n", ft_atoi("   123"));       // 123
    printf("%d\n", ft_atoi("-42"));          // -42
    printf("%d\n", ft_atoi("   +567"));      // 567
    printf("%d\n", ft_atoi("42abc"));        // 42
    printf("%d\n", ft_atoi("  -2147483648")); // -2147483648 (limite de int)
    printf("%d\n", ft_atoi("2147483647"));   // 2147483647 (limite max de int)
    printf("%d\n", ft_atoi("00000123"));     // 123
    return 0;
}

