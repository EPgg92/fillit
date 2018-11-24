#include <stdio.h>
#include <stdlib.h>

void print_lol(unsigned short lol, int i)
{
	unsigned short tmp;

	if (lol == 0){
		return ;
	}
	tmp = lol >> 1;
	print_lol(tmp, i++);
	printf("%d", lol % 2);
}

void print_lol_nl(unsigned short lol)
{
	print_lol(lol, 0);
	printf("\n");
}

void print_tab(unsigned short tab[16])
{
	int i;

	i = 0;
	while (i < 16)
		print_lol_nl(tab[i++]);
}


unsigned short convert(unsigned short tmp)
{
	:
}

int main(int argc, char **argv)
{
	//unsigned short tab[16];
	unsigned short lol;
	int i = 0;

	lol = 55982;
	print_lol_nl(lol);

	while (i++ < 4)
	{
		lol <<= 4;
		print_lol_nl(lol);
	}

	return (0);
}
