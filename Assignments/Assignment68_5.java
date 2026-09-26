import java.util.HashMap;

public class Assignment68_5 {
    public static void main(String[] args) {
        int[] products = {
            101, 102, 101, 103, 101,
            102, 104, 105, 102, 103
        };

        HashMap<Integer, Integer> frequency = new HashMap<>();

        for (int product : products) 
        {
            frequency.put(product, frequency.getOrDefault(product, 0) + 1);
        }

        int firstProduct = -1;
        int secondProduct = -1;
        int firstCount = 0;
        int secondCount = 0;

        for (int product : frequency.keySet()) 
        {
            int count = frequency.get(product);

            if (count > firstCount) 
            {
                secondProduct = firstProduct;
                secondCount = firstCount;
                firstProduct = product;
                firstCount = count;
            } 
            else if (count > secondCount) 
            {
                secondProduct = product;
                secondCount = count;
            }
        }

        System.out.println(firstProduct + " -> " + firstCount);
        System.out.println(secondProduct + " -> " + secondCount);
    }
}