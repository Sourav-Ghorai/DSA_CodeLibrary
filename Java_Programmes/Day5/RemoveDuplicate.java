package College_Programmes.Day5;

import java.util.Arrays;

public class RemoveDuplicate {

    public static void main(String[] args) {
        int[] originalArray = {1, 2, 3, 4, 2, 5, 6, 1, 7, 8, 9, 4};

        System.out.println("Original Array: " + Arrays.toString(originalArray));

        // Remove duplicates using a temporary array
        int[] uniqueArray = removeDuplicates(originalArray);

        System.out.println("Array after removing duplicates: " + Arrays.toString(uniqueArray));
    }

    public static int[] removeDuplicates(int[] array) {
        // Sorting the array to group duplicate elements together
        Arrays.sort(array);

        // Counting the number of unique elements
        int uniqueCount = 0;
        for (int i = 0; i < array.length - 1; i++) {
            if (array[i] != array[i + 1]) {
                uniqueCount++;
            }
        }
        uniqueCount++; // Increment for the last element

        // Creating a new array to store unique elements
        int[] uniqueArray = new int[uniqueCount];
        uniqueArray[0] = array[0];
        int index = 1;

        // Copying unique elements to the new array
        for (int i = 1; i < array.length; i++) {
            if (array[i] != array[i - 1]) {
                uniqueArray[index] = array[i];
                index++;
            }
        }

        return uniqueArray;
    }
}

