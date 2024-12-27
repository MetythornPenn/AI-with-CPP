extern "C" {
    int run_loop() {
        int total = 0;
        for (int i = 0; i < 1000000000; i++) {
            total += i;
        }
        return total;
    }
}
