#include <stdio.h>
#include <string.h>
#include "student_code.c"

int main(int n, char **args)
{
	char msg[100]="";
	get_msg(msg);
	return strcmp(msg,"hello world");
}
