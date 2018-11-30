/**
 * Fibonacci
 */
public class Fibonacci {

    public static void main(String[] args) {
        System.out.println(fib(9));
    }
    public static int fib(int i){
        if(i==0){
            return(0);
        }
        else if(i==1||i==2){
            return (i-1);
        }
        else{
            return fib(i-1)+fib(i-2);
        }
    }
}