#include "packet.h"

packet::packet() {

}

bool packet::parse(char *buffer, int len) {
    return false;
}

char *packet::serial() {
    char* buf = new char[100];
    return buf;
}
