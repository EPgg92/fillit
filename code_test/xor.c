#include <stdlib.h>
#include <stdio.h>

static void print_lol(unsigned short lol, int i)
{
	unsigned short tmp;

	if (lol == 0){
		while (i++ < 16)
			printf("0");
		return ;
	}
	tmp = lol >> 1;
	print_lol(tmp, ++i);
	printf("%d", lol % 2);
}

static void print_lol_nl(unsigned short lol)
{
	print_lol(lol, 0);
	printf("\n");
}

int ft_check_upper_more_bits(unsigned short past, unsigned short futur)
{
	int p;
	int f;

	if (futur < past)
		return (0);
	while (past || futur)
	{
		f = futur % 2;
		p = past % 2;
		if (p != f && f == 0 && p == 1)
			return (0);
		futur >>= 1;
		past >>= 1;
	}
	return (1);
}



int main(int argc, char const *argv[])
{
	int i, j;

	if (argc != 3)
		return (1);

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("New %d -> ", i);
	print_lol_nl(i);
	printf("\n");
	printf("Past %d -> ", j);
	print_lol_nl(j);
	printf("%d xor %d -> ", i, j);
	print_lol_nl(j^i);
	printf("Futur -> %d \n", i ^ j);
	printf("is ok -> %d\n", ft_check_upper_more_bits(j , j ^ i));
	return 0;
}
