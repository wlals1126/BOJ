import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            while (scanner.hasNextLine()) {
                String input = scanner.nextLine();
                int lowercaseCount = 0;
                int uppercaseCount = 0;
                int digitCount = 0;
                int spaceCount = 0;

                for (char ch : input.toCharArray()) {
                    switch (ch) {
                        case ' ':
                            spaceCount++;
                            break;
                        case '0':
                        case '1':
                        case '2':
                        case '3':
                        case '4':
                        case '5':
                        case '6':
                        case '7':
                        case '8':
                        case '9':
                            digitCount++;
                            break;
                        default:
                            if (Character.isLowerCase(ch)) {
                                lowercaseCount++;
                            } else if (Character.isUpperCase(ch)) {
                                uppercaseCount++;
                            }
                            break;
                    }
                }

                System.out.println(lowercaseCount + " " + uppercaseCount + " " + digitCount +  " " + spaceCount);
            }
        }
    }
}
