#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(long *a,long f,long l,long ele)
{
    if(f<=l){
        long m=f+(l-f)/2;        
        if(a[m]==ele)
            return true;
        else if(a[m]>ele)
            return BinarySearch(a,f,m-1,ele);
        else
            return BinarySearch(a,m+1,l,ele);
    }
    return false;
}
int main()
{
    long int n,m;
    cout<<"Enter the Size of the Array ";
    cin>>n;
    long int a[n];
    cout<<"Enter the "<<n<<" elements \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the number which you want to search in the array";
    cin>>m;
    if(BinarySearch(a,0,n-1,m))
    {
        cout<<"Yes, "<<m<<" is present in the array";
    }
    else{
        cout<<"Element is not found in the array"<<endl;
    }

}