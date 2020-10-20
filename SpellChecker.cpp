#include "Dictionary.h"
#include "SpellChecker.h"

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void SpellChecker ::CreateWordList_bySwappingAdjCharacters(const string &word)
{

    // try to find some alternating spellings
    //for each position in word up to 2nd to last
    for (int i = 0; i < word.size() - 1; i++)
    {
        //create copy of word
        string newWord = word;

        //swap adjecent letters at i and i+1
        swap(newWord[i], newWord[i + 1]);

        // if new word is in dictionary, then add it to list of possible
        // corrections
        if (contains(newWord))
        {
            suggestion_list.push_back(newWord);
        }
    }
}

void SpellChecker::CreateWordList_byDeletingCharacters(const string &word)
{

    for (int i = 0; i < word.size(); i++)
    {
        string newWord = word;
        newWord.erase(newWord.begin() + i);

        if (contains(newWord))
        {
            suggestion_list.push_back(newWord);
        }
    }
}

void SpellChecker::CreateWordList_byReplacingCharacters(const string &word)
{

    for (int i = 0; i < word.size(); i++)
    {
        char ch = 'a';
        for (int j = 0; j < 26; j++)
        {
            string newWord = word;
            newWord[i] = ch;

            if (contains(newWord))
            {
                suggestion_list.push_back(newWord);
            }

            ch++;
        }
    }
}

void SpellChecker::CreateWordList_byInsertingCharacters(const string &word)
{
    for (int i = 0; i < word.size(); i++)
    {
        char ch = 'a';
        for (int j = 0; j < 26; j++)
        {
            string newWord = word;
            newWord[i] = ch;

            if (contains(newWord))
            {
                suggestion_list.push_back(newWord);
            }

            ch++;
        }
    }
}

void SpellChecker::to_lower_case(string &word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
}

void SpellChecker::remove_unnecessary_characters(string &word)
{
    if (word[word.length() - 1] == '.' || word[word.length() - 1] == '!' || word[word.length() - 1] == '?')
    {
        word.erase(word.length() - 1);
    }
}

bool SpellChecker::contains(const string &word)
{
    Dictionary dictionary;
    if (dictionary.wordDictionary.find(word) != dictionary.wordDictionary.end())
    {
        return true;
    }

    return false;
}

vector<string> SpellChecker::get_top_suggestions()
{
}