import java.util.Scanner;
public class Solution {
public static void main(String[] args) {
  int i,start,end;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter Start point : ");
        start=input.nextInt();
        System.out.println("Enter end point : ");
        end=input.nextInt();
        System.out.println("Even : ");
        for(i=start;i<=end;i++)
        {
            if(i%2==0)
            {
                System.out.println(i);
            }
            
        }
        System.out.println("Odd : ");
        for(i=start;i<=end;i++)
        {
            if(i%2!=0)
            {
                System.out.println(i);
            }
            
        }
 }
}