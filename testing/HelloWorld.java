import java.util.Scanner;

public class HelloWorld {

    public static void main(String[] args) {

        foo(3);
    }

     public static void foo(int n){
        if(n<1){
            return;
        }
        else{
            foo(n-1);
        }
        System.out.println("hello world "+n);
    }
}