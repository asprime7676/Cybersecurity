// Question: write a program to make a simple calculator give option to user select and give number to do the task

import java.util.Scanner;

public class make_simple_calculator {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter first Number: ");
        double a = sc.nextDouble();
        System.out.printf("Enter Second Number: ");
        double b = sc.nextDouble();
        System.out.println("--------------CALCULATOR------------------");
        System.out.println("1. ADDITION (+) ");
        System.out.println("2. SUBSTRACTION (-) ");
        System.out.println("3. MULTIPLICATION (x) ");
        System.out.println("4. DIVISION (/) ");
        System.out.println("5. REMAINDER (%) ");
        System.out.println("6. ALL CALCULATION ");
        System.out.println("------------------------------------------");
        System.out.printf("Choose your Option(1 - 6): ");
        int op = sc.nextInt();
        System.out.println("--------------RESULT----------------------");
        switch (op) {
            case 1:
                double sum = (a + b);
                System.out.println("The SUM is: " + sum);
                break;
            case 2:
                double sub = (a - b);
                System.out.println("The SUBSTRACTION is: " + sub);
                break;
            case 3:
                double mul = (a * b);
                System.out.println("The MULTIPLICATION is: " + mul);
                break;
            case 4:
                double div = (a / b);
                System.out.println("The DIVISION is: " + div);
                break;
            case 5:
                double rem = (a % b);
                System.out.println("The REMAINDER is: " + rem);
                break;
            case 6:
                double s = (a + b);
                double su = (a - b);
                double m = (a * b);
                double d = (a / b);
                double r = (a % b);
                System.out.println("The SUM is: " + s);
                System.out.println("The SUBSTRACTION is: " + su);
                System.out.println("The MULTIPLICATION is: " + m);
                System.out.println("The DIVISION is: " + d);
                System.out.println("The REMAINDER is: " + r);
                break;
            default:
                System.out.println("You Entered Wrong Option");
                break;
        }
        System.out.println(sc); // this is optional line can it comment out
    }
}
