// #include <stdlib.h>
// #include <string.h>
//
// char  *LOL(char *str)
// {
// 	char *lol;
//
// 	lol = strdup(str);
// 	exit(0); // comment here
// 	return (lol);
//
// }
//
// int main()
// {
// 	char *str;
//
// 	str = (char *)malloc(sizeof(char) * 2);
// 	str[0] = 'A';
// 	str[1] = 0;
// 	str = LOL(str);
// 	exit(0); // or here
// 	return (0);
// }

#include <stdio.h>
//
// int main() {
//
// 	printf("%d\n", 1 );
// 	printf("%d\n", !(-1) );
// 	printf("%d\n", !(0) );
// 	printf("%d\n", !(-92) );
// 	printf("%d\n", !(1) );
// 	return 0;
// }


int main()
{
	float i;

	float j = 7;
	float k = 3;

	i = j / k;
	printf("%f\n", i );
	printf("%d\n", (int)i );
	if (i > (int) i )
		i++;
	printf("%d\n", (int)i );
	return 0;
}
