import java.util.*;

public class Solution {
  public static void main(String[] args) {
   int n,l,reverse=0;
 Scanner sc = new Scanner(System.in);
 System.out.println("Enter number : ");
 n=sc.nextInt();
 while(n>0)
 {
 l=n%10;
 reverse=reverse*10+l;
 n=n/10;
 }
 System.out.println("Reverse : "+ reverse);
  }
}
