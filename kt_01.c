#include <stdio.h>

int main(void) {
  int i, n;
	int S;
	S = 0;
	i = 1;
	printf("\nNhap n: ");
	scanf("%d", &n);

	while(i <= n)
	{
		S = S + i;
		i++;
	}
	printf("\nTong 1 + 2 + ... + %d la %d: ", n, S);
  return 0;
}
