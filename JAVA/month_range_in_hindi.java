/*Question: write a program to check monthe name in hindi and also show
range of that particular month and input takes from user */
import java.util.Scanner;
public class month_range_in_hindi {
    public static void main(String[] args){
        char choice;
        do{
            Scanner sc = new Scanner(System.in);
            System.out.printf("Enter day (dd): ");
            int d = sc.nextInt();
            System.out.printf("Enter month (mm): ");
            int m = sc.nextInt();
            System.out.println("Your Entered date is: " + d + "/" + m + "/2026");
            // this line gives error output when user entered wrong information.
            if(d > 31 || m > 12){
                System.out.println("You Entered Wrong information Which is not possible");
                System.out.println("dd --> (1 - 30 or 31) && mm --> ( 1 - 12)"); 
            }
            // This is also gives error output specily february month.
            else if(d == 29 || d == 30 || d == 31 && m == 2){
                System.out.println("You Entered Wrong information Which is not possible");
                System.out.println("Februray Month have only '28' days"); 
            }
            // this line gives the information of MAGHA month and show some details about that particular month
            else if(d >= 14 && d <= 31 && m == 1 || d >= 1 && d <= 12 && m == 2){
                System.out.println("This is 'MAGHA' Month");
                System.out.println("The rage of 'MAGHA' Month is '14' Jaunary to '12' February");
            }
            // this line gives the information of PHALGUNA month and show some details about that particular month
            else if(d >= 13 && d <= 28 && m == 2 || d >= 1 && d <= 14 && m == 3){
                System.out.println("This is 'PHALGUNA' Month");
                System.out.println("The rage of 'PHALGUNA' Month is '13' February to '14' March");
            }
            // this line gives the information of CHAITRA month and show some details about that particular month
            else if(d >= 15 && d <= 31 && m == 3 || d >= 1 && d <= 13 && m == 4){
                System.out.println("This is 'CHAITRA' Month");
                System.out.println("The range of 'CHAITRA' Month is '15' March to '13' April");
            }
            // this line gives the information of VAISHAK month and show some details about that particular month
            else if(d >= 14 && d <= 30 && m == 4 || d >= 1 && d <= 14 && m == 5){
            System.out.println("This is 'VAISHAK' Month");
            System.out.println("The range of 'VAISHAK' Month is '14' April to '14' May");
            }
            // this line gives the information of JYESTHA month and show some details about that particular month
            else if(d >= 15 && d <= 31 && m == 5 || d >= 1 && d <= 14 && m == 6){
                System.out.println("This is 'JYESTHA' Month");
                System.out.println("The range of ;JYESTHA' Month is '15' may to '14' June");
            }
            // this line gives the information of SHRAVANA month and show some details about that particular month
            else if(d >= 15 && d <= 31 && m == 6 || d >= 1 && d <= 15 && m == 7){
                System.out.println("This is 'SHRAVANA' Month");
                System.out.println("The rage of 'SHRAVANA' Month is '16' July to '15' August");
            }
            // this line gives the information of BHADRAPADA month and show some details about that particular month
            else if(d >= 16 && d <= 31 && m == 7 || d >= 1 && d <= 15 && m == 8){
                System.out.println("This is 'BHADRAPADA' Month");
                System.out.println("The range of 'BHADRAPADA' Month is '16' August to '15' September");
            }
            // this line gives the information of ASHWIN month and show some details about that particular month
            else if(d >= 16 && d <= 31 && m == 8 || d >= 1 && d <= 15 && m == 9){
                System.out.println("This is 'ASHWIN' Month");
                System.out.println("The range of 'ASHWIN' Month is '16' September to '15' October");
            }
            // this line gives the information of KARTIK month and show some details about that particular month
            else if(d >= 10 && d <= 31 && m == 9 || d >= 1 && d <= 14 && m == 10){
                System.out.println("This is 'KARTIK' Month");
                System.out.println("The range of 'KARTIK' Month is '16' October to '14' November");
            }
            // this line gives the information of MARGASHIRSHA month and show some details about that particular month
            else if(d >= 16 && d <= 31 && m == 10 || d >= 1 && d<= 15 && m == 11){
                System.out.println("This is 'MARGASHIRSHA' Month");
                System.out.println("The range of 'MARGASHIRSHA' Month is '15' November to ' 15' December");
            }
            // this line gives the information of PAUSH month and show some details about that particular month
            else if(d >= 16 && d <= 31 && m == 11 || d >= 1 && d <= 13 && m == 12){
                System.out.println("This is 'PAUSH' Month");
                System.out.println("The range of 'PAUSH' Month is '16' December to '13' Jaunary");
            }
            else{
                System.out.println("BKL Pagal hai kya");
            }
            // this line ask to run again to the program.  
            System.out.printf("Do you check another date (Y/N): ");
            choice = sc.next().charAt(0);
        } while(choice == 'y' || choice == 'Y');
            System.out.println("Program Ended");
        
    }   
}
