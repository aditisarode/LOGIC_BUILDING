import java.util.HashMap;

public class Assignment67_1 {
    public static void main(String[] args) 
    {

        int[] employeeIds = {101, 102, 103, 101, 104, 102, 101, 105};

        HashMap<Integer, Integer> count = new HashMap<>();

        for (int id : employeeIds) 
        {
            count.put(id, count.getOrDefault(id, 0) + 1);
        }

        for (int id : count.keySet()) 
        {
            System.out.println(id + " -> " + count.get(id));
        }
    }
}