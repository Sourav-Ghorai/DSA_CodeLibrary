package College_Programmes.Day4_ExceptionHandling;

public class Throw {
        public static void main(String[] args) {
                try{
                        checkAge(5);
                }
                catch(ArithmeticException e){
                        System.out.println("Age Restriction Error: " + e.getMessage());
                }
        }
        public static void checkAge(int age){
                if(age<18){
                        throw new ArithmeticException("Under Age");
                }else{
                        System.out.println("Applicable");
                }

        }
}
