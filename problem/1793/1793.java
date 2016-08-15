import java.util.*;
import java.math.*;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n;
		
		BigInteger[] d = new BigInteger[251];
		
		d[0] = BigInteger.ONE;
		d[1] = BigInteger.ONE;
		d[2] = new BigInteger("3");
		BigInteger two = new BigInteger("2");
		
		while(sc.hasNextInt()) {	
			n = sc.nextInt();

			for(int i=3; i<=n; i++)
				d[i] = d[i-1].add(d[i-2].multiply(two));
			
			System.out.println(d[n]);
		}		
	}

}
