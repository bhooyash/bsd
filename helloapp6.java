public class helloapp6 {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Hello");
            return;
        }

        StringBuilder greeting = new StringBuilder("Hello ");

        for (String arg : args) {
            greeting.append(arg).append(", ");
        }
        String finalGreeting = greeting.substring(0, greeting.length() - 2);

        System.out.println(finalGreeting);
    }
}