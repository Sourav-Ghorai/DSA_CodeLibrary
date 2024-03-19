package College_Programmes.Day5;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class StringToDate {

    public static void main(String[] args) {
        // Input String representing a date
        String dateString = "2023-01-15";

        try {
            // Create a SimpleDateFormat object with the desired date pattern
            SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");

            // Parse the String to obtain a Date object
            Date date = sdf.parse(dateString);

            // Print the original String and the converted Date
            System.out.println("Original String: " + dateString);
            System.out.println("Converted Date: " + date);
        } catch (ParseException e) {
            // Handle parsing exception
            System.out.println("ParseException caught: " + e.getMessage());
        }
    }
}

