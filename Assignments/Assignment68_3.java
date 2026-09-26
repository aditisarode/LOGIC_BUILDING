import java.util.Comparator;
import java.util.PriorityQueue;

class Patient {
    String name;
    int severity;

    Patient(String name, int severity) {
        this.name = name;
        this.severity = severity;
    }
}

public class Assignment68_3 {
    public static void main(String[] args) {
        PriorityQueue<Patient> patients = new PriorityQueue<>(
            Comparator.comparingInt((Patient p) -> p.severity).reversed()
        );

        patients.add(new Patient("Rahul", 2));
        patients.add(new Patient("Amit", 5));
        patients.add(new Patient("Pooja", 1));
        patients.add(new Patient("Neha", 4));

        while (!patients.isEmpty()) 
        {
            Patient patient = patients.poll();
            System.out.println(patient.name);
        }
    }
}