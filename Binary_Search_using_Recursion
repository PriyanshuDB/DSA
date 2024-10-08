#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr,int k,int s,int e)
{
	if(s>e)
	return -1;
	int m=s+(e-s)/2;
	if(arr[m]==k)
	return m;
	if(k<arr[m])
	return binarySearch(arr,k,s,m-1);
	else
	return binarySearch(arr,k,m+1,e);
}
int main()
{
	vector<int> arr={1,2,3,4,5,6,7,8,9};
	cout << binarySearch(arr,8,0,arr.size()-1);
}
