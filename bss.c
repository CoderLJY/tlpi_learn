#include <stdio.h>
#include <unistd.h>


int bss_end;

int main(void)
{
	void *tret;

	printf("bss end: %p\n", (char *)(&bss_end) + 4);
	tret = sbrk(0);
	if (tret != (void *)-1)
		printf("heap start : %p\n", tret);

	return 0;

}
