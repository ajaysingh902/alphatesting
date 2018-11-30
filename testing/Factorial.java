public class Factorial{
    public static void main(String args[])
    {
        System.out.println(fact(5));
    }
    public static int fact(int i){
        
        if(i==0){
            return 1;
        }
        else {
            i=i*(fact(i-1));
            return i;
        }

    }
}