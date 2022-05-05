#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {1, 1, 4, 5, 1, 4};
	sort(&a[0], &a[6]);
	printf("%d", a[0]);
	for (int i = 1; i < 6; i++)
		printf(" %d", a[i]);
	putchar('\n');
}
