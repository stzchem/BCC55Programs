#include <stdio.h>
extern void print();
int main(){
	print();
	return 0;
}

void print(){
	printf("just a test!\n");
}