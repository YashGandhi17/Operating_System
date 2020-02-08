import java.lang.Thread;
import java.util.Scanner;

class ThreadFib extends Thread 
{ 
    int[] fib_arr;
    int i;
    ThreadFib(int[] fib_arr, int i)
    {
        this.fib_arr = fib_arr;
        this.i = i;
    }
    public void run() 
    { 
        try
        { 
            if(this.i == 0)
                this.fib_arr[this.i] = 0;
            else if(this.i == 1 || this.i == 2)
                this.fib_arr[this.i] = 1;
            else
            {
                this.fib_arr[i] = this.fib_arr[i-1] + this.fib_arr[i-2];
            }
        } 
        catch (Exception e) 
        { 
            System.out.println ("Exception : " + e); 
        } 
    } 
} 
  
// Main Class 
public class threading_1_java
{ 
    public static void main(String[] args) 
    { 
        try
        {
            Scanner scan = new Scanner(System.in);
            System.out.println("Enter N : ");
            int N = scan.nextInt();
            scan.close();
            int[] fib_arr = new int[N];
            for (int i = 0; i < N; i++) 
            { 
                ThreadFib object = new ThreadFib(fib_arr, i); 
                object.start();
                object.join();
            }
            System.out.print("[ ");
            for(int i : fib_arr)
            {
                System.out.print(i + " ");
            }
            System.out.println("]");
        }
        catch(Exception ex)
        {
            System.out.println(ex);
        }
    }
} 