package Tree;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    static class TreeNode {
        char value;
        TreeNode left;
        TreeNode right;

        public TreeNode(char value) {
            this.value = value;
        }
    }

    private static StringBuilder result = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        TreeNode root = buildTree(br, n);

        preOrder(root);
        result.append('\n');
        inOrder(root);
        result.append('\n');
        postOrder(root);
        result.append('\n');
        System.out.println(result);
    }

    private static TreeNode buildTree(BufferedReader br, int n) throws IOException {
        TreeNode root = new TreeNode('A');

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            char rootValue = st.nextToken().charAt(0);
            char leftValue = st.nextToken().charAt(0);
            char rightValue = st.nextToken().charAt(0);

            insert(root, rootValue, leftValue, rightValue);
        }

        return root;
    }

    private static void insert(TreeNode node, char rootValue, char leftValue, char rightValue) {
        if (node == null) return;

        if (node.value == rootValue) {
            node.left = createNode(leftValue);
            node.right = createNode(rightValue);
        } else {
            insert(node.left, rootValue, leftValue, rightValue);
            insert(node.right, rootValue, leftValue, rightValue);
        }
    }

    private static TreeNode createNode(char value) {
        return (value == '.') ? null : new TreeNode(value);
    }

    private static void preOrder(TreeNode node) {
        if (node == null) return;

        result.append(node.value);
        preOrder(node.left);
        preOrder(node.right);
    }

    private static void inOrder(TreeNode node) {
        if (node == null) return;

        inOrder(node.left);
        result.append(node.value);
        inOrder(node.right);
    }

    private static void postOrder(TreeNode node) {
        if (node == null) return;

        postOrder(node.left);
        postOrder(node.right);
        result.append(node.value);
    }
}
