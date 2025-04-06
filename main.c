#include <stdio.h>
#include <stdint.h>

uint8_t set_bit(uint8_t val, int bit) {
    uint8_t new_val = val;
    new_val |= (1 << bit - 1);
    return new_val;
}

uint8_t clear_bit(uint8_t val, int bit) {
    uint8_t new_val = val;
    new_val &= ~(1 << bit - 1);
    return new_val;
}

void print_binary(uint8_t val) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (val >> i) & 1);
    }
}

int main(void) {
    for (int i = 1; i <= 8; i++) {
        print_binary(set_bit(0,i));
        printf("\n");
    }
    printf("\n");
    for (int j = 1; j <= 8; j++) {
        print_binary(clear_bit(255,j));
        printf("\n");
    }
    return 0;
}
