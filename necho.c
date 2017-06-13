#include "tlpi_hdr.h"

int
main(int argc, char *argv[])
{
	char **p;

	for(p = argv; *p != NULL; p++)
		puts(*p);
	//int j;

	//for (j = 0; j < argc; j++)
	//	printf("argv[%d] = %s\n", j, argv[j]);

	exit(EXIT_SUCCESS);
}
