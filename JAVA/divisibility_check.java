// Question: write a program to check weather the given number is divisible by 2,3 and 5

public class divisibility_check {

    public static void main(String[] args) {
        int a = 10;
        if (a % 2 == 0 && a % 3 == 0 && a % 5 == 0) {
            System.out.println("The given number is Divisible by 2, 3, and 5");
        } else {
            System.out.println("The given number is not divisible by 2, 3,and 5");
        }
    }
}
