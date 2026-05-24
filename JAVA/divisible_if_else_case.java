// Question: write a program to check weather the given number is divisible by 3,5 and 7

public class divisible_if_else_case {

    public static void main(String[] args) {
        int a = 50;
        if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0) {
            System.out.println("The Given Number is Divisible by 3, 5 and 7");
        } else {
            System.out.println("The given Number is NOT Divisible by 3, 5 and 7");
        }

    }
}
