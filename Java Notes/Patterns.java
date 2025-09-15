//SOLID RECTANGLE

import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int rows = sc.nextInt();
	    int columns = sc.nextInt();
	    
	    for(int i=1;i<=rows;i++){
	        for(int j=1;j<=columns;j++){
	            System.out.print("*");
	        }
	        System.out.println();
	    }
	}
}

// OUTPUT for 4 rows and 5 columns
*****
*****
*****
*****

//HOLLOW RECTANGLE
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int rows = sc.nextInt();
	    int columns = sc.nextInt();
	    
	    for(int i=1;i<=rows;i++){
	        for(int j=1;j<=columns;j++){
	            if(i==1 || j==1 || i==rows || j==columns){
	                 System.out.print("*");
	            }else{
	                System.out.print(" ");
	            }
	        }
	        System.out.println();
	    }
	}
}
//OUTPUT for 4 rows and 5 colums 
*****
*   *
*   *
*****

// HALF PYRAMID
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	   // int rows = sc.nextInt();
	   // int columns = sc.nextInt();
	   int n = sc.nextInt();
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=i;j++){
	           System.out.print("*");
	        }
	        System.out.println();
	    }
	}
}

// OUTPUT for n = 4
*
**
***
****

//HALF INVERTED PYRAMID
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    
	    for(int i=n;i>=1;i--){
	        for(int j=1;j<=i;j++){
	           System.out.print("*");
	        }
	        System.out.println();
	    }
	}
}

//OUTPUT for n = 4
****
***
**
*

//Inverted Half Pyramid
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i=1;i<=n;i++){
            for(int j =1;j<=n-i;j++){
               System.out.print(" ");
            }
        for(int j=1;j<=i;j++){
            System.out.print("*");
            }
        System.out.println();
        }
    }
}

//OUTPUT for n=4
   *
  **
 ***
****
