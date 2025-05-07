#include <unistd.h>
void repeat(char *str){
	
	int i = 0;
	int x = 0;
	int j;	
	while(str[i]){
		if(str[i] >= 'a' && str[i] <= 'z'){
			j = str[i];
			x = 'a' - 1;
			while(j > x){
				write(1, &str[i], 1);
				j--;
			}
		} else if(str[i] >= 'A' && str[i] <= 'Z'){
			j = str[i];
			x = 'A' - 1;
			while(j > x){
				write(1, &str[i], 1);
				j--;
			}
		} else {
			write(1, &str[i], 1);
		}
		i++;
	}	
}

int main(int argc, char *argv[]){
	if(argc == 2){
		repeat(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
