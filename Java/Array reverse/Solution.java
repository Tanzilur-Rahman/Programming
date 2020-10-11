import java.util.Scanner;
public class Solution {
 public static void main(String[] args) {
  int i,n;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter array size : ");
        n=input.nextInt();
        
        int[] arr = new int[n];  
        for(i=0;i<n;i++)
        {
            arr[i]=input.nextInt();
        }
        
        System.out.println("Arraay in reverse : ");
        for(i=n-1;i>=0;i--)
        {
            System.out.println(arr[i]);
        }
 }
}