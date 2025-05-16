import java.io.*;
import java.util.*;
import java.lang.Math;
public class Solution {
    public static int getXorValue(int N, List<Integer> Arr, int M, List<Integer> X, List<Integer> V) {
        // Apply all operations
        for (int i = 0; i < M; i++) {
            int idx = X.get(i) - 1;  // Convert 1-based to 0-based
            int val = V.get(i);
            // Apply to subtree rooted at idx
            Queue<Integer> queue = new LinkedList<>();
            queue.add(idx);
            while (!queue.isEmpty()) {
                int node = queue.poll();
                if (node >= N) continue;
                Arr.set(node, Arr.get(node) + val);
                queue.add(2 * node + 1);  // Left child
                queue.add(2 * node + 2);  // Right child
            }
        }

        // Compute XOR of all values
        int xorSum = 0;
        for (int num : Arr) {
            xorSum ^= num;
        }

        return xorSum;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = Integer.parseInt(scan.nextLine().trim());
        List<Integer> Arr = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            Arr.add(Integer.parseInt(scan.nextLine().trim()));
        }

        int M = Integer.parseInt(scan.nextLine().trim());
        List<Integer> X = new ArrayList<>();
        List<Integer> V = new ArrayList<>();
        for (int i = 0; i < M; i++) {
            X.add(Integer.parseInt(scan.nextLine().trim()));
        }
        for (int i = 0; i < M; i++) {
            V.add(Integer.parseInt(scan.nextLine().trim()));
        }

        int result = getXorValue(N, Arr, M, X, V);
        System.out.println(result);
    }
}
