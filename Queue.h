#ifndef QUEUE_H
#define QUEUE_H

#include <ctype.h>   // For character handling functions
#define SIZE 26      // 26 characters in the alphabet 

// Structure representing the circular alphabet queue
struct CircularQueue {
    char letters[SIZE];
    int front;
    int rear;
};

// Initialize the queue with letters A to Z
void initializeQueue(struct CircularQueue *queue) {
    queue->front = 0;
    queue->rear = SIZE - 1;

    char ch = 'A';
    for (int i = 0; i < SIZE; i++) {
        queue->letters[i] = ch++;
    }
}

// Find the index of a given uppercase character in the queue
int findIndex(struct CircularQueue *queue, char ch) {
    for (int i = 0; i < SIZE; i++) {
        if (queue->letters[i] == ch) {
            return i;
        }
    }
    return -1; // Not found
}

// Shift a character using caesar cipher logic
char shiftCharacter(struct CircularQueue *queue, char character, int shiftKey) {
    if (!isalpha(character)) {
        return character;
    }

    int isLowercase = islower(character);
    character = toupper(character);

    int currentIndex = findIndex(queue, character);
    int newIndex = (currentIndex + shiftKey % SIZE + SIZE) % SIZE;

    char newCharacter = queue->letters[newIndex];
    return isLowercase ? tolower(newCharacter) : newCharacter;
}

#endif // QUEUE_H
