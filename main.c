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

struct CircularQueue alphabetQueue;
    initializeQueue(&alphabetQueue);

    char choice;
    char inputMessage[1200];
    char outputMessage[1200];
    int shiftKey;

    printf("Encryption (e) or Decryption (d)?: "); //prompt the user if they want to encrypt or decrypt
    scanf(" %c", &choice);
    getchar();

    printf("Enter your message: "); //prompt the user to enter the msg
    fgets(inputMessage, sizeof(inputMessage), stdin);
    inputMessage[strcspn(inputMessage, "\n")] = '\0';

    printf("Enter the shift key: "); //prompt the user enter how many letters to move forward or backward
    scanf("%d", &shiftKey);

    if (choice == 'd') {
        shiftKey = -shiftKey;
    }

    processMessage(inputMessage, outputMessage, shiftKey, &alphabetQueue);

    printf("*****************************\n");
    if (choice == 'e') {
        printf("Encrypted message: %s\n", outputMessage);  //display the encrypted msg
    } else {
        printf("Original message: %s\n", outputMessage);   //display the original msg
    }


    return 0;
}
