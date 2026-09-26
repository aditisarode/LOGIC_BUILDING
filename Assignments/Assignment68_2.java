import java.util.LinkedList;
import java.util.Queue;

class SupportQueue {
    Queue<String> requests = new LinkedList<>();

    void addRequest(String request) {
        requests.add(request);
    }

    void processRequest() {
        if (!requests.isEmpty()) {
            System.out.println("Processing: " + requests.poll());
        } else {
            System.out.println("No pending requests.");
        }
    }

    void showPendingRequests() {
        System.out.println("Pending requests:");

        for (String request : requests) {
            System.out.println(request);
        }
    }
}

public class Assignment68_2 {
    public static void main(String[] args) {
        SupportQueue queue = new SupportQueue();

        queue.addRequest("R101");
        queue.addRequest("R102");
        queue.addRequest("R103");
        queue.addRequest("R104");

        queue.showPendingRequests();

        queue.processRequest();
        queue.processRequest();

        queue.showPendingRequests();
    }
}