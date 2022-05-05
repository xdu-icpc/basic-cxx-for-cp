#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s = {1, 1, 4, 5, 1, 4};
	s.insert(2);
	s.erase(4);
	for (int a: s)
		cout << a << '\n';
}
