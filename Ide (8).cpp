#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define  pb push_back
#define  mp make_pair
using namespace std;
/*
struct schedule{
    ll tim;
    ll cost;
    ll profit;
    bool kya;
};
bool comparision(schedule a,schedule b)
{
    return (a.tim<b.tim);
}
schedule arr[100000];cin>>arr[i].tim>>arr[i].profit;
void KMPSearch(char* pat,char* txt)
{
    int M=strlen(pat);
    int N=strlen(txt);
    
    int lps[M];
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<M)
    {
        if(pat[i]==pat[len])
        {
        len++;
        lps[i]=len;
        i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
 i=0;
    int j=0;
    while(i<N)
    {
        if(pat[j]==txt[i]){
        j++;
        i++;
        }
        if(j==M)
        {
            printf("pattern found at index %d",i-j);
            j=lps[j-1];
        }
        else if(i<N && pat[j]!=txt[i])
        {
            if(j!=0)
            j=lps[j-1];
            else
            i++;
        }
    }
        
        
        
        
        
        
    }
    
    


int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	// your code goes here
	
	char txt[]="ABBBZAP";
	char pat[]="ZAP";
	KMPSearch(pat,txt);
	
	return 0;
}

*max_element(a,a+n);
binary_search(a,a+n,val);
sort(a,a+n, greater<int>());
vector<pair<LL,LL> > dish;
cin >> xi >> yi;			dish.push_back(mp(xi,yi));
dish[i].first,dish[i],second
vector<pair<LL,pair<LL,LL> > > clan;//for three elements
cin >> pi >> qi >> ri;
			clan.push_back(mp(pi,mp(qi,ri)));

int main () 
{ 
    int gfg[] = {5,6,7,7,6,5,5,6}; 
      
    vector<int> v(gfg,gfg+8);    // 5 6 7 7 6 5 5 6 
  
    sort (v.begin(), v.end());  
    // 5 5 5 6 6 6 7 7 
  
    vector<int>::iterator lower,upper; 
    lower = lower_bound (v.begin(), v.end(), 6);  
    upper = upper_bound (v.begin(), v.end(), 6);  
  
    cout << "lower_bound for 6 at position " << (lower- v.begin()) << '\n'; 
    cout << "upper_bound for 6 at position " << (upper - v.begin()) << '\n'; 
  
    return 0; 
} 

no of sub-arrays=n(n+1)/2;
A=65;
a=97;
int euclid_gcd(int a, int b)
{
 int dividend=a;
 int divisor=b,remainder;
 while(divisor!=0)
{
  remainder=dividend%divisor;
  dividend=divisor;
   divisor=remainder;
}
return dividend;
}

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 



long long int fast_exp(int base, int exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long int base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}

/*2^p


long long int fast_exp(int base, int exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
 for printing vector
 for (auto it = myvector.begin(); it != myvector.end(); ++it) 
        cout << ' ' << *it; 

sieve of eratosthenes
for(i=0;i<=n;i++)
prime[i]=1;
prime[0]=0;
prime[1]=0;
for(i=2;i<=sqrt(n);i++)
 {
     if(prime[i])
     {
         for(j=2;i*j<=n;j++)
          prime[i*j]=0;
     }
 }
// longest increasing subsequence	
int lis( int arr[], int n ) 
{ 
	int lis[n]; 

	lis[0] = 1; 

	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 

	// Return maximum value in lis[] 
	return *max_element(lis, lis+n); 
} 
	
int main() 
{ 
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printf("Length of lis is %d\n", lis( arr, n ) ); 
	return 0; 
}



*/
class Queue{
    public:
    int front,rear;
    int capacity;
    int size;
    int *arr;
    Queue(int capacity)
    {
        this->capacity=capacity;
        size=0;
        front=-1;rear=-1;
       arr=new int[capacity];
    }
};

bool isFull(Queue* queue){
    return (queue->size==queue->capacity);
}
bool isEmpty(Queue* queue)
{
    return (queue->front==-1);
}
void enqueue(Queue* queue,int data)
{
    if(isFull(queue))
    return;
    queue->rear++;
    queue->arr[queue->rear]=data;
    if(queue->front==-1)
     queue->front++;
     queue->size++;
}
void dequee(Queue* q)
{
    if(isEmpty(q)){
      cout<<"Queue is Empty"<<endl;
    return;  
    }
    if(q->front==q->rear)
    q->front=q->rear=-1;
    else
    q->front++;
    q->size--;
}
int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	// your code goes here
	Queue* q=new Queue(5);
	enqueue(q,1);
    enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	dequee(q);
	for(ll i=q->front;i<=q->rear;i++)
	cout<<q->arr[i];
	return 0;
}
