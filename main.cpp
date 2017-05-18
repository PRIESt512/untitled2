#include <iostream>
#include <immintrin.h>

int main() {
    int ac = 2;
    int bc = 3;
    int cc = ac + bc;

    __m256i a = _mm256_set_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    __m256i b = _mm256_set_epi32(1, 2, 3, 4, 5, 6, 7, 8);

    __m256i c = _mm256_add_epi32(a, b);

    return 0;
}