
//FOR LOOP FOR PRINTING NUMBERS 1 TO 10

public class Main
{
	public static void main(String[] args) {
		for(int i=0;i<11;i++){
		    System.out.println(i);
		}
	}
}

//WHILE LOOP FOR PRINTING NUMBERS 1 TO 10

public class Main
{
	public static void main(String[] args) {
		int i=0;
		while(i<11){
		    System.out.println(i);
		    i++;
		}
	}
}
//DO WHILE LOOP FOR PRINTING NUMBERS 1 TO 10
public class Main
{
	public static void main(String[] args) {
		int i=0;
		do{
		  System.out.println(i); 
		  i++;
		}
		while(i<11);
	}
}

//SUM OF FIRST NATURAL NUMBERS
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
		int sum=0;
		for(int i=0;i<=n;i++){
		    sum+=i;
		}
    System.out.print(sum);
	}
}
