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
			out += 720;
			out += (a - start) * 9;
			out += 360;
			// Not done yet
		}
		
	}
}
