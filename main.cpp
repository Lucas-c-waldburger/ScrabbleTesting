#include <iostream>
#include <algorithm>

#include "LetterInfo.h"



int main()
{
    LetterInfo letterInfo{};

    for (auto& l : letterInfo.letters)
        std::cout << l.letter << ": " << l.score << '\n';




    return 0;
}
