//The strcpy() function will copy a string from a source to a destination, 
//iterating through the source string and copying each byte to the destination 
//(and stopping after it copies the null termination byte).

#include <stdio.h>
#include <string.h>

int main(){
	char str_a[20];

	strcpy(str_a, "Hello, world!\n");
	printf(str_a);
}
