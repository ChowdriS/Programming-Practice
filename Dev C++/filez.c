#include <stdio.h>
#include <string.h>
// Find the number of digits in a number
// WHITELIST switch

int main(){
	FILE* fp = fopen("data.txt", "r");
	char buffer[16][64];
	char line[64];
	unsigned int lines;
	unsigned int i = 0, j;
	while(fgets(line, 64, fp)){
		strcpy(buffer[i], line);
		for(j = 0; j < 64; j++)
			buffer[i][j] = line[j];
		i++;
	}
	printf("lines %d\n", lines);
	for(i = 0; i < lines; i++)
			printf("%s", buffer[i]);
}

// 0, 1, 2, 3, 4
