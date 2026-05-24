
public class variables {

    public static void main(String[] args) {
        // variable declaration in java language 
        // Interger data types
        // DATA TYPES --> these are reseved keywords that are perform a specific task in a java && it also give the information about data which  can we write 

        byte b = 5;
        short s = 10;
        int i = 5000;
        long l = 8976348;

        // Real numbers
        float f = 45.897f;    // f is neccesary to use because float is single precision 
        double d = 232.098;   // Double precision

        // Characters 
        char c = 'a';   // '' (single cot) it is use to tell the complier that the given value is a character type

        //Boolean values
        boolean bool = false;  // Boolean is a data type which can only returns true or false 

        // to print numbers using number system like binary(2), octal(8), Hexadecimal(16)
        int a = 0b101; // Basically '0b' is a kayword that tells the complier it is a binary number
        int e = 0XA;  // '0X' tells the complier it is a hexadecimal binary number

        // NOW
        System.out.println("Interger Numbers are --> " + b + "," + s + "," + i + "," + l);
        System.out.println("Real Numbers are --> " + f + "," + d);
        System.out.println("Charecters are --> " + c);
        System.out.println("Boolean are --> " + bool);
        System.out.println("Binary Numbers are --> " + a + "," + e);

    }
}
