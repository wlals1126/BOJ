import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int An = scanner.nextInt();
        int Am = scanner.nextInt();
        int[][] A = readMatrix(scanner, An, Am);

        int Bn = scanner.nextInt();
        int Bm = scanner.nextInt();
        int[][] B = readMatrix(scanner, Bn, Bm);

        int[][] C = multiplyMatrices(A, B);

        printMatrix(C);

        scanner.close();
    }

    private static int[][] readMatrix(Scanner scanner, int rows, int cols) {
        int[][] matrix = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        return matrix;
    }

    private static int[][] multiplyMatrices(int[][] A, int[][] B) {
        int An = A.length;
        int Am = A[0].length;
        int Bm = B[0].length;

        int[][] C = new int[An][Bm];
        for (int i = 0; i < An; i++) {
            for (int j = 0; j < Bm; j++) {
                int result = 0;
                for (int k = 0; k < Am; k++) {
                    result += A[i][k] * B[k][j];
                }
                C[i][j] = result;
            }
        }
        return C;
    }

    private static void printMatrix(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
