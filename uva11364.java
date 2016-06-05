import java.util.*;
import java.io.*;

public class uva11364 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine());
		for (int i=0; i<cases;i++) {
			int d = 0;
			int stores = Integer.parseInt(br.readLine());
			if (stores < 2) {
				System.out.println(0);
				br.readLine();
			}
			else {
				String[] in = br.readLine().split(" ");
				int min = Integer.MAX_VALUE;
				int max = Integer.MIN_VALUE;
				for (int j=0; j<in.length; j++) {
					int loc = Integer.parseInt(in[j]);
					if(loc < min)
						min = loc;
					if(loc > max)
						max = loc;
				}
				System.out.println(2*(max-min));
			}
		}
	}
}
