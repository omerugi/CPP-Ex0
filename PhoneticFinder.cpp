// authors: Lilach Mor & Omer Rugi

#include "PhoneticFinder.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


/**
 * This file contains the namespace phonetic that include's the functions:
 * 1. check_letter
 * 2. token_txt
 * 3.find
 * The main functionality of this .cpp is to find and match word's in text regadless of typos and low/upper case letters
 *
 */
namespace phonetic{


/**
 * The function checks if one letter matches the other while ignoring known "typos" and lower/upper case letter.
 * The typos known typos:
 * (replace one letter with the other)
    v, w
    b, f, p
    g, j
    c, k, q
    s, z
    d, t
    o, u
    i, y
 * @param c1 - The first letter
 * @param c2 - The letter that can be a typo
 * @return boolean true if the letter match false if not
 */
    bool check_letter(char c1, char c2) {

        switch (c1){

            case 'v':
            case 'w':
                switch(c2){
                    case 'v':return true;
                    case 'w':return true;
                    case 'W':return true;
                    case 'V':return true;
                    default:return false;
                }
            case 'b':
            case 'f':
            case 'p':
                switch(c2){
                    case 'b':return true;
                    case 'f':return true;
                    case 'p':return true;
                    case 'B':return true;
                    case 'F':return true;
                    case 'P':return true;
                    default:return false;
                }
            case 'g':
            case 'j':
                switch(c2) {
                    case 'g':
                        return true;
                    case 'j':
                        return true;
                    case 'G':
                        return true;
                    case 'J':
                        return true;
                    default:
                        return false;
                }
            case 'c':
            case 'k':
            case 'q':
                switch(c2){
                    case 'c':return true;
                    case 'k':return true;
                    case 'q':return true;
                    case 'C':return true;
                    case 'K':return true;
                    case 'Q':return true;
                    default:return false;
                }
            case 's':
            case 'z':
                switch(c2){
                    case 's':return true;
                    case 'z':return true;
                    case 'S':return true;
                    case 'Z':return true;
                    default:return false;
                }
            case 'd':
            case 't':
                switch(c2){
                    case 'd':return true;
                    case 't':return true;
                    case 'D':return true;
                    case 'T':return true;
                    default:return false;
                }
            case 'o':
            case 'u':
                switch(c2){
                    case 'o':return true;
                    case 'u':return true;
                    case 'O':return true;
                    case 'U':return true;
                    default:return false;
                }
            case 'i':
            case 'y':
                switch(c2){
                    case 'i':return true;
                    case 'y':return true;
                    case 'I':return true;
                    case 'Y':return true;
                    default:return false;
                }
            default: return ((c1==c2)||(c1==c2-32)||(c1==c2+32));


        }
    }

    /**
        This function was taken from GeeksforGeeks:
        https://www.geeksforgeeks.org/tokenizing-a-string-cpp/
        The function takes a line and uses Tokenizer to spilite into words that are saved in a vector.
        * @param line - the line needed to be tokenized
        * @return vector of strings containg all the word in the line
    **/
    vector <string> token_txt(const string line){

        // Vector of string to save tokens
        vector <string> tokens;

        // stringstream class check1
        stringstream check1(line);

        string intermediate;

        // Tokenizing w.r.t. space ' '
        while(getline(check1, intermediate, ' '))
        {
            tokens.push_back(intermediate);
        }


        return tokens;

    }

    /**
     * This function find if a word is contained in a line that contains
     * known typos and also ignoring lower/upper case letters
     * By ->
     * 1. using token_txt function to splite the line in to words saved in a vector
     * 2. iterate over the vector and check if the length of the word is equal to given element from the vector
     * 3. if the length is equal will use check_letter to check each letter if they match under the given rules
     *      (seed check_letter discription for rules)
     * @param txt - the line with typos
     * @param word - the word looking for
     * @return the word that is the equivalent to 'word' in 'txt'
     */
    string find(string txt, string word){


        vector<string> tokens;
        tokens = token_txt(txt);
        for(const auto & token : tokens){
            if((token.length()==word.length())){
                bool flag = true;
                for (auto c2 = token.cbegin(), c1 = word.cbegin() ; c2 != token.cend() && c1 != word.cend(); ++c2,++c1) {
                    if(!check_letter(*c1,*c2))
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag) return token;
            }
        }

        throw  runtime_error("Did not find the word "+word +" in the text") ;
        return "false";

    }


}
