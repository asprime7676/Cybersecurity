
public class type_conversion {

    // It is known as windening conversion 
    // impliocite conversion --> Destination data type should be wider then source data type
    public static void main(String[] args) {
        // byte --> int conversion
        byte b = 26;
        int i;
        i = b;
        System.out.println(i);

        // explicite conversion --> convert by using casting
        // int --> byte conversion (Force fully conversion)
        int a = 300;
        byte s;
        // b = a --> it generates error in code
        s = (byte) a;
        System.out.println(s);

        /*
        type casting are allowed in some cases are
        1. long --> int
        2. double --> float
        3. float / double --> int
        1 & 2 both are called Narroing Conversion
        
         */
        // char --> int conversion
        char c = 'a';
        int j = c;
        System.out.println(j);
    }
}
