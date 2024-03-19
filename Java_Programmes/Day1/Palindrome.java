package College_Programmes.Day1;

import java.util.Scanner;
public class Palindrome {
    int n;
    Palindrome(int n){
        this.n = n;
    }
    void isPalindrome(){
        int m = n, sum = 0;
        while(m != 0){
            int temp = m%10;
            sum = sum * 10 + temp;
            m = m/10;
        }
        if(sum == n){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not a Palindrome");
        }
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter Number: ");
        n = sc.nextInt();
        Palindrome pal = new Palindrome(n);
        pal.isPalindrome();
    }
}
