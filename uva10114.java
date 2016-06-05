import java.util.*;
import java.io.*;

public class uva10114 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int months = 0;
		double dp;
		double loan;
		int numchanges;
		String[] in;
		while(Integer.parseInt((in = br.readLine().split(" "))[0]) > 0) {
			months = Integer.parseInt(in[0]);
			dp = Double.parseDouble(in[1]);
			loan = Double.parseDouble(in[2]);
			numchanges = Integer.parseInt(in[3]);
			
			double monthlypay = loan / ((double)months);
			double curloan = loan;
			double curval = loan + dp;
			int nummonths = 0;
			
			int t = 1; //array val
			int m = 0; //month of next change
			double currate = 1.0;
			
			int[] mo = new int[numchanges];
			double[] perc = new double[numchanges];
			
			for(int i=0; i<numchanges; i++) {
				String[] info = br.readLine().split(" ");
				mo[i] = Integer.parseInt(info[0]);
				perc[i] = Double.parseDouble(info[1]);
			}
			
			currate = 1 - perc[0];
			curval *= currate;
			if(numchanges > 1) {
				m = mo[t];
			}
			else {
				m = Integer.MAX_VALUE;
			}
			
			while(curloan >= curval) {
				nummonths++;
				if(nummonths == m) {
					currate = 1 - perc[t];
					t++;
					if(t < numchanges)
						m = mo[t];
					else
						m = Integer.MAX_VALUE;
				}
				curloan -= monthlypay;
				curval *= currate;
			}
			
			if (nummonths == 1)
				System.out.println("1 month");
			else
				System.out.println(nummonths + " months");
		}
	}
}
