//
//  ScoreList.cpp
//  Homework2
//
//  Created by Audi Liu on 4/16/18.
//  Copyright © 2018 Audi Liu. All rights reserved.
//

#include "ScoreList.h"
#include "Sequence.h"

ScoreList :: ScoreList(){
    n_scores = 0;
}
ScoreList :: ScoreList(int nscores){
    n_scores = nscores;
}
int ScoreList:: size() const {
    return n_scores;
}

Sequence& ScoreList:: listgetter(){
    return list;
    
}
bool ScoreList :: add(unsigned long score){
    if (score > 100)
        return false;
    else{
        list.insert(n_scores, score); // can't just access the private variables, so you have to use the public functions
        n_scores++;
        return true;
    }
    
    // If the score is valid (a value from 0 to 100) and the score list
    // has room for it, add it to the score list and return true.
    // Otherwise, leave the score list unchanged and return false.
}

bool ScoreList::remove(unsigned long score){
    if (score > 100)
        return false;
    
    else{
        int pos = list.find(score);
        if (pos == -1)
            return false;
        
        else{
        list.erase(pos);
        return true;
            }
    }
    
// Remove one instance of the specified score from the score list.
// Return true if a score was removed; otherwise false.

}

unsigned long ScoreList::minimum() const{ 
    if (list.size() == 0)
        return NO_SCORE;
    else
    {
        if (list.size() == 0)
            return NO_SCORE;
        else
        {
            unsigned long min;
            list.get(0, min);
            
            for (int k = 1; k < list.size(); k++){
                unsigned long temp;
                list.get(k, temp);
                if (temp < min)
                    min = temp;
            }
            
            return min;
            
        }
//        unsigned long array[list.size()];
//
//        for (int k = 0; k < list.size(); k++){
//            list.get(k, array[k]);
//        }
//        unsigned long min = array[0];
//
//        for (int n = 1; n < list.size() ;n++){
//            if (array[n] < min)
//                min = array[n];
//        }
//        return min;

    }
    }
// Return the lowest score in the score list.  If the list is
// empty, return NO_SCORE.

unsigned long ScoreList::maximum() const{
    if (list.size() == 0)
        return NO_SCORE;
    else
    {
        unsigned long max;
        list.get(0, max);
        
        for (int k = 1; k < list.size(); k++){
            unsigned long temp;
            list.get(k, temp);
            if (temp > max)
                max = temp;
        }
        
        return max;
        
    }


// Return the highest score in the score list.  If the list is
// empty, return NO_SCORE.
}
