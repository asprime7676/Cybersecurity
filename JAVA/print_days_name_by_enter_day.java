// Question: Write a program to print day name if user enter a number from 1 to 7
import java.util.Scanner;
public class print_days_name_by_enter_day {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter Days in Number: ");
        int a = sc.nextInt();
        switch(a){
            case 1:
                System.out.println("Monday");
                break;
            case 2: 
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5: 
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default: {
                System.out.println("You enter the wrong number");
                System.out.println("In a week only 7 days are exist");
                System.out.println("so enter number b/w (1 - 7)");
                break;
            }
        }
    System.out.println(sc); // this is optional line can it comment out
    }
    
}
