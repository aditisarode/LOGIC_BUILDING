import java.util.*;

public class Assignment69_4 {
    public static void main(String[] args) {
        HashMap<String, ArrayList<String>> graph = new HashMap<>();
        HashMap<String, Integer> indegree = new HashMap<>();

        addDependency(graph, indegree, "Database", "Backend");
        addDependency(graph, indegree, "Backend", "API");
        addDependency(graph, indegree, "API", "Frontend");

        Queue<String> queue = new LinkedList<>();

        for (String module : indegree.keySet()) 
        {
            if (indegree.get(module) == 0) 
            {
                queue.add(module);
            }
        }

        while (!queue.isEmpty()) 
        {
            String module = queue.poll();
            System.out.println(module);

            for (String dependent : graph.getOrDefault(module, new ArrayList<>())) 
            {
                indegree.put(dependent, indegree.get(dependent) - 1);

                if (indegree.get(dependent) == 0) 
                {
                    queue.add(dependent);
                }
            }
        }
    }

    static void addDependency(
            HashMap<String, ArrayList<String>> graph,
            HashMap<String, Integer> indegree,
            String from,
            String to) {

        graph.putIfAbsent(from, new ArrayList<>());
        graph.putIfAbsent(to, new ArrayList<>());

        indegree.putIfAbsent(from, 0);
        indegree.put(to, indegree.getOrDefault(to, 0) + 1);

        graph.get(from).add(to);
    }
}