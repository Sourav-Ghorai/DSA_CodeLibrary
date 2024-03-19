import java.util.Scanner;

public class DuplicateWord {
        public static void main(String [] args){

                Scanner sc = new Scanner(System.in);
                System.out.print("Enter a String: ");
                String str = sc.nextLine();
                str = str.toLowerCase();

                String newStr = "";       //To store the duplicate word
                String[] word = str.split(" ");       //Spliting the input string into words
                int n = word.length;
                for(int i = 0; i<n; i++){
                        for(int j = i+1; j<n; j++){
                                if(word[i].equals(word[j])){
                                        if(newStr.indexOf(word[i]) == -1){
                                                newStr += word[i] + " ";
                                        }
                                        break;
                                }
                        }
                }
                if(newStr.length() == 0){
                        System.out.println("There is no duplicate word.");
                }else{
                        System.out.println("The Duplicate words are: " + newStr);
                }
                
        }
}
