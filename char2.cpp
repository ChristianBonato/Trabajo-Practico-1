// Ejemplos Char
#include <cassert>
int main() {
    assert('a' == 97);
    assert('a' + 1 == 98);
    assert('a' + 1 == 'b');
    assert(97 + 1 == 'b');
    assert('d' - 'Z' == 10);
    return 0;
}