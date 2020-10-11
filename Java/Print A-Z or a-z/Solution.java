import java.util.Scanner;
public class Solution {
 public static void main(String[] args) {
  char i;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter 'up; for uppercase and 'low' for lowercase : ");
        String str=input.nextLine();
	
        if("up".equals(str))
        {
            for(i='A';i<='Z';i++)
            {
            System.out.println(i);
            }
        }
        if("low".equals(str))
        {
            for(i='a';i<='z';i++)
            {
            System.out.println(i);
            }
        }
 }
}