// Question: write a program to assign the grade of students on the basis of his percentage and percentage takes from students
import java.util.Scanner;
public class grade_assign {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        float per = sc.nextFloat();
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
     System.out.println(sc); // this is optional line can it comment out
    }
}
