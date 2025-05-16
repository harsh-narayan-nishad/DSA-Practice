import java.util.*;

public class Solution {

    public static int numOfDays(int N, int X, int Y) {
        // Convert to 0-based indexing
        X -= 1;
        Y -= 1;

        // Calculate the distance to each corner and return the maximum distance
        int d1 = Math.max(X, Y);                   // to (0,0)
        int d2 = Math.max(X, N - 1 - Y);           // to (0,N-1)
        int d3 = Math.max(N - 1 - X, Y);           // to (N-1,0)
        int d4 = Math.max(N - 1 - X, N - 1 - Y);   // to (N-1,N-1)

        // Debugging output
        System.out.println("N: " + N + ", X: " + X + ", Y: " + Y);
        System.out.println("Distances: " + d1 + ", " + d2 + ", " + d3 + ", " + d4);

        return Math.max(Math.max(d1, d2), Math.max(d3, d4)); // Max of all four distances
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Example input "3 1 1" directly, no prompts
        int N = sc.nextInt();
        int X = sc.nextInt();
        int Y = sc.nextInt();

        // Output the result directly
        System.out.println(numOfDays(N, X, Y));
    }
}






// import java.util.*;

// public class Solution {

//     public static int numOfDays(int N, int X, int Y) {
//         // Convert to 0-based indexing
//         X -= 1;
//         Y -= 1;

//         // Calculate the distance to each corner and return the maximum distance
//         int d1 = Math.max(X, Y);                   // to (0,0)
//         int d2 = Math.max(X, N - 1 - Y);           // to (0,N-1)
//         int d3 = Math.max(N - 1 - X, Y);           // to (N-1,0)
//         int d4 = Math.max(N - 1 - X, N - 1 - Y);   // to (N-1,N-1)

//         return Math.max(Math.max(d1, d2), Math.max(d3, d4)); // Max of all four distances
//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         // Example input "3 1 1" directly, no prompts
//         int N = sc.nextInt();
//         int X = sc.nextInt();
//         int Y = sc.nextInt();

//         // Output the result directly
//         System.out.println(numOfDays(N, X, Y));
//     }
// }



