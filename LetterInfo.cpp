
#include "LetterInfo.h"

LetterInfo::LetterInfo()
{
    fillLetters();
}

void LetterInfo::fillLetters()
{
    char letterChar = 65;
    int letterScore;

    for (int i = 0; i < 26; i++)
    {
        switch (letterChar)
        {
            case 'D': case 'E' :
                letterScore = 2; break;
            case 'B': case 'C': case 'M': case 'P':
                letterScore = 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                letterScore = 4; break;
            case 'K':
                letterScore = 5; break;
            case 'J': case 'X':
                letterScore = 8; break;
            case 'Q': case 'Z':
                letterScore = 10; break;
            default:
                letterScore = 1; break;
        }
        letters[i].letter = letterChar;
        letters[i].score = letterScore;
        letterChar++;
    }
}
