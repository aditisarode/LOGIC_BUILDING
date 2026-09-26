import java.util.LinkedList;

public class Assignment68_1 {
    public static void main(String[] args) {
        LinkedList<String> history = new LinkedList<>();

        String[] visits = {
            "google.com",
            "github.com",
            "openai.com",
            "oracle.com",
            "stackoverflow.com",
            "youtube.com"
        };

        for (String website : visits) {
            history.add(website);

            if (history.size() > 5) {
                history.removeFirst();
            }
        }

        for (String website : history) {
            System.out.println(website);
        }
    }
}