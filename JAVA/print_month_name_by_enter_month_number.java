// Question: Write a program to print month name if user enter a number from 1 to 12
import java.util.Scanner;
public class print_month_name_by_enter_month_number {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter thr Number(1 - 12): ");
        int a = sc.nextInt();
        switch(a){
            case 1:
                System.out.println("Jaunary");
                break;
            case 2:
                System.out.println("Febuaray");
                break;
            case 3:
                System.out.println("March");
                break;
            case 4:
                System.out.println("April");
                break;
            case 5:
                System.out.println("May");
                break;
            case 6:
                System.out.println("June");
                break;
            case 7:
                System.out.println("July");
                break;
            case 8:
                System.out.println("Agust");
                break;
            case 9:
                System.out.println("September");
                break;
            case 10:
                System.out.println("October");
                break;
            case 11:
                System.out.println("November");
                break;
            case 12:
                System.out.println("December");
                break;
            default:
                System.out.println("You enter the wrong number");
                System.out.println("In a Year only 12 months are exist");
                System.out.println("so enter number b/w (1 - 12)");
                break;
        }
         System.out.println(sc); // this is optional line can it comment out
    }    
}
