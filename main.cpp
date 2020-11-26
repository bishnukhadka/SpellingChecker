#include "Dictionary.h"
#include "SpellChecker.h"

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    Dictionary dictionary("Words.txt");
    //loads the words in "words.txt" ie dictionary file to unordered map.

    dictionary.check_inputFile("input.txt");
    //checks if the words from "input.txt" file is correct or not.
    //displays suggestion in mispelled.

    getchar();
    return 0;
}