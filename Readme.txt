Prasis:
class Dictionary
{
    private:
	vector<string> suggestions;
            	//ArrayList of suggested corrctions.

	SpellChecker spell_checker;    

    public:
		unordered_map<string, string> wordDist;
            	//stores all the words in the dictionary file into an unordered_map, for faster access.
		
		Dictionary(){}

       	Dictionary(const string &filename)
            	//it will probalay be a good idea to read the dictionary file in the constructor file so, that we can pre load the dictionary unordered_map<string, string>

		void check_inputFile(const string &filename);
			//input the text file and checks the corrction of the words used.

        
}

class SpellChecker{

private:
	vector<string> suggestion_list;

	Sujan:
	void CreateWordList_bySwappingAdjCharacters(const string &word) 
		//created word list will be inserted in the vector<string> suggestions.

	Sujan:
	void CreateWordList_byDeletingCharacters(const string &word);
		//created word list will be inserted in the vector<string> suggestions.
        
	Sujan:
	void CreateWordList_byReplacingCharacters(const string &word);
		//created word list will be inserted in the vector<string> suggestions.


public:
	Bibek:
	void toLowerCase(string &word);
		//changes the word to lowercase so that we can compare the word with the dictionary.
        
	Bibek:
	void remove_Unnecessary_Characters(string &word);
		//removes characters like fullstops, question marks and exclamation marks at the end of a word.

	Bibek:
		bool contains(const string &word)
			//checks if the dictionary file contains the passed word or not.
	
	Bibek:   
		vector<string> get_suggestions(const string &word);
			//uses the createWordList fucnctions() to get suggestitons.

	Bishnu:
		void clear_suggestion_list();
		