#include <bits/stdc++.h>

using namespace std;

struct Point{
int x;
int y;
};

//for sorting Points in increasing value of x
bool comparisionX(Point a,Point b)
{

  return (a.x < b.x);
}

//for sorting Points in increasing value of y
bool comparisionY(Point a,Point b)
{

  return (a.y < b.y);
}

//calculates euclideanDistance for given two points
float euclideanDistance(Point p1, Point p2){

    float distance = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    return distance;
}

//to be used for small input
float bruteForceApproach(Point p[],int n){

    float minDistance = FLT_MAX;

    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            float distance = euclideanDistance(p[i],p[j]);
            minDistance = min(distance,minDistance);
        }
    }

    return minDistance;

}

//calculating the minimum distance among the strip points
float closestSplitPair(vector<Point> strip,float min_distance)
{
    int i,j;
    int length = strip.size();

    for(i=0;i<length;i++)
    {
        for(j=i+1;j<min(j+7,length);j++)
            {
                float get_distance = euclideanDistance(strip[i],strip[j]);
                min_distance = min(min_distance,get_distance);
            }
    }
   return min_distance;

}


float closestPair(Point Px[],Point Py[],int n){

 //base case
 if(n<=3)
    return bruteForceApproach(Px,n);

// Calculating the length of left and right side of P
 int length_left,length_right;
 int mid = n/2;

 length_left = n-mid;
 length_right = mid;


 Point Qx[length_left],
       Qy[length_left],
       Rx[length_right],
       Ry[length_right];

 //Lets get our Qx and Rx
 int i;

 for(i=0;i<length_left;i++)
 {
     Qx[i] = Px[i];
 }



 for(int j=0;i<n;i++,j++)
 {
     Rx[j] = Px[i];
 }

 //Lets get our Qy and Ry

 Point midPoint = Px[n-mid];
 int li,ri;
 li=ri=0;
 for(i=0;i<n;i++)
 {
     if(Py[i].x<midPoint.x && li<length_left)
        Qy[li++] = Py[i];
     else
        Ry[ri++] = Py[i];

 }

 //calculating minimum distance from both the side
 float min_distance_left = closestPair(Qx,Qy,length_left);
 float min_distance_right = closestPair(Rx,Ry,length_right);

 //storing the best so far
 float min_distance_afterCalls = min(min_distance_left,min_distance_right);

// getting the strip of points as discussed
 vector<Point> strip;

 for(i=0;i<n;i++)
 {
     if((Py[i].x<=(midPoint.x+min_distance_afterCalls))&& (Py[i].x>=(midPoint.x-min_distance_afterCalls)))
        strip.push_back(Py[i]);

 }

 return closestSplitPair(strip,min_distance_afterCalls);

}



int main()
{
    int n;

    cout<<"Enter the number of co-ordinates"<<endl;
    cin>>n;

    Point P[n];

    cout<<"Start entering your co-ordinates"<<endl;

    int i;

    for(i=0;i<n;i++)
        cin>>P[i].x>>P[i].y;

    //Creating our Px and Py

    Point Px[n],Py[n];

    for(i=0;i<n;i++)
    {
        Px[i] = P[i];
        Py[i] = P[i];
    }

    sort(Px,Px+n,comparisionX);

    sort(Py,Py+n,comparisionY);

    cout<<closestPair(Px,Py,n)<<endl;



    return 0;
}
