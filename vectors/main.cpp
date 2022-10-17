#include <iostream>
#include <vector>
using namespace std;

int main()
{int i,j;
    vector<int> v;
    for(i=0;i<5;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    cin>>j;
   v.insert(v.begin()+3,j);
   for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }cout<<endl;
    v.erase(v.begin()+5);
      for(i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    v.clear();
    if(v.empty())
        cout<<"\nempty\n";
    return 0;
}
