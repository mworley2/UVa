import java.util.*;
import java.io.*;

public class uva11559 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input;
		while((input = br.readLine())!= null) {
			String[] in = input.split(" ");
			int people = Integer.parseInt(in[0]);
			int budget = Integer.parseInt(in[1]);
			int hotels = Integer.parseInt(in[2]);
			int weeks = Integer.parseInt(in[3]);
			int minbudget = Integer.MAX_VALUE;
			
			for(int i=0; i<hotels;i++) {
				int cost = Integer.parseInt(br.readLine().trim());
				String[] in2 = br.readLine().split(" ");
				int[] beds = new int[weeks];
				int maxbeds = -1;
				for(int j=0; j<weeks; j++) {
					beds[j] = Integer.parseInt(in2[j]);
					if(beds[j] > maxbeds)
						maxbeds = beds[j];
				}
				if(cost * people <= budget && cost * people < minbudget) {
					if(maxbeds >= people) {
						minbudget = cost * people;
					}
				}
			}
			if(minbudget == Integer.MAX_VALUE)
				System.out.println("stay home");
			else
				System.out.println(minbudget);
		}
	}
}
