import java.util.*;
import java.io.*;

/*
 *  Neat. http://i.imgur.com/qGoUx8s.gif
 */

public class uva11507 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num;
		while((num = Integer.parseInt(br.readLine().trim())) != 0) {
			int curdir = 0;
			int cursign = 1;
			int benddir;
			int bendsign;
			String[] in = br.readLine().split(" ");
			for(int i=0; i<num-1; i++) {
				if(in[i].equals("+y")) {
					benddir = 1;
					bendsign = 1;
				}
				else if(in[i].equals("-y")) {
					benddir = 1;
					bendsign = -1;
				}
				else if(in[i].equals("+z")) {
					benddir = 2;
					bendsign = 1;
				}
				else if(in[i].equals("-z")) {
					benddir = 2;
					bendsign = -1;
				}
				else {
					benddir = -1;
					bendsign = 0;
				}
				
				if(benddir != -1) {
					if(curdir == 0) {
						if(cursign == 1) {
							curdir = benddir;
							cursign = bendsign;
						}
						else {
							curdir = benddir;
							cursign = bendsign * -1;
						}
					}
					else if (curdir == benddir) {
						curdir = 0;
						if (cursign  == bendsign) {
							cursign = -1;
						}
						else {
							cursign = 1;
						}
					}
				}
			}
			if(curdir == 0)
				if(cursign == 1)
					System.out.println("+x");
				else
					System.out.println("-x");
			else if(curdir == 1)
				if(cursign == 1)
					System.out.println("+y");
				else
					System.out.println("-y");
			else
				if(cursign == 1)
					System.out.println("+z");
				else 
					System.out.println("-z");
		}
	}
}
