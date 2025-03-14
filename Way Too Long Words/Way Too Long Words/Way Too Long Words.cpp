#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool CheckTheNumberOfCharacters(string word)
{
	return word.length() > 10;
}
string ShortenLongWords(string word)
{
	string NewWord = "";
	if (CheckTheNumberOfCharacters(word))
	{
		NewWord += word[0];
		NewWord += to_string(word.length() - 2);
		NewWord += word[word.length() - 1];
		return NewWord;
	}
	else
	{
		return word;
	}
}
int main()
{
	short n;
	cin >> n;
	vector<string>Words;
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		Words.push_back(word);
	}
	for (int i = 0; i < n; i++)
	{
		cout << ShortenLongWords(Words[i]) << "\n";
	}
}