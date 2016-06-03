import java.util.*;
import java.io.*;

public class uva00272 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		boolean isLeft = true;
		String input;
		while((input = br.readLine())!= null) {
			char[] buff = input.toCharArray();
			StringBuilder sb = new StringBuilder();
			for(int i=0; i<buff.length; i++) {
				if(buff[i] == '"') {
					if(isLeft) {
						sb.append("`");
						sb.append("`");
						isLeft = false;
					}
					else {
						sb.append("'");
						sb.append("'");
						isLeft = true;
					}
				}
				else
				sb.append(buff[i]);
			}
			System.out.println(sb.toString());
		}
		
	}

}
