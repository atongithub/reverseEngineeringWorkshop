#include <stdio.h>
#include <string.h>

void decrypt(char *input) {
    for(int i = 0; i < strlen(input); i++) {
        input[i] ^= 0x5A;
    }
}

int main() {
    char input[50];

    printf("Enter the flag: ");
    scanf("%49s", input);

    decrypt(input);

    unsigned char encrypted_flag[] = {
        0x12, 0x0e, 0x18, 0x21, 0x6a, 0x38, 0x3c, 0x2f,
        0x29, 0x39, 0x6e, 0x2e, 0x69, 0x3e, 0x05, 0x19,
        0x6a, 0x1e, 0x69, 0x27
    };

    if(memcmp(input, encrypted_flag, 20) == 0) {
        printf("Correct!\n");
    } else {
        printf("Wrong!\n");
    }

    return 0;
}
