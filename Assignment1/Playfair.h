#ifndef PLAYFAIR_H
#define PLAYFAIR_H

#include <vector>   /* For vectors */
#include <string>   /* For C++ strings */
#include <stdio.h>
#include <iostream>  /* For standard I/O */
#include <stdlib.h> /* For miscellenous C functions */
#include <map>
#include <algorithm>
#include <ctype.h>
#include "CipherInterface.h"

using namespace std;

/**
 * This class implements the playfair cipher.
 * The class extends the abstract class 
 * CipherInterface.
 */

class Playfair: public CipherInterface
{
  /** The public members **/
 public:

  /**
   * Sets the key to use
   * @param key - the key to use
   * @return - True if the key is valid and False otherwise
   */
  virtual bool setKey(const string& key);

  /**	
   * Encrypts a plaintext string
   * @param plaintext - the plaintext string
   * @return - the encrypted ciphertext string
   */
  virtual string encrypt(const string& plaintext);

  /**
   * Decrypts a string of ciphertext
   * @param ciphertext - the ciphertext
   * @return - the plaintext
   */
  virtual string decrypt(const string& ciphertext);
			
  /**
   * Prints the Playfair matrix
   * @param fp - the file pointer
   */
  //void printMatrix(FILE* fp);
  void printMatrix();

  void createMatrix(const string& key);

  int getRow(const char& letter);

  int getCol(const char& letter);
		
  /* The protected members */
 private:
  char matrix[5][5];
	
};

#endif
