#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {1, 1, 4, 5, 1, 4};
	sort(a, a + 6);
	int l = lower_bound(a, a + 6, 4) - a;
	int r = upper_bound(a, a + 6, 4) - a;
	printf("%d %d\n", l, r);
}
