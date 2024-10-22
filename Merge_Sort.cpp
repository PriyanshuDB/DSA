void merge(int a[],int s,int e,int m)
{
    int size1=m-s+1;
    int size2=e-m;
    int *a1=new int[size1];
    int *a2=new int[size2];
    int k=s;
    for(int i=0;i<size1;i++)
    a1[i]=a[k++];
    k=m+1;
    for(int i=0;i<size2;i++)
    a2[i]=a[k++];
    k=s;
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];
            i++;
            k++;
        }
        else
        {
            a[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<size1)
    {
        a[k]=a1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        a[k]=a2[j];
        j++;
        k++;
    }
    delete []a1;
    delete []a2;
}
void mergeS(int a[],int s,int e)
{
    if(s>=e)
    return;
    else
    {
        int m=s+(e-s)/2;
        mergeS(a,s,m);
        mergeS(a,m+1,e);
        merge(a,s,e,m);
    }
}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    mergeS(arr.data(),0,n-1);
}
