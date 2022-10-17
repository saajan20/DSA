import java.util.Scanner;

public class Karatsuba_Multiplication {

    static long karatsuba(long num1,long num2){

        int size1 = getSize(num1);
        int size2 = getSize(num2);

        /** Maximum of lengths of number **/
        int N = Math.max(size1, size2);

        /** for small values directly multiply **/
        if (N < 10)
            return num1 * num2;

        /** max length divided, rounded up **/
        N = (N / 2) + (N % 2);

        /** multiplier **/
        long m = (long)Math.pow(10, N);

        /* Logic for spilting both the number at position N */
        long a = num1 / m;
        long b = num1 - (a * m);
        long c = num2 / m;
        long d = num2 - (c * N);

        long z0 = karatsuba(a,c);
        long z1 = karatsuba(b,d);
        long z2 = karatsuba(a+b,c+d);


        return (long) (((Math.pow(10,2*N))*z0)+((Math.pow(10,N))*(z2-z1-z0))+z1);


    }

    /** Function to calculate length or number of digits in a number **/
   static int getSize(long num)
    {
        int ctr = 0;
        while (num != 0)
        {
            ctr++;
            num /= 10;
        }
        return ctr;
    }

//    Main Function
    public static void main(String[] args) {

        long  num1,num2,t;
        Scanner sc =new Scanner(System.in);
        t=sc.nextLong();
        int i;

        for(i=0;i<t;i++){
           num1 = sc.nextLong();
           num2 = sc.nextLong();
            System.out.println(karatsuba(num1,num2));
        }

    }


}
