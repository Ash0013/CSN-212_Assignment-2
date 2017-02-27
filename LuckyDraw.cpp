#include<bits/stdc++.h>
using namespace std;
vector <int> a;
 
int lis(vector<int> v, int n, int l)
{
   	vector<int> var;
	for(int i=l; i<l+n; i++)
	{
		int num=v[i];
		vector<int> :: iterator it;
		it=lower_bound(var.begin(),var.end(),num);
		if(it==var.end())
		 	var.push_back(num);
		else
			*it=num;
	}
	int temp=var.size();
	var.clear();
    return temp;
 
}
void solve()
{
int n;
cin>>n;
vector <int> a;
for(int i=0;i<n;i++){
	int p;
	cin>>p;
	a.push_back(p);}
	for(int i=0;i<n;i++){
	int p=a[i];
	
	a.push_back(p);}
 
int count =0;
for(int i=0;i<n;i++){
int k=lis(a,n,i);
if(k>count)count =k;}
 
cout<<count <<endl;
 
}
 
int main()
 
{
int t=0;
cin>>t;
while(t--)
solve();
}
