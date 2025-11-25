#include <unistd.h>
void print_char(char a) {
    write(1, &a, 1);
}
 {
    print_char('A'); 
    return (0);
}