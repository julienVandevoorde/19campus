#include <unistd.h>
int ft_strlen(char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

int main(int argc, char *argv[]){
	if(argc == 2){
		ft_strlen(argv[1]);
	}
	write(1, "a", 1);
	write(1, "\n", 1);
	return 0;
}
