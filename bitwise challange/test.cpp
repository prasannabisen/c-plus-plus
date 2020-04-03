#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a>0)
	{
		int k=(a&1);
		a=a>>1;
	}
}