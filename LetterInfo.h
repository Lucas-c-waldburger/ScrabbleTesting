
#ifndef SCRABBLETESTING_LETTERINFO_H
#define SCRABBLETESTING_LETTERINFO_H
#include <unordered_map>

struct Letter
{
    char letter;
    int score;
};

typedef std::unordered_map<char, Letter> LetterMap;
class LetterInfo
{
public:
    LetterInfo();
    LetterMap letterMap;

private:
    void fillLetters();
};


#endif //SCRABBLETESTING_LETTERINFO_H
