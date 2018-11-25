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

unsigned short reversed(unsigned short tmp)
{
	int i = 0;
	unsigned short lol = 0;

	tmp <<= 1;
	while (i++ < 16)
		lol = (lol << 1) + (tmp >>= 1) % 2;
	return (lol);
}


unsigned short convert(unsigned short tmp)
{
	unsigned short lol;
	int i = 0;
	lol = 0;
	tmp >>= 11;
	while (i++ < 4)
	{
		lol += ((tmp >>= 1 ) % 2 );
		if (i != 4)
			lol <<= 1;
	}
	return (reversed(lol));
}


unsigned short convert_reversed(unsigned short tmp)
{
	unsigned short lol;

	lol = ((tmp >>= 12) % 2) ? 4096 : 0;
	lol += ((tmp >>= 1) % 2) ? 8192 : 0;
	lol += ((tmp >>= 1) % 2) ? 16384 : 0;
	lol += ((tmp >>= 1) % 2) ? 32768 : 0;
	return (lol);
}


int main(int argc, char **argv)
{
	//unsigned short tab[16];
	unsigned short lol;
	unsigned short lol_p;
	int i = 0;

	lol = 0x8421;
	print_lol_nl(lol);

	while (i++ < 4)
	{
		lol_p = convert_reversed(lol);
		print_lol_nl(lol_p);
		printf("%d\n", lol_p);
		lol <<= 4;
	}

	return (0);
}
