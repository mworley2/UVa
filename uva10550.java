import java.util.*;
import java.io.*;

public class uva10550 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = "";
		while(!(input = br.readLine()).equals("0 0 0 0")) {
			String[] in = input.split(" ");
			int start = Integer.parseInt(in[0]);
			int a = Integer.parseInt(in[1]);
			int b = Integer.parseInt(in[2]);
			int c = Integer.parseInt(in[3]);
			int out = 0;
			int next = 0;
			out += 120;
			int val1 = start - a;
			int val2 = b - a;
			int val3 = b - c;
			if (val1 < 0)
				val1 += 40;
			if (val2 < 0)
				val2 += 40;
			if (val3 < 0)
				val3 += 40;
			out += val1 + val2 + val3;
			out *= 9;
			System.out.println(out);
		}
	}
}
