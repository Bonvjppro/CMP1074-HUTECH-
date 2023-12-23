#include<stdio.h>

int main(){
	printf("In ra bang ma Ascii: ");
	
	for(int i = 0; i <= 255; i++){
		printf("%d: %c\n", i, (char)i);
	}
	return 0;
}
