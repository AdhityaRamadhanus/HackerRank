import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class FibonacciModified {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A,B,N;
        A=in.nextInt();
        B=in.nextInt();
        N=in.nextInt();
        ArrayList<BigInteger> T = new ArrayList<BigInteger>();
        T.add(new BigInteger(Integer.toString(A)));
        T.add(new BigInteger(Integer.toString(B)));
        for(int i=2;i<N;i++){
            T.add(((T.get(i-1)).pow(2)).add(T.get(i-2)));
        }
        System.out.println((T.get(N-1)).toString(10));
    }
}