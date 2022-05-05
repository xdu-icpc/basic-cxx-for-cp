#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s = {1, 1, 4, 5, 1, 4};
	cout << s.count(5) << '\n';
	cout << s.count(6) << '\n';
	auto it = s.lower_bound(4); // or 3
	cout << *it << '\n';
	it++;
	cout << *it << '\n';
}
