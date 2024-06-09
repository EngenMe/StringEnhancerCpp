#include <iostream>

#include "clsString.h";

int main()
{
	clsString cls_string;

	cls_string.string_text = "Hi, I am a string!";
	std::cout << cls_string.string_text << std::endl;

	std::cout << "Count words = " << cls_string.CountWords() << std::endl;

	std::cout << "String Length = " << cls_string.Length() << std::endl;

	cls_string.UpperFirstLetterOfEachWord();
	std::cout << "String First Letters Uppered: " << cls_string.string_text << std::endl;
	cls_string.LowerFirstLetterOfEachWord();
	std::cout << "String First Letters Lowered: " << cls_string.string_text << std::endl;

	cls_string.UpperAllString();
	std::cout << "All String Uppered: " << cls_string.string_text << std::endl;
	cls_string.LowerAllString();
	std::cout << "All String Lowered: " << cls_string.string_text << std::endl;

	cls_string.InvertAllLetterCase();
	std::cout << "All Letter Case Has Been Inverted: " << cls_string.string_text << std::endl;

	std::cout << "Count Upper Letters: " << cls_string.CountUpperLetters() << std::endl;
	std::cout << "Count Lower Letters: " << cls_string.CountLowerLetters() << std::endl;
	std::cout << "Count All Letters: " << cls_string.CountAllLetters() << std::endl;

	char letter_to_be_counted = 'i';
	std::cout << "Count Specific Letter '" << letter_to_be_counted << "' (Must be Match Case) = " <<
		cls_string.CountSpecificLetter(letter_to_be_counted) << std::endl;
	std::cout << "Count Specific Letter '" << letter_to_be_counted << "' (Whatever Case) = " <<
		cls_string.CountSpecificLetter(letter_to_be_counted, false) << std::endl;

	std::cout << "Count Vowels = " << cls_string.CountVowels() << std::endl;

	std::vector <std::string> v_string = cls_string.Split();
	std::cout << "Split String: " << std::endl;
	for (short i = 0; i < v_string.size(); i++)
	{
		std::cout << "Vector [" << i << "] = " << v_string[i] << std::endl;
	}

	cls_string.string_text = "                   Hi, I am a string!         ";
	std::cout << cls_string.string_text << "..." << std::endl;
	cls_string.TrimRight();
	std::cout << "String Trimmed to the Right: " << cls_string.string_text << "..." << std::endl;
	cls_string.TrimLeft();
	std::cout << "String Trimmed to the Left: " << cls_string.string_text << "..." << std::endl;

	cls_string.string_text = "                   Hi, I am a string!         ";
	std::cout << cls_string.string_text << "..." << std::endl;
	cls_string.Trim();
	std::cout << "String Trimmed both sides: " << cls_string.string_text << "..." << std::endl;

	std::cout << "String Joined: " << cls_string.JoinString(v_string) << std::endl;
	
	cls_string.ReverseWordsInString();
	std::cout << "Reverse Words: " << cls_string.string_text << std::endl;

	cls_string.string_text = "Hi, I'm a string!";
	cls_string.ReplaceWord("StRing!", "happy string :)", false);
	std::cout << "String After Word Replaced: " << cls_string.string_text << std::endl;

	cls_string.RemovePunctuations();
	std::cout << "String After Ponctuations Removed: " << cls_string.string_text << std::endl;

	return 0;
}