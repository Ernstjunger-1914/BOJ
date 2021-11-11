import java.util.Scanner;
 
public class Main {
 
	static Integer[][] dp=new Integer[41][2];
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		dp[0][0]=1;
		dp[0][1]=0;
		dp[1][0]=0;
		dp[1][1]=1;
		
		int t=sc.nextInt();
        
		StringBuilder sb=new StringBuilder();
 
		while(t-- > 0) {
			int n=sc.nextInt();
			fibonacci(n);
			sb.append(dp[n][0] + " " + dp[n][1]).append("\n");
		}
		System.out.println(sb);
	}
	
	static Integer[] fibonacci(int n) {
		if(dp[n][0]==null||dp[n][1]==null) {
			dp[n][0]=fibonacci(n-2)[0]+fibonacci(n-1)[0];
			dp[n][1]=fibonacci(n-2)[1]+fibonacci(n-1)[1];
		}
		return dp[n];
	}
 
}