#include <stdio.h>

int main() {
	/* tester l'état du bit 2 de a : */
   unsigned a = 0x000F; /* 0000 0000 0000 1111 */

   if (a & (15u << 2))
   {
      puts("bit 2 = 1");
   }
   else
   {
      puts("bit 2 = 0");
   }

   /* on peut aussi directement récupérer la valeur 0 ou 1
      à l'aide des propriétés de l'opérateur logique ! : */
   printf("bit 2 = %d\n", !!(a & (1u << 2)));

   printf("%d\n",  15u);
	return 0;
}
