#include <stdbool.h>
#include <string.h>

bool is_pal_tail_helper(char *s, int left, int right);

bool is_pal_tail(char *s) {
    int len = strlen(s);
    return is_pal_tail_helper(s, 0, len - 1);
}

bool is_pal_tail_helper(char *s, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (s[left] != s[right]) {
        return false;
    }
    return is_pal_tail_helper(s, left + 1, right - 1);
}