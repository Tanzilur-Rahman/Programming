import java.util.Scanner;

public class Solution {
  public static void main(String[] args) 
  {
    Scanner input = new Scanner (System.in);
    System.out.print("Input the first number: ");
    int a = input.nextInt();
    System.out.print("Input the second number: ");
    int b = input.nextInt();
    int m = (a*b);
    System.out.println("The product of a and b is:" +m);
  }
}