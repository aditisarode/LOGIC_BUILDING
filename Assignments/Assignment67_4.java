import java.util.HashSet;

public class Assignment67_4{
    public static void main(String[] args) {
        String[] transactions = {
            "TX101", "TX102", "TX103",
            "TX101", "TX104", "TX102"
        };

        HashSet<String> seen = new HashSet<>();
        HashSet<String> duplicates = new HashSet<>();

        for (String transaction : transactions) 
        {
            if (seen.contains(transaction)) 
            {
                duplicates.add(transaction);
            } 
            else 
            {
                seen.add(transaction);
            }
        }

        System.out.println("Duplicate transactions:");

        for (String transaction : duplicates) 
        {
            System.out.println(transaction);
        }
    }
}