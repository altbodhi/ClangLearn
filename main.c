//load file to array and sort then
#include <stdio.h>
#include <stdio.h>


int main(){

int array_length=0;
int *array={0};
int *newarray;


	int i;
	while(scanf("%d\n",&i)!=EOF){
	newarray = (int *)realloc(array, (array_length + 1) * sizeof(int));
	if (!newarray)
 	   error("out of memory");
	array = newarray;
	array[array_length++] = i;
	}

	for(int j = 0;j < array_length ; j++){
		int c = array[j];		
		for(int k = j;k < array_length ; k++){
			if(c>array[k]){
				        	
				int s = array[k];
					array[j] = s;
					array[k] = c;
			}
		}
	}
	for(int j = 0; j < array_length ; j++){
		//system("sleep 1");
		printf("%d\n",array[j]);
	}
	return 0;
}