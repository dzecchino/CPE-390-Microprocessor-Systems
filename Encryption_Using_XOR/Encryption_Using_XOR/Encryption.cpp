#include <iostream>
#include <cstring>
#include <cstdint>
using namespace std;
/*
  Author: Dominic Zecchino
  Pledge: I pledge my honor that I have abided by the Stevens Honor System.
*/

void crypt(char msg[], uint32_t len, uint8_t key) {
  
    for (uint32_t i = 0; i < len; i++) {
        msg[i] = msg[i] ^ key;
    }
    cout << msg;
}

int main() {
    char msg[] = "hello";
    cout << "Before call";
    crypt(msg, 5, 13);
    cout << "After call";
    cout << msg << '\n';
    crypt(msg, 5, 13);
    cout << msg << '\n';
    //optional part: DOV method. Remove #ifdef and #endif if you want to do it

/*

#if 0
    char msg2[] = "This is a longer test. There are spaces and short words.";
    uint32_t len = strlen(msg2);
    dov(msg2, len, "Dov");
    print(msg2, len); // print the buffer as integers (because some may not be printable). Note: this uses casting   uint8_t(msg2[i]) is a number 0..255
    dov(msg2, len, "Dov");
    cout << msg2 << '\n'; // should print out the original message
#endif
*/
}