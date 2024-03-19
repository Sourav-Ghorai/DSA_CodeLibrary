import java.util.Scanner;
public class CountPunctuation{
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter a String: ");
                String str = sc.nextLine();
                String punct = ".,!;:\'\"?-";
                // char[] arr = {'.',',','!',';',':','\'','?','\"','-'};
                int n = str.length();
                int count = 0;
                for(int i = 0; i<n; i++){
                        if(punct.indexOf(str.charAt(i)) != -1){
                                count++;
                        }
                }
                System.out.println("The number of punctuation in the given string is: "+count);
        }
        
}