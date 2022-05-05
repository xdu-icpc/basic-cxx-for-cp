void xchg(int &a, int &b)
{ int t = a; a = b; b = t; }

void xchg(long long &a, long long &b)
{ long long t = a; a = b; b = t; }

int main()
{
	int x = 114, y = 514;
	long long z = 1919, t = 810;
	xchg(x, y);
	xchg(z, t);
}
