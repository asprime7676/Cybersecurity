// Question: Write a program to check the given number is prime or not prime
import java.util.Scanner;
public class prime_number_check {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = 2;
        int isPrime = 1; // assume number is prime
        System.out.printf("Enter Your Number: ");
        int n = sc.nextInt();
        while (t <= n / 2)
        {
            if (n % t == 0)
            {
                isPrime = 0; // number is not prime
                break;
            }
            t++;
        }
        if (n <= 1)
            isPrime = 0;

        if (isPrime == 1)
            System.out.println("The given number is prime");
        else
            System.out.println("The given number is not prime");

    }
}
