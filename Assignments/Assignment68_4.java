import java.util.HashMap;

public class Assignment68_4 {
    public static void main(String[] args) {
        String[] words = {
            "java", "python", "java", "c", "java", "python", "cpp"
        };

        HashMap<String, Integer> frequency = new HashMap<>();

        for (String word : words) 
        {
            frequency.put(word, frequency.getOrDefault(word, 0) + 1);
        }

        for (String word : frequency.keySet()) 
        {
            System.out.println(word + " -> " + frequency.get(word));
        }

        String mostFrequent = "";
        int maxFrequency = 0;

        for (String word : frequency.keySet()) 
        {
            if (frequency.get(word) > maxFrequency) 
            {
                mostFrequent = word;
                maxFrequency = frequency.get(word);
            }
        }

        System.out.println("Most frequent word : " + mostFrequent);
        System.out.println("Frequency : " + maxFrequency);
    }
}