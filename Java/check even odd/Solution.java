import java.util.*;

public class Even_odd {
    public static void main(String[] args) {
        
	int n,i;
        System.out.println("Please Enter to Check : ");
        
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
 
        if(n%2==0)
        {
            System.out.println("Entered number is Even Number");
        }
        else
        {
            System.out.println("Entered number is Odd Number");
        }
        
    }
    
}