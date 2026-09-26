import java.util.HashMap;

public class Assignment67_2 {
    public static void main(String[] args) {

        String str = "programming";

        HashMap<Character, Integer> count = new HashMap<>();

       
        for (char ch : str.toCharArray()) 
        {
            count.put(ch, count.getOrDefault(ch, 0) + 1);
        }

        
        for (char ch : str.toCharArray()) 
        {
            if (count.get(ch) == 1) 
            {
                System.out.println("First non-repeating character : " + ch);
                break;
            }
        }
    }
}