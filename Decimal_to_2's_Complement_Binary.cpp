// Negative decimal to binary (2's complement method : works for both positive and negative decimal numbers)

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,digit;
	string ans="";
	cout << "Enter decimal number : ";
	cin >> n;
	n=-n;
	n=~n+1;
	for(int i=31;i>=0;i--)
	ans=ans+to_string((n>>i)&1);	
	cout << "Binary form : " << ans;
}
