/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n=3;

void merge(int output1[],int output2[],int size1,int size2,int output[]){
    
    
    int i = 0, j = 0, k = 0; 
    
    while(i<size1 && j<size2){
        
        if(output1[i] < output2[j])
        {
            output[k++] = output1[i++];
        }
        else{
             output[k++] = output2[j++];
        }
    }
    
    
    while(i<size1)
    {
        output[k++] = output1[i++];
    }
    
     while(j<size2)
    {
        output[k++] = output2[j++];
    }
    
}

void mergeKarrays(int arrays[][n],int i,int j,int output[]){
    
    
    // if there is only one array
    if(i==j)
    {
        int p;
        for(p=0;p<n;p++)
        output[p] = arrays[i][p];
        return;
    }
    
    // if there are 2 arrays
    if((j-i)==1)
    {
        merge(arrays[i],arrays[j],n,n,output);
        return;
    }
    
    int size1 = (((i+j)/2)-i+1)*n;
    int size2 = (j-((i+j)/2))*n;
    
    int output1[size1],output2[size2];
    
    mergeKarrays(arrays,i,(i+j)/2,output1);
    mergeKarrays(arrays,(i+j)/2+1,j,output2);
    
    merge(output1,output2,size1,size2,output);
    
    
}



int main()
{
    
    int i,j,k;
    cin>>k;
    int arrays[k][n];
    cout<<"start entering the values"<<endl;
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arrays[i][j];
        }
    }
   
   int output[n*k];
   mergeKarrays(arrays,0,k-1,output); 
   
   for(i=0 ; i<(n*k) ; i++)
   {
       cout<<output[i]<<" ";
   }
   
   return 0;
}
