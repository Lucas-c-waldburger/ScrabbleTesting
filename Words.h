
#ifndef SCRABBLETESTING_WORDS_H
#define SCRABBLETESTING_WORDS_H
#include "LetterInfo.h"
#include <fstream>
#include <vector>

const int DICT_SIZE = 178691;

struct Word
{
    std::string wordStr;
    int combinedScore;
};

typedef std::unordered_map<int, Word> DictMap;
class WordInfo
{
public:
    WordInfo();

    void loadDictionary();

    void calculateScores();

private:
    DictMap dictMap;

    std::vector<char> splitToChars(const std::string& wordStr);
};


#endif //SCRABBLETESTING_WORDS_H
