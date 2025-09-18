import java.util.*;

public class DequeStackDemo {
    public static void main(String[] args) {
        Deque<String> stack = new ArrayDeque<>();
        stack.push("a");
        stack.push("b");
        stack.push("c");

        System.out.println("Top: " + stack.peek()); // c
        System.out.println("Pop: " + stack.pop());  // c
        System.out.println("Pop: " + stack.pop());  // b
        System.out.println("Pop: " + stack.pop());  // a
    }
}
