public class helloapp7 {
      public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Hello, World!"); 
            return;
        }

        String joinedNames = String.join(", ", args);

        System.out.println("Hello " + joinedNames);
    }
}