#include <unistd.h>

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        write(1, &letter, 1);
        letter++;
    }
}
 {
    print_alphabet();
    return (0);
}       