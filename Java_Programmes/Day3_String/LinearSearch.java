import java.util.Scanner;

public class LinearSearch {
        static void Search(int []arr, int ele, int n){
                for(int i = 0; i<n; i++){
                        if(arr[i]==ele){
                                System.out.print("Element found at index "+i);
                                return;
                        }
                }
                System.out.println("Element not found");
        }
        public static void main(String []args){
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter the size of the array: ");
                int n = sc.nextInt();
                int []arr = new int[n];
                System.out.print("Enter elements in the array: ");
                for(int i = 0; i<n; i++){
                        arr[i] = sc.nextInt();
                }
                System.out.print("Enter a element to be searched: ");
                int ele = sc.nextInt();
                Search(arr, ele,n);
                sc.close();
        }
        
}
