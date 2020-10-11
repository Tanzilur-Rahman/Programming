import java.util.Scanner;
public class Solution {
 public static void main(String[] args) {
  int i,len;
        String str,res ="";
        Scanner input=new Scanner(System.in);
        System.out.println("Enter a string : ");
        str=input.nextLine();
        len=str.length();
        for(i=len-1;i>=0;i--)
        {
            res+=str.charAt(i);
            
        }
        System.out.println(res);
 }
}