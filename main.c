#include <stdio.h> //include standard input output functions
#include <string.h> // include string functions
#include "Queue.h" // Include the queue logic

// Loop through the message and apply Caesar cipher to each character
void processMessage(char message[], char result[], int shiftKey, struct CircularQueue *queue) {
    int i = 0;
    while (message[i] != '\0') {
        result[i] = shiftCharacter(queue, message[i], shiftKey);
        i++;
    }
    result[i] = '\0'; // end of string
}

int main() {

    return 0;
}
