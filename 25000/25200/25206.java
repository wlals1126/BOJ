import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String[] grade = new String[9];
        grade[0] = "A+";
        grade[1] = "A0";
        grade[2] = "B+";
        grade[3] = "B0";
        grade[4] = "C+";
        grade[5] = "C0";
        grade[6] = "D+";
        grade[7] = "D0";
        grade[8] = "F";

        double[] score = new double[9];
        score[0] = 4.5;
        score[1] = 4.0;
        score[2] = 3.5;
        score[3] = 3.0;
        score[4] = 2.5;
        score[5] = 2.0;
        score[6] = 1.5;
        score[7] = 1.0;
        score[8] = 0.0;

        double total = 0.0;
        double credit = 0.0;

        for(int i = 0; i < 20; i++) {
            String[] sub = sc.nextLine().split(" ");
            for(int j = 0; j < grade.length; j++) {
                if(sub[2].equals("P")) {
                    break;
                } else if(sub[2].equals(grade[j])) {
                    total += score[j] * Double.parseDouble(sub[1]);
                    credit += Double.parseDouble(sub[1]);
                    break;
                }
            }
        }
        double result = total/credit;
        System.out.printf("%.6f", result);
    }
}
