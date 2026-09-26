import java.util.ArrayList;
import java.util.HashMap;

public class Assignment69_3 {
    public static void main(String[] args) {
        HashMap<String, ArrayList<String>> departments = new HashMap<>();

        addEmployee(departments, "Amit", "IT");
        addEmployee(departments, "Rahul", "HR");
        addEmployee(departments, "Pooja", "IT");
        addEmployee(departments, "Neha", "Finance");
        addEmployee(departments, "Kiran", "HR");
        addEmployee(departments, "Riya", "IT");

        for (String department : departments.keySet()) 
        {
            System.out.println(department + ":");

            for (String employee : departments.get(department)) 
            {
                System.out.println(employee);
            }

            System.out.println();
        }
    }

    static void addEmployee(
            HashMap<String, ArrayList<String>> departments,
            String employee,
            String department) {

        departments.putIfAbsent(department, new ArrayList<>());
        departments.get(department).add(employee);
    }
}