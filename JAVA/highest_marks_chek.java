
// Question: Enter 5 subject markes from user and find out the highest score in given marks
import java.util.Scanner;

public class highest_marks_chek {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter Maths Subject Marks: ");
        int maths = sc.nextInt();
        System.out.printf("Enter Physics Subject Marks: ");
        int phy = sc.nextInt();
        System.out.printf("Enter Chemistry Subject Marks: ");
        int chem = sc.nextInt();
        System.out.printf("Enter English Subject Marks: ");
        Float eng = sc.nextFloat();
        System.out.printf("Enter Hindi Subject Marks:");
        int hin = sc.nextInt();
        float total = (maths + phy + chem + eng + hin);
        float per = (total / 5);
        System.out.println(sc);
        System.out.println("--------------REMARKS--------------");
        if (maths > phy && maths > chem && maths > eng && maths > hin) {
            System.out.println("The Highest Marks in Maths : " + maths);
        } 
        else if (phy > maths && phy > chem && phy > eng && phy > hin) {
            System.out.println("The Highest Marks in Physics: " + phy);
        } 
        else if (chem > maths && chem > phy && chem > eng && chem > hin) {
            System.out.println("The Highest Marks in Chemistry: " + chem);
        } 
        else if (eng > maths && eng > phy && eng > chem && eng > hin) {
            System.out.println("The Highest Marks in English: " + eng);
        } 
        else {
            System.out.println("The Highest Marks in Hindi: " + hin);
        }
        System.out.println("Total marks are: " + total);
        System.out.println("Percentage: " + per);
        
        if(per >= 90){
            System.out.println("Grade: A");
        }
        else if(per >= 80 && per < 90){
            System.out.println("Grade: B");
        }
        else if(per >= 70 && per < 80){
            System.out.println("Grade: C");
        }
        else if(per >= 60 && per < 70){
            System.out.println("Grade: D");
        }
        else{
            System.out.println("Grade: E");
        }
    }
}
