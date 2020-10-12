import java.util.Scanner;
public class Solution {
 public static void main(String[] args) {
  Scanner io = new Scanner(System.in);
  System.out.println("Input length: ");
  double ln = io.nextDouble();
  System.out.println("Input width: ");
  double wd = io.nextDouble();
  double area=ln*wd;
  System.out.println("Area is = " + area);
 }
}