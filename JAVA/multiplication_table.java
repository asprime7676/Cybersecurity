// multiplication table for any number

import java.util.Scanner;

public class multiplication_table {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter a number: ");
        int a = sc.nextInt();
        int i = 1;
        System.out.println("The Multiplication Is: ");
        while (i <= 10) {
            System.out.println(a + " X " + i + " = " + (a * i));
            i++;
        }
    }
}
