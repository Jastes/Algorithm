import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        sc.nextLine();
        int sum=0;
        String[] number_list = sc.nextLine().split("");
        for(String n : number_list)
            sum += new Integer(n);
        System.out.println(sum);
    }
}