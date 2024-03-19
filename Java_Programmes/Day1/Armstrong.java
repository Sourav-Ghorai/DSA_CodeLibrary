package College_Programmes.Day1;

import java.util.Scanner;
import java.lang.Math;
public class Armstrong {
    int n;
    Armstrong(int n){
        this.n = n;
    }
    void isArmstrong(){
        int m = n, sum = 0; 
        while(m != 0){
            int temp = m % 10;
            sum = sum + (int) Math.pow(temp,3);
            m = m/10;
        }
        if(sum == n){
            System.out.println("Armstrong");
        }
        else{
            System.out.println("Not a Armstrong");
        }
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter Number: ");
        n = sc.nextInt();
        Armstrong arm = new Armstrong(n);
        arm.isArmstrong();
    }
}
