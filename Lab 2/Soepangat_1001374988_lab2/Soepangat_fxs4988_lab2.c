#include <stdio.h>

int main()
{

	int A, B;

	printf("Enter two integers: ");
	scanf("%d %d", &A, &B);

	printf("AND gate: %d\nOR gate: %d\nNOT gate: %d\n", (A&&B), (A||B), !(A||B));

	return 0;
}
