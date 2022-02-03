import java.util.Scanner;
import java.math.BigDecimal;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		BigDecimal a=sc.nextBigDecimal();
		int b=sc.nextInt();

		BigDecimal result=a.pow(b);
		System.out.println(result.toPlainString());
	}
}