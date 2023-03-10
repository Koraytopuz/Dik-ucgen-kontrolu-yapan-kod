#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"dik ucgenin kenarlarini giriniz"<< endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a*a+b*b==c*c)
	{
		cout<<"dik ucgendir"<< endl;
	}
	else
	{
		cout<<"dik ucgen degildir"<< endl;
	}
}
