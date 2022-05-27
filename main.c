#include <stdio.h>

int main(int argc, char *argv) {
    int i, n = 1111350;

    double item, result = 0;


    for(i = 0; i < n; i++) {
        item = 1 / (i * 2.0 + 1.0);

        if( i % 2 != 0 ) {
            item = item * -1.0;
        }

        result = result + item;
    }

    result = result * 4;

    printf("n = %d, Pi = %f\n", n, result);
}
