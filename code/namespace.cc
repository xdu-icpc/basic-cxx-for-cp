namespace flukehn
{
	const int m = 998244353;
	// 514 lines of code ...
	poly poly_mul(poly a, poly b);
}

int m;

int main()
{
	using flukehn::poly;
	poly a = geta(), b = getb();
	poly c = flukehn::poly_mul(a, b);
}
