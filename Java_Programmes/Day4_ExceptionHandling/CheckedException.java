package College_Programmes.Day4_ExceptionHandling;

import java.io.FileNotFoundException;
import java.io.FileReader;

public class CheckedException {
        public static void main(String[] args) {
                try{
                        readFile("Throw.txt");
                }catch(FileNotFoundException e){
                        System.out.println("File not Found: " + e.getMessage());
                }finally{
                        System.out.println("Finally block has been Executed");
                }
        }
        public static void readFile(String file) throws FileNotFoundException{
                FileReader fileReader = new FileReader(file);
                
        }
}
