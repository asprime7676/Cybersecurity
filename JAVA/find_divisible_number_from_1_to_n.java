// Question: Write a program to find all numbers between 1 and n
//(n takes from keyboard) and give number is divisible by 3 and 5
import java.util.Scanner;
public class find_divisible_number_from_1_to_n {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("This program to find number between 1 to your given number which is divisible by 3 and 5");
        System.out.printf("Enter a number to find: ");
        Float f = sc.nextFloat();
        int a = 1;
        while(a <= f){
             if( a % 3 == 0 && a % 5 == 0)
                System.out.println(a);
            a++;      
        }
    }
}