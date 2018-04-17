//
//  Sequence.cpp
//  Homework2
//
//  Created by Audi Liu on 4/16/18.
//  Copyright © 2018 Audi Liu. All rights reserved.
//

#include "Sequence.h"

Sequence::Sequence(){
    m_size = 0;
}   // Create an empty sequence (i.e., one with no items)
bool Sequence::empty() const{
    return (m_size == 0);
}  // Return true if the sequence is empty, otherwise false.
int Sequence::size() const{
    return m_size;
}    // Return the number of items in the sequence.

bool Sequence::insert(int pos, const ItemType& value){
    if (m_size == 200 || m_size < 0 || pos < 0 || pos > m_size)
        return false;
    if (pos < m_size){
        for(int k = m_size; k > pos ;k--){
            sequence[k] = sequence[k-1];
        }
        sequence[pos] = value;
        m_size++;
        return true;
    }
    else {//pos == m_size)
        sequence[pos] = value;
        m_size++;
        return true;
    }
}
// Insert value into the sequence so that it becomes the item at
// position pos.  The original item at position pos and those that
// follow it end up at positions one higher than they were at before.
// Return true if 0 <= pos <= size() and the value could be
// inserted.  (It might not be, if the sequence has a fixed capacity,
// e.g., because it's implemented using a fixed-size array.)  Otherwise,
// leave the sequence unchanged and return false.  Notice that
// if pos is equal to size(), the value is inserted at the end.

int Sequence::insert(const ItemType& value){
    if (m_size == 200)
        return -1;
    for (int k = 0; k < m_size; k++){
        if (value < sequence[k] || value == sequence[k]){
            insert(k, value);
            m_size++;
            return k;
        }
    }
    sequence[m_size] = value;
    m_size++;
    return m_size-1;
    
}
// Let p be the smallest integer such that value <= the item at
// position p in the sequence; if no such item exists (i.e.,
// value > all items in the sequence), let p be size().  Insert
// value into the sequence so that it becomes the item at position
// p.  The original item at position p and those that follow it end
// up at positions one higher than before.  Return p if the value
// was actually inserted.  Return -1 if the value was not inserted
// (perhaps because the sequence has a fixed capacity and is full).

bool Sequence::erase(int pos){
    if (pos < 0 || pos > m_size || pos == m_size){
        return false;
    }

    else{
        for (int k = pos; k < m_size-1; k++){
            sequence[k] = sequence[k+1];
        }
        m_size--;
        return true;
    }
    
    
        
}
// If 0 <= pos < size(), remove the item at position pos from
// the sequence (so that all items that followed that item end up at
// positions one lower than they were at before), and return true.
// Otherwise, leave the sequence unchanged and return false.

int Sequence::remove(const ItemType& value){
    int count(0);
    for (int k = 0; k < m_size ;k++){
        if (sequence[k] == value){
            Sequence::erase(k);
            count++;
        }
    }
    return count;
    
}
// Erase all items from the sequence that == value.  Return the
// number of items removed (which will be 0 if no item == value).

bool Sequence::get(int pos, ItemType& value) const{
    if (pos < 0 || pos > m_size || pos == m_size){
        return false;
    }
    else{
        value = sequence[pos];
        return true;
    }
    
}
// If 0 <= pos < size(), copy into value the item at position pos
// in the sequence and return true.  Otherwise, leave value unchanged
// and return false.

bool Sequence::set(int pos, const ItemType& value){
    if (pos < 0 || pos > m_size || pos == m_size){
        return false;
    }
    else{
        sequence[pos] = value;
        return true;
    }
    
}
// If 0 <= pos < size(), replace the item at position pos in the
// sequence with value and return true.  Otherwise, leave the sequence
// unchanged and return false.

int Sequence::find(const ItemType& value) const{
    for (int k = 0; k < m_size; k++){
        if (sequence[k] == value){
            return k;
        }
    }
    return -1;
}
// Let p be the smallest integer such that value == the item at
// position p in the sequence; if no such item exists, let p be -1.
// Return p.

void Sequence::swap(Sequence& other){ //WTF how to implement a better swap
    //swaping the m_sizes
    int a = m_size;
    m_size = other.m_size;
    other.m_size = a;

    //making a copy of this -> sequence
    ItemType seq2[a];
    for (int k = 0; k < a; k++){
        seq2[k] = sequence[k];
    }

    //copying other's items into this -> sequence
    for (int k = 0; k < m_size; k++){
        sequence[k] = other.sequence[k];
    }

    //copying sequence copy's items into other's array
    for (int k = 0; k < other.m_size; k++){
        other.sequence[k] = seq2[k];
    }
//    ItemType* ptr = sequence;
//    sequence = other.sequence;
    
}
// Exchange the contents of this sequence with the other one.


