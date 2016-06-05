import java.util.*;
import java.io.*;

public class uva00573 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] input;
		while(!(input = br.readLine().split(" "))[0].equals("0")) {
			int height = Integer.parseInt(input[0]);
			int climb = Integer.parseInt(input[1]);
			int slide = Integer.parseInt(input[2]);
			int fati = Integer.parseInt(input[3]);
			
			double fatic = (double)(climb * fati) / 100.0;
			
			double curheight = 0.0;
			int curday = 1;
			int success = -1;
			while(true) {
				curheight += Math.max(climb - (curday-1)*fatic, 0);
				if(curheight > height) {
					success = 1;
					break;
				}
				curheight -= slide;
				if(curheight < 0) {
					success = 0;
					break;
				}
				curday++;
			}
			if(success == 1)
				System.out.println("success on day " + curday);
			else
				System.out.println("failure on day " + curday);
		}
	}
}
