import java.text.SimpleDateFormat;
import java.util.Date;

public class DateToString {

    public static void main(String[] args) {
        // Create a Date object representing the current date and time
        Date currentDate = new Date();

        // Format the date as a string using SimpleDateFormat
        String formattedDate = dateToString(currentDate);

        // Print the formatted date
        System.out.println("Formatted Date: " + formattedDate);
    }

    public static String dateToString(Date date) {
        // Create a SimpleDateFormat object with the desired date format
        // SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");

        // Use the format() method to convert the Date to a String
        String dateString = dateFormat.format(date);

        return dateString;
    }
}
