#include<stdio.h>
int main(int ac, char **av) {
	printf("hello, git world!\n");
	printf("%d args: first is %s\n", ac, ac>1?av[1]:"<null>");
	return 0;
}
