//
//  ScoreList.hpp
//  Homework2
//
//  Created by Audi Liu on 4/16/18.
//  Copyright © 2018 Audi Liu. All rights reserved.
//

#ifndef ScoreList_hpp
#define ScoreList_hpp

#include "Sequence.h"
#include <limits>


const unsigned long NO_SCORE = std::numeric_limits<unsigned long>::max();

class ScoreList
{

public:
    ScoreList();       // Create an empty score list.
    ScoreList(int nscores);
    //WTF If the compiler-generated destructor, copy constructor, and assignment operator for ScoreList don't do the right thing, declare and implement them. I don't think I need anything implemented.

    Sequence& listgetter(); //WTF: Is adding a new member function in ScoreList allowed for testing purposes?
    bool add(unsigned long score);
    // If the score is valid (a value from 0 to 100) and the score list
    // has room for it, add it to the score list and return true.
    // Otherwise, leave the score list unchanged and return false.
    
    bool remove(unsigned long score);
    // Remove one instance of the specified score from the score list.
    // Return true if a score was removed; otherwise false.
    
    int size() const;  // Return the number of scores in the list.
    
    unsigned long minimum() const;
    // Return the lowest score in the score list.  If the list is
    // empty, return NO_SCORE.
    
    unsigned long maximum() const;
    // Return the highest score in the score list.  If the list is
    // empty, return NO_SCORE.
    
private:
    Sequence list; //
    int n_scores;
    
};

#endif /* ScoreList_hpp */
