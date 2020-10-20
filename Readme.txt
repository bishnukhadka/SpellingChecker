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

		Prasis:
       	Dictionary(const string &filename)
            	//it will probalay be a good idea to read the dictionary file in the constructor file so, that we can pre load the dictionary unordered_map<string, string>

		Prasis:
		void inputFile(const string &filename);
			//input the text file and checks the corrction of the words used.

        
}

class SpellChecker{

private:
	vector<string> suggestion_list;

	 Bibek:
	void CreateWordList_bySwappingAdjCharacters(const string &word) 
		//created word list will be inserted in the vector<string> suggestions.

	Bibek:
	void CreateWordList_byDeletingCharacters(const string &word);
		//created word list will be inserted in the vector<string> suggestions.
        
	Bibek:
	void CreateWordList_byReplacingCharacters(const string &word);
		//created word list will be inserted in the vector<string> suggestions.

	Bibek:
	void CreateWordList_byInsertingCharacters(const string &word);
		//created word list will be inserted in the vector<string> suggestions.

public:
	Sujan:
	void toLowerCase(string& word);
		//changes the word to lowercase so that we can compare the word with the dictionary.
        
	Sujan:
	void remove_Unnecessary_Characters(string& word);
		//removes characters like fullstops, question marks and exclamation marks at the end of a word.

	Sujan:
		bool contains(const string &word)
			//checks if the dictionary file contains 
	
	Me:   
		vector<string> getTopSuggestions();
			//uses the createWordList fucnctions() to create top suggestitons.