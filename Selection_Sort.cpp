#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    int i=0;
    for(;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
    // Write your code here.
}
