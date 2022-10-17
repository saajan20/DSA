import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class CountingInversions {
	
	
	static long merge( int a[],int l,int r,int mid)
	{
	    int n1=mid-l+1;
	    int n2=r-mid;
	    long count=0L;
	    int left[] = new int[n1];
	    int right[] = new int[n2];
	    
	    int i;
	    
	    for(i=0;i<n1;i++)
	    left[i]=a[l+i];
	    
	    for(i=0;i<n2;i++)
	    right[i]=a[mid+1+i];
	    i=0;
	    int j=0,k=l;
	    
	    while(i<n1 && j<n2)
	    {
	        if(left[i] <= right[j])
	        {
	            a[k]=left[i++];
	        }
	        else
	        {
	            a[k]=right[j++];
	            count+=(mid+1)-(l+i);
	        }
	        
	        k++;
	    }
	    
	    while(i<n1)
	    a[k++]=left[i++];
	    
	    while(j<n2)
	    a[k++]=right[j++];
	    
	    return count;
	    
	}


	static long mergesort(int a[],int start,int end)
	{
	   long count = 0L;
	    if(start<end)
	    {
	       int mid=start+(end-start)/2;
	       count+= mergesort(a,start,mid);
	       count+= mergesort(a,mid+1,end);
	       count+= merge(a,start,end,mid);
	    }
	    
	    return count;
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[100000];
		int i=0;
		FileReader reader=null;
		try {
			
			  
			  reader = new FileReader("C:\\Users\\Saajan Kumar\\Desktop\\input.txt");
			  BufferedReader br=new BufferedReader(reader);
			  String line;  
			  while((line=br.readLine())!=null)  
			  { 
				 arr[i++]=Integer.parseInt(line);
				  
			  }
			  
	          
		} catch (Exception e) {
			
			e.printStackTrace();
		}
		
		finally {
			
			if(reader!=null) {
				try {
					reader.close();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		}
	
	 System.out.println(arr[0]+" "+arr[99999]);
	 System.out.println(mergesort(arr, 0, 99999));
	 System.out.println(arr[0]+" "+arr[99999]);

	}

}
