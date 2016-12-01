#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void writer(const char* message,int count,FILE* stream){
	for(;count>0;--count){
	fprintf(stream,"%s\n",message);
	fflush(stream);
	sleep(1);
	}
}
void reader(FILE* stream){
	char buffer[1024];
	while(!feof(stream) && !ferror(stream) && fgets(buffer,sizeof(buffer),stream)!=NULL)
		fputs(bufer,stdout);
}
int main(){
	FILE* f;
	int fds[2];
	pid_t pid;
	pipe(fds);
	pid = fork();
	if (pid == 0){ //child process
		close(fds[0]);
		reader(f);
	}
	else{
		close(fds[1]);
		
	}
	return 0;
}
