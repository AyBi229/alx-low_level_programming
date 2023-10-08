#include "main.h"
#include <stdio.h>

int main(void){
	int c;
	c = "7";
	printf("%c: %d", c, _isdigit(c));
	c = "o";
	printf("%c: %d", c, _isdigit(c));
	return 0;
}
