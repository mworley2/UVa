import java.util.*;
import java.io.*;

public class uva11044 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine());
		for (int i=0; i<cases; i++) {
			String[] in = br.readLine().split(" ");
			int n = Integer.parseInt(in[0]) - 2;
			int m = Integer.parseInt(in[1]) - 2;
			if(n%3 != 0)
				n += (3 - n%3);
			if(m%3 != 0)
				m += (3 - m%3);
			System.out.println((n/3)*(m/3));
		}
	}
}
