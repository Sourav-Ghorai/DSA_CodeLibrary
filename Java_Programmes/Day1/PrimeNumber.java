package College_Programmes.Day1;

import java.util.Scanner;

public class PrimeNumber {
    int n;
    PrimeNumber(int n){
        this.n = n;
    }
    void isPrime(){
        for (int i = 2; i<=n/2; i++){
            if(n % i == 0){
                System.out.println("Not Prime");
                return;
            }
        }
        System.out.println("Prime");
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter Number: ");
        n = sc.nextInt();
        PrimeNumber pn = new PrimeNumber(n);
        pn.isPrime();
    }
}
