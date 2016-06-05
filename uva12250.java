import java.util.*;
import java.io.*;

public class uva12250 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String in = br.readLine();
		int num = 1;
		while(!in.equals("#")) {
			if(in.equals("HELLO"))
				System.out.println("Case " + num + ": ENGLISH");
			else if(in.equals("HOLA"))
				System.out.println("Case " + num + ": SPANISH");
			else if(in.equals("HALLO"))
				System.out.println("Case " + num + ": GERMAN");
			else if(in.equals("BONJOUR"))
				System.out.println("Case " + num + ": FRENCH");
			else if(in.equals("CIAO"))
				System.out.println("Case " + num + ": ITALIAN");
			else if(in.equals("ZDRAVSTVUJTE"))
				System.out.println("Case " + num + ": RUSSIAN");
			else
				System.out.println("Case " + num + ": UNKNOWN");
			num++;
			in = br.readLine();
		}
	}
}
