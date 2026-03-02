public class UC5 {
    public static void main(String[] args) {

        String[] pattern = {
                String.join("  ",
                        " *** ",
                        " *** ",
                        "**** ",
                        " ****"),
                String.join("  ",
                        "*   *",
                        "*   *",
                        "*   *",
                        "*    "),
                String.join("  ",
                        "*   *",
                        "*   *",
                        "**** ",
                        " *** "),
                String.join("  ",
                        "*   *",
                        "*   *",
                        "*    ",
                        "    *"),
                String.join("  ",
                        " *** ",
                        " *** ",
                        "*    ",
                        "**** ")
        };

        for (String row : pattern) {
            System.out.println(row);
        }
    }
}