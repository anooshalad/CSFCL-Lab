#include <stdio.h>
#include <string.h>

void collect_card_data() {
    char buffer[128];
    strcpy(buffer, "SIMULATED_TRACK_DATA");
    printf("Collecting card data from POS memory\n");
    printf("track_data=%s\n", buffer);
}

void send_data() {
    printf("POST /upload HTTP/1.1\n");
    printf("Content-Type: application/octet-stream\n");
}

int main() {
    printf("POS Update Service\n");
    collect_card_data();
    send_data();
    return 0;
}
