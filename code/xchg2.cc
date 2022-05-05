void xchg(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 114, y = 514;
	xchg(x, y);
}
