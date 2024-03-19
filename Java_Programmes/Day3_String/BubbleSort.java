import java.util.Scanner;
public class BubbleSort {
        static void bubbleSort(int []arr, int n){
                for(int i = 0; i<n; i++){
                        for(int j = 0; j<n-i-1; j++){
                                if(arr[j]>arr[j+1]){
                                        int temp = arr[j];
                                        arr[j] = arr[j+1];
                                        arr[j+1] = temp;
                                }
                        }
                }
        }
        static void display(int []arr,int n){
                System.out.println("Elements in the array are: ");
                for(int i = 0; i<n; i++){
                        System.out.print(arr[i] + " ");
                }
                System.out.println();
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
                display(arr, n);
                bubbleSort(arr, n);
                display(arr, n);
                sc.close();
        }
}
