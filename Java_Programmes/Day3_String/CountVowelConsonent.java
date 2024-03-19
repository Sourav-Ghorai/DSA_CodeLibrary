import java.util.Scanner;
public class CountVowelConsonent{
        public static void main(String [] args){
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter a String: ");
                String str = sc.nextLine();
                String vowelString = "aeiou";
                str = str.toLowerCase();
                int n = str.length(), vowel = 0, consonent = 0;
                for(int i = 0; i<n; i++){
                        if(vowelString.indexOf(str.charAt(i)) != -1){
                                vowel++;
                        }
                        else if(str.charAt(i) != ' '){
                                consonent++;
                        }
                }
                System.out.println("Vowel = "+vowel);
                System.out.println("Consonent = "+consonent);
        }
}
