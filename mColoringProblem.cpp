#include<bits/stdc++.h>
using namespace std;

int a[100][100];

bool safe(long long *col,long long f,long long c,long long n){

	for(int i=0;i<n;i++){

		if(a[f][i] && col[i]==c){
			return false;
		}

	}
	return true;
}
bool check(long long int *col,long long f,long long n,long long m)
{
	if(f==n)
	{
		cout<<"coloring should be like ";
		for(int i=0;i<n;i++)
		{
			cout<<col[i]<<" ";
		}
		return true;
	}
	else
	{
		
		for(int c=1;c<=m;c++)
		{
			if(safe(col,f,c,n))
			{
				col[f]=c;
				if(check(col,f+1,n,m))
				{
					return true;
				}
				col[f]=0;
			}
			
		}
		return false;
	}
}
int main()
{
	long long int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	long long int col[n]={0};
	cin>>m;
	if(check(col,0,n,m)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}