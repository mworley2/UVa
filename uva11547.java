import java.util.*;
import java.io.*;

public class uva11547 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine());
		for(int i=0; i<cases; i++) {
			int n = Integer.parseInt(br.readLine());
			n *= 567;
			n /= 9;
			n += 7492;
			n *= 235;
			n /= 47;
			n -= 498;
			n = Math.abs(n);
			n /= 10;
			n = n%10;
			System.out.println(n);
		}
	}
}
