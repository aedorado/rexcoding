import java.util.Scanner;

public class Main {

	static Scanner scan = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		double withdraw = scan.nextDouble();
		double balance = scan.nextDouble();
		
		if (withdraw%5!=0) { System.out.printf("%.2f\n",balance); }
		else {
			if (balance>=(withdraw+0.5)) { System.out.printf("%.2f\n",balance-withdraw-0.5); }
			else if (balance<(withdraw+0.5)) { System.out.printf("%.2f\n",balance); }
			
		}
	}
	
}
