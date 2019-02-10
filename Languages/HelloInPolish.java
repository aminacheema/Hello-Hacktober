import java.io.BufferedReader;
import java.io.InputStreamReader;
/*
 * The program translates hello world to Polish. ^^
 */
public class HelloInPolish 
{
	private final static String PolishHello = "WITAJ ŚWIECIE!";
	private final static String EnglishHello = "HELLO WORLD";
	
	public static void main(String[] args) 
	{
		try 
		{
			System.out.println("Enter 'HELLO WORLD' to see how it is in Polish.");
			BufferedReader scan = new BufferedReader(new InputStreamReader(System.in));
			String input = scan.readLine();
			
			if(input.toUpperCase().equals(EnglishHello))
			{
				System.out.println(PolishHello);
			}
			else
			{
				System.out.println("Enter 'HELLO WORLD'!");
				main(args);
			}
		} 
		
		catch (Exception e) 
		{
			System.out.println("Sorry. Enter 'HELLO WORLD' .");
			main(args);
		}
		

	}

}
