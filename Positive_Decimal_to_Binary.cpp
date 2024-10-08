// Positive decimal to binary method 1:

/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,digit,ans=0;
	cout << "Enter positive decimal number : ";
	cin >> x;
	for(int i=0;x!=0;i++)
	{
		digit=x%2;
		x=x/2;
		ans=pow(10,i)*digit+ans;
	}
	cout << "Binary form : " << ans;
}
*/

// Positive decimal to binary method 2:

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,digit,ans=0;
	cout << "Enter positive decimal number : ";
	cin >> n;
	for(int i=0;n;i++)
	{
		digit=n&1;
		n=n>>1;	
		ans=pow(10,i)*digit+ans;
	}
	cout << "Binary form : " << ans;
}
