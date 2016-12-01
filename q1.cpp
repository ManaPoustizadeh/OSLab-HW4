#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	pid_t p;
	printf("L0\n");
	p = fork();
	printf("L1\n");
	p = fork();
	printf("Bye\n");
}
