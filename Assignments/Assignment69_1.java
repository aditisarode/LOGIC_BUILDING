import java.util.HashSet;

public class Assignment69_1 {
    public static void main(String[] args) {
        int[] transactions = {1200, 500, 700, 300, 1500};
        int target = 2000;

        HashSet<Integer> seen = new HashSet<>();

        for (int transaction : transactions) 
        {
            int required = target - transaction;

            if (seen.contains(required)) 
            {
                System.out.println(required + " + " + transaction + " = " + target);
                return;
            }

            seen.add(transaction);
        }

        System.out.println("No two transactions found.");
    }
}