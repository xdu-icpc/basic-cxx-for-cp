void xchg(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a = 114, b = 514;
	xchg(&a, &b);
}
