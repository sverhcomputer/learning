public class quadratic {
    public static void main(String[] args) {
        double b = Double.parseDouble(args[0]);
        double c = Double.parseDouble(args[1]);
        double disccriminant = b*b - 4.0*c;
        double d = Math.sqrt(disccriminant);
        System.out.println((-b + d) / 2.0);
        System.out.println((-b - d) / 2.0);}}