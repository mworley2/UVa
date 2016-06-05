import java.util.*;
import java.io.*;

public class uva11172 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine());
		for(int i=0; i<cases; i++) {
			String[] in = br.readLine().split(" ");
			int a = Integer.parseInt(in[0]);
			int b = Integer.parseInt(in[1]);
			if(a > b)
				System.out.println(">");
			else if(a == b)
				System.out.println("=");
			else
				System.out.println("<");
		}
	}
}
