#include<stdio.h>
struct temp{
	int a;
}s;
void func(struct temp s)
{
	s.a=10;
	printf("%d\t",s.a);
}
int main()
{
	func(s);
	printf("%d\t",s.a);
	return 0;
}

