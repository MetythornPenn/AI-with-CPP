#include <vector>
#include <numeric>  // for accumulate
#include <cmath>    // for pow

extern "C" {
    // Perform Linear Regression and return slope and intercept
    void linear_regression(const double* x, const double* y, int n, double* slope, double* intercept) {
        double sum_x = std::accumulate(x, x + n, 0.0);
        double sum_y = std::accumulate(y, y + n, 0.0);
        double sum_xy = 0.0;
        double sum_xx = 0.0;

        for (int i = 0; i < n; i++) {
            sum_xy += x[i] * y[i];
            sum_xx += x[i] * x[i];
        }

        // Calculate slope (m) and intercept (b)
        *slope = (n * sum_xy - sum_x * sum_y) / (n * sum_xx - sum_x * sum_x);
        *intercept = (sum_y - *slope * sum_x) / n;
    }
}
