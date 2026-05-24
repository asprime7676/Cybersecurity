
// Write a program to check a number is divisible by 3 and 5 or not.
import java.util.Scanner;

public class divisibility_check_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter a number: ");
        float f = sc.nextFloat();
        if (f % 3 == 0 && f % 5 == 0){
            System.out.println("The given Number " + f + " is divisible by 3 and 5 ");
        }
        else {
            System.out.println("The given Number " + f + " is NOT divisible by 3 and 5");
        }
    }
}