import java.util.HashSet;

public class Assignment69_2 {
    public static void main(String[] args) {
        int[] ids = {100, 4, 200, 1, 3, 2, 5};

        HashSet<Integer> set = new HashSet<>();

        for (int id : ids) 
        {
            set.add(id);
        }

        int start = 0;
        int maxLength = 0;

        for (int id : set) 
        {
            if (!set.contains(id - 1)) 
            {
                int current = id;
                int length = 1;

                while (set.contains(current + 1)) 
                {
                    current++;
                    length++;
                }

                if (length > maxLength) 
                {
                    maxLength = length;
                    start = id;
                }
            }
        }

        for (int i = 0; i < maxLength; i++) 
        {
            System.out.print((start + i) + " ");
        }

        System.out.println();
        System.out.println("Length : " + maxLength);
    }
}