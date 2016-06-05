import java.util.*;
import java.io.*;

public class uva11727 {
	public static void main(String args[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine());
		for(int i=0;i<cases;i++) {
			String[] in = br.readLine().split(" ");
			int[] nums = new int[3];
			for(int j=0; j<3; j++) {
				nums[j] = Integer.parseInt(in[j]);
			}
			Arrays.sort(nums);
			System.out.println("Case " + (i+1) + ": " + nums[1]);
		}
		
	}
}
