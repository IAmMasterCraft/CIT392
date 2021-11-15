/**
 * 
 * Write a program to calculate the sum of integers from 1 to 100
 * 
 */

public class Two {
    public static void main(String args[]) {
        int result = 0;
        for (int index = 1; index <= 100; index++) {
            result += index;
        }
        System.out.println(result);
    }
}
