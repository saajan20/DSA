#include<bits/stdc++.h>
using namespace std;
int lev(vector<int> v)
{
   	vector <int> c;
c.push_back(v[0]);
	for(int i=1;i<v.size();i++)
	{
		if(v[i]>c[c.size()-1])
			c.push_back(v[i]);
			 auto it = find(c.begin(), c.end(), v[i]); 
            if (it != c.end()) { 
                continue; 
            } 
		else
		{
			auto it=upper_bound(c.begin(),c.end(),v[i]);
			*it=v[i];
		}
	}
	
	return c.size();
	
}
int main()
{
    int t,n,i,j;
    cin>>t;
	while(t--)
	{
	    int n;
cin>>n;
int a;
vector <int> v;
for(int i=0;i<n;i++)
{
	cin>>a;
	v.push_back(a);	
}
    cout<<lev(v)<<endl;

	}



}