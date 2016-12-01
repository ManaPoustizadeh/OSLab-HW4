#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int spawn(char* program,char** arg_list){
	pid_t child_pid;
	child_pid=fork();
	if(child_pid!=0)
		return child_pid;
	else{
		execvp(program,arg_list);
		fprintf(stderr,"an error occurred in execvp\n");
		abort();
	}
}
int main(){
	char* arg_list[]={
		"ls",
		"-l",
		"/etc",
		NULL
	};
	spawn("ls",arg_list);
	printf("done with main program\n");
	return 0;
}
