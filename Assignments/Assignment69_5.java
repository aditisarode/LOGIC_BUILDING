import java.util.*;

public class Assignment69_5 {
    public static void main(String[] args) {
        HashMap<String, ArrayList<String>> graph = new HashMap<>();

        addFriend(graph, "Amit", "Rahul");
        addFriend(graph, "Amit", "Pooja");
        addFriend(graph, "Rahul", "Neha");
        addFriend(graph, "Pooja", "Kiran");
        addFriend(graph, "Neha", "Riya");
        addFriend(graph, "Kiran", "Riya");

        String start = "Amit";
        String target = "Riya";

        Queue<String> queue = new LinkedList<>();
        HashMap<String, Integer> distance = new HashMap<>();

        queue.add(start);
        distance.put(start, 0);

        while (!queue.isEmpty()) 
        {
            String current = queue.poll();

            if (current.equals(target)) 
            {
                break;
            }

            for (String friend : graph.getOrDefault(current, new ArrayList<>())) 
            {
                if (!distance.containsKey(friend)) 
                {
                    distance.put(friend, distance.get(current) + 1);
                    queue.add(friend);
                }
            }
        }

        System.out.println("Minimum number of connections: "
                + distance.get(target));
    }

    static void addFriend(
            HashMap<String, ArrayList<String>> graph,
            String person,
            String friend) {

        graph.putIfAbsent(person, new ArrayList<>());
        graph.get(person).add(friend);
    }
}