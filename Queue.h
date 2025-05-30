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