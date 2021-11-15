/**
 * 
 * Multidimensional arrays are actually arrays of arrays in Java, 
 * write a Java program that allocatesa 2 by 3 array and assigns it to names. 
 * The array is {{"Mr. ", "Mrs. ", "Ms. "}, {"Alan", "Charles" }}. 
 * Show the output.(6 marks)
 * 
 * 
 */

public class Three {
    public static void main (String args[]) {
        String[][] name = {{"Mr. ", "Mrs. ", "Ms. "}, {"Alan", "Charles" }};
        for (int row = 0; row < name.length; row++) {
            for (int column = 0; column < name[row].length; column++) {
                if (row == 0) {
                    System.out.println(name[row][column] + name[row + 1][(column > 1) ? 0 : column]);
                } else {
                    System.out.println(name[row - 1][column] + name[row][column]);
                }
            }
        }
    }
}
