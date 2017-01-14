//generate n's random numbers
#include <stdio.h>
#include <stdio.h>


int main(int argc, char * argv[]){
srand(time(NULL));
int max = atoi(argv[1]);
	for(int j = 0;j < max ; j++){
		printf("%d\n",rand());
	}
	return 0;
}