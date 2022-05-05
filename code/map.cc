#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> mp = {
		{"Monday", 1}, {"Tuesday", 2}, {"Wednesday", 3},
	};
	cout << mp["Tuesday"] << '\n';
	cout << mp.lower_bound("Tue")->first << '\n';
	cout << mp.lower_bound("Tue")->second << '\n';
}
