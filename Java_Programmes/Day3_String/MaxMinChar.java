import java.util.Scanner;

public class MaxMinChar {
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter a String: ");
                String str = sc.nextLine();
                str = str.toLowerCase();
                int[] arr = new int[26];
                int n = str.length();
                for(int i = 0; i<n; i++){
                        if(str.charAt(i) != ' '){
                                arr[str.charAt(i) - 'a']++;
                        }
                }
                int max = 0, min = 999999;
                char maxChar='a', minChar='a';
                for(int i = 0; i<26; i++){
                        if(arr[i] != 0){
                                if(max<arr[i]){
                                        max = arr[i];
                                        maxChar = (char)('a' + i);
                                }
                                if(min>arr[i]){
                                        min = arr[i];
                                        minChar = (char)('a' + i);
                                }
                        }
                }
                System.out.println("The maximum occurance is: " + maxChar + " " + max + " times");
                System.out.println("The minimum occurance is: " + minChar + " " + min + " times");

        }
}
