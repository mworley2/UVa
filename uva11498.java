import java.util.*;
import java.io.*;

public class uva11498 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		while (num != 0) {
			String[] coord = br.readLine().split(" ");
			int x = Integer.parseInt(coord[0]);
			int y = Integer.parseInt(coord[1]);
			for(int i=0; i<num; i++) {
				String[] check = br.readLine().split(" ");
				int xa = Integer.parseInt(check[0]);
				int ya = Integer.parseInt(check[1]);
				if(xa == x || ya == y)
					System.out.println("divisa");
				else if(xa > x && ya > y)
					System.out.println("NE");
				else if(xa < x && ya > y)
					System.out.println("NO");
				else if(xa > x && ya <  y)
					System.out.println("SE");
				else
					System.out.println("SO");
			}
			num = Integer.parseInt(br.readLine());
		}
	}
}
