package College_Programmes.Day1;

import java.util.Scanner;

public class FibonacciSeries {
    int n;
    FibonacciSeries(int n){
        this.n = n;
    }
    void display(){
        int sum = 0, a = 0, b = 1;
        System.out.print(a + " " + b);
        for (int i = 2; i<n; i++){
            sum = a + b;
            System.out.print(" "  + sum);
            a = b;
            b = sum;
        }
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter Number: ");
        n = sc.nextInt();
        FibonacciSeries fb = new FibonacciSeries(n);
        fb.display();
    }
}
