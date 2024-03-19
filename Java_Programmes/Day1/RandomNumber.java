package College_Programmes.Day1;

import java.lang.Math;
public class RandomNumber {
    public static void main(String [] args){
        for(int i = 0; i<5; i++){
            int range = 200;
            int num = (int) (Math.random()*range + 200);
            System.out.println(num);
        }
    }
}
