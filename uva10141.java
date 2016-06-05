import java.util.*;
import java.io.*;

public class uva10141 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input;
		int num = 1;
		while(!(input = br.readLine()).equals("0 0")) {
			if(num != 1)
				System.out.println();
			String[] in = input.split(" ");
			int numreqs = Integer.parseInt(in[0]);
			int numpros = Integer.parseInt(in[1]);
			String pro = "";
			double price = Double.MAX_VALUE;
			int reqs = -1;
			for(int i=0; i<numreqs; i++) {
				br.readLine();
			}
			for(int i=0; i<numpros; i++) {
				String thispro = br.readLine();
				String[] in2 = br.readLine().split(" ");
				double thisprice = Double.parseDouble(in2[0]);
				int thisreqs = Integer.parseInt(in2[1]);
				if(thisreqs > reqs) {
					pro = thispro;
					reqs = thisreqs;
					price = thisprice;
				}
				else if(thisreqs == reqs) {
					if(thisprice < price) {
						pro = thispro;
						reqs = thisreqs;
						price = thisprice;
					}
				}
				for(int j=0; j<thisreqs; j++)
					br.readLine();
			}
			System.out.println("RFP #" + num);
			System.out.println(pro);
			num++;
		}
	}
}
