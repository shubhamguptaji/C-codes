#include <stdio.h>
  #include <math.h>

  int main() {
        int x[100], y[100], xy[100], xsquare[100], ysquare[100];
        int i, n, xsum, ysum, xysum, xsqr_sum, ysqr_sum;
        float coeff, num, deno;

        xsum = ysum = xysum = xsqr_sum = ysqr_sum = 0;

        /* get the number of entries from the user */
        printf("Enter the value for n:");
        scanf("%d", &n);

        /* get the values for x and y  from the user */
        printf("Enter the value for x and y:\n");
        for (i = 0; i < n; i++) {
                printf("x[%d] and y[%d]: ", i, i);
                scanf("%d%d", &x[i], &y[i]);
        }

        /* find the needed data to manipulate correlation coeff */
        for (i = 0; i < n; i++) {
                xy[i] = x[i] * y[i];
                xsquare[i] = x[i] * x[i];
                ysquare[i] = y[i] * y[i];
                xsum = xsum + x[i];
                ysum = ysum + y[i];
                xysum = xysum + xy[i];
                xsqr_sum = xsqr_sum + xsquare[i];
                ysqr_sum = ysqr_sum + ysquare[i];
        }

        num = 1.0 * ((n * xysum) - (xsum * ysum));
        deno = 1.0 * ((n * xsqr_sum - xsum * xsum)* (n * ysqr_sum - ysum * ysum));

        /* calculate correlation coefficient */
        coeff = num / sqrt(deno);

        /* print the result */
        printf("Correlation Coefficient : %.4f\n", coeff);
        return 0;
  }