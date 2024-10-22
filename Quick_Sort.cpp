#include <bits/stdc++.h>
int partition(vector<int> &arr,int s,int e)
{
    int element=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    if(arr[i]<=arr[s])
    count++;
    int p=s+count;
    swap(arr[s],arr[p]);
    int j=s,k=e;
    while(j<p && k>p)
    {
        while(arr[j]<=arr[p])
        j++;
        while(arr[k]>arr[p])
        k--;
        if(j<p && k>p) 
        {
        swap(arr[j], arr[k]);
        j++;
        k--;
        }
    }
    return s+count;
}
void qSort(vector<int> &arr,int s,int e)
{
    if(s>=e)
    return;
    int p=partition(arr,s,e);
    qSort(arr,s,p-1);
    qSort(arr,p+1,e);
} 
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    int e=arr.size()-1;
    qSort(arr,0,e);
    return arr;
}
