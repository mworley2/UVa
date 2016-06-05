import java.util.*;
import java.io.*;

public class uva12279 {
	public static void main(String args[]) throws Exception
	{		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n;
		int cases = 1;
		while((n = Integer.parseInt(br.readLine().trim())) > 0) { // needed trim() who even does that?
			String[] in = br.readLine().split(" ");
			int total = 0;
			for(int i=0; i<in.length; i++) {
				int num = Integer.parseInt(in[i]);
				if(num == 0)
					total--;
				else
					total++;
			}
			System.out.println("Case " + cases + ": " + total);
			cases++;
		}
	}
}
