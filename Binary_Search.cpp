#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr,int k)
{
	if(arr.empty())
	return -1;
	int s=0,e=arr.size()-1;
	while(s<=e)
	{
		int m=s+(e-s)/2;
		if(k==arr[m])
		return m;
		else if(k<arr[m])
		e=m-1;
		else
		s=m+1;
	}
	return -1;
}
int main()
{
	vector<int> arr={1,2,3,4,5,6,7,8,9};
	cout << binarySearch(arr,8);
}
