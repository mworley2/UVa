import java.util.*;
import java.io.*;

public class uva11799 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine().trim());
		for(int i=0; i<cases; i++) {
			String[] in = br.readLine().split(" ");
			int max = -1;
			for(int j=1; j<in.length; j++) {
				int val = Integer.parseInt(in[j]);
				if(val > max)
					max = val;
			}
			System.out.println("Case " + (i+1) + ": " + max);
		}
	}
}
