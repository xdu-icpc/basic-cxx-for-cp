template <class T>
void xchg(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 114, y = 514;
	long long z = 1919, t = 810;
	xchg(x, y);
	xchg(z, t);
}
