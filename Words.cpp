//
// Created by Lower School Music on 7/31/23.
//

#include "Words.h"

WordInfo::WordInfo() {

}

void WordInfo::loadDictionary()
{
    std::fstream fin("/Users/lowerschoolmusic/ScrabbleTesting/dictionary.txt");

    if (fin.is_open())
    {
        std::string wStr;

        while (std::getline(fin, wStr))
        {
            Word word




        }
    }
}

void WordInfo::calculateScores()
{

}

