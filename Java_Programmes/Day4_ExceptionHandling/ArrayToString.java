package College_Programmes.Day4_ExceptionHandling;

import java.util.Arrays;

public class ArrayToString {

    public static void main(String[] args) {
        // Array of strings
        String[] stringArray = {"Java", "is", "awesome"};

        // Convert the array to a single string using Arrays.toString()
        String resultString = Arrays.toString(stringArray);
        
        System.out.println("Result String: " + resultString);
    }
}

