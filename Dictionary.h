#ifndef DICTIONARY_H
#define DICTIONARY_H
#include "SpellChecker.h"

#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

class Dictionary
{
private:
    unordered_map<string, string> wordDictionary;

    vector<string> suggestions;

    SpellChecker spell_checker;

public:
    Dictionary(const string &filename);

    void inputFile(const string &filename);
};

#endif