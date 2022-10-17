#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void fill_vector(vector<int>&);
void print_vector(vector<int>& );
void print_even(vector<int>& );
void reverse_print(vector<int>&);
void replace_vector(vector<int>&);
int main()
{
   vector<int> v;
    fill_vector(v);print_vector(v);reverse_print(v);print_even(v); replace_vector(v);
    return 0;
}
void fill_vector(vector<int>& newv)
{
    int n,i,j;
    cout<<"total number\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>j;
       newv.push_back(j);
    }

}
void print_vector(vector<int>& newv)
{
    int i;

    for(i=0;i<newv.size();i++)
    {
      cout<<newv[i]<<" ";
    }
 cout<<endl;
}
void reverse_print(vector<int>& newv)
{
    int i;

    for(i=newv.size()-1;i>=0;i--)
    {
       cout<<newv[i]<<" ";

    }
    cout<<endl;
}
void print_even(vector<int>& n)
{
    int i;
    for(i=0;i<n.size();i++)
    {
        if(n[i]%2==0)
            cout<<n[i]<<" ";

    }
    cout<<endl;

}


