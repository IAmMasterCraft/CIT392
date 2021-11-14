class Hello {
    public static void main(String args[]) {
        System.out.println("Hello World!\n");
        System.out.println("Factorial of 5 is: " + String.valueOf(factorial(5)));
    }

    private static int factorial(int n) {
        return (n == 0) ? 1 : n * factorial(n - 1);
    }
}