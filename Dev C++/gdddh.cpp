#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
// word parsing
// permuting
#define BUFFER 64

#define xor_swap(a, b) a ^= b; b ^= a; a ^= b;

char* strrev(char* x, size_t n){
	for(size_t i = 0; i < n / 2 + 1; i++){
		xor_swap(x[i], x[n - i]);
		//printf("%c %c\n", x[i], x[n - i - 1]);
	}
}

void permute(char *a, int start, int end) { 
    int i; 
    if (start == end) 
        printf("%s\n", a); 
    else { 
        for (i = start; i <= end; i++) { 
            xor_swap(*(a + start), *(a + i)); 
            permute(a, start + 1, end);
            //backtrack 
            xor_swap(*(a + start), *(a + i));
        } 
    } 
} 
// memcpy(destination, source, bytes)
int main(){
	char x[] = "rock";
	permute(x, 0, 3);
}
