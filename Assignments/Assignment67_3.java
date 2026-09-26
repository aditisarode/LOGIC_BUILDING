import java.util.HashMap;

public class Assignment67_3 {
    public static void main(String[] args) {
        HashMap<Integer, Integer> products = new HashMap<>();

        products.put(101, 50);
        products.put(102, 30);

        if (products.containsKey(101)) 
        {
            products.put(101, products.get(101) - 5);
        }

        if (products.containsKey(102)) 
        {
            products.put(102, products.get(102) + 20);
        }

        if (products.containsKey(101)) 
        {
            System.out.println("Product 101 available quantity : "
                    + products.get(101));
        } 
        else 
        {
            System.out.println("Product 101 does not exist.");
        }
    }
}