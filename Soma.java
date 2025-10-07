class Soma {
    public static void main(String[] args) {
        long sum = 0;
        long N = 1000000000; // 1 bilhão

        long start = System.currentTimeMillis();

        for (long i = 1; i <= N; i++) {
            sum += i;
        }

        long end = System.currentTimeMillis();

        System.out.println("Soma = " + sum);
        System.out.printf("Tempo gasto: %.3f segundos\n", (end - start) / 1000.0);
    }
}