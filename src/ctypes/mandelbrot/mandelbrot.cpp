#include <complex>

extern "C" {
    void mandelbrot(int width, int height, int max_iter, unsigned char* output) {
        double xmin = -2.0, xmax = 1.0;
        double ymin = -1.5, ymax = 1.5;
        
        double dx = (xmax - xmin) / width;
        double dy = (ymax - ymin) / height;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                std::complex<double> c(xmin + x * dx, ymin + y * dy);
                std::complex<double> z(0, 0);
                int iter = 0;
                
                while (abs(z) < 2.0 && iter < max_iter) {
                    z = z * z + c;
                    iter++;
                }
                
                // Normalize to 0-255
                output[y * width + x] = (unsigned char)(255 * iter / max_iter);
            }
        }
    }
}
