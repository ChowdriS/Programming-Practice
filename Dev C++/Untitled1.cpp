#include <stdio.h>
#include <complex.h>

struct Building {
	int height;
	int width;
} obj1, obj2;


int main(){
	FILE* fp = fopen("data.txt", "w");
	char buffer[32];
	while(fgets(buffer, 32, fp)){
		printf("%s here", buffer);
	}
}
