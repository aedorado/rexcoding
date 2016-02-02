import java.util.Scanner;

public class Main {

	static Scanner scan = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		int temp=0;
		temp=scan.nextInt();
		
		while(temp!=42) {
			System.out.println(temp);
			temp=scan.nextInt();
		}
	}
	
}
