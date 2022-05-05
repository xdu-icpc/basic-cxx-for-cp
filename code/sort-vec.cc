#include <bits/stdc++.h>
using namespace std;

struct vec
{
	int x, y;
	long long len() const
	{ return 1ll * x * x + 1ll * y * y; }
	bool operator < (const vec &rhs) const
	{ return len() < rhs.len(); }
};

int main()
{
	vec v[] = {{1, 1}, {4, 5}, {1, 4}};
	sort(v, v + 3);
	for (int i = 0; i < 3; i++)
		cout << v[i].x << ' ' << v[i].y << '\n';
	return 0;
}
