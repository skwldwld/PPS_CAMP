import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main w1 = new Main();
        w1.b1();
    }

    void b1() {
        Scanner s = new Scanner(System.in);
        Compare c;
        c = new Compare();

        c.a = s.nextInt();
        c.b = s.nextInt();

        String n = c.com();
        System.out.println(n);
    }
}

class Compare {
    int a, b;

    String com() {
        if(a > b) return ">";
        else if(a < b) return "<";
        else return "==";
    }
}