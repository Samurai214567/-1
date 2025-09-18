import java.util.*;

public class SplitLists {
    public static void main(String[] args) {
        List<String> src = Arrays.asList("a","1","b","2","c","3");
        List<String> letters = new ArrayList<>();
        List<String> digits  = new ArrayList<>();

        for (String s : src) {
            if (s.matches("\\d")) digits.add(s);
            else if (s.matches("[A-Za-z]")) letters.add(s);
        }

        System.out.println("Letters: " + letters);
        System.out.println("Digits: " + digits);
    }
}
