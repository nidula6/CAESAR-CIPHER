﻿# CAESAR-CIPHER


This project is a simple implementation of the **Caesar Cipher** using the C programming language. The Caesar Cipher is a classic encryption technique where each letter in a message is shifted by a fixed number of positions in the alphabet. This project uses a circular queue to store the alphabet (A–Z) and applies the cipher logic to both uppercase and lowercase letters while ignoring non-alphabet characters such as spaces or punctuation.

The code is modularized into three separate files, allowing easy collaboration among three team members:

---

 Project Structure


Queue.h

  * Defines a `CircularQueue` structure containing all 26 uppercase letters.
  * Includes functions to initialize the queue, find a character's index, and shift characters based on the shift key(Cipher logic).


main.c

  * Manages user interaction.
  * Prompts for encryption/decryption, message input, and the shift key.
  * Calls functions from the other files to produce the final output.

---

How It Works

* The user is prompted to choose between encryption (`e`) or decryption (`d`).
* The user inputs a message and a numeric shift key.
* The program shifts each letter:

  * Forward for encryption.
  * Backward for decryption (by using a negative shift).
* Case sensitivity is preserved.
* Non-letter characters remain unchanged.



How to run


copy the Queue.h and main.c file to the same directory and compile and execute the main.c file
