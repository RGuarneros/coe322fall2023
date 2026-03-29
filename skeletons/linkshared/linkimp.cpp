#include <iostream>
using std::cout;


#include "linkheader.hpp"

/*
 * Compute the length of a list recursively
 * See below for an iterative solution
 */
int List::length() {
  int count = 0;
  if (head==nullptr)
    return 0;
  else
    return head->length();
};

int Node::length() {
  if (!has_next())
    return 1;
  else
    return 1+next->length();
};

/*
 * Iterative alternative
 * to recursive computation
 */
int List::length_iterative() {
  int count = 0;
  if (head!=nullptr) {
    auto current_node = head;
    while (current_node->has_next()) {
      current_node = current_node->nextnode(); count += 1;
    }
  }
  return count;
};

/*
 * Auxiliary functions
 */
void Node::print() {
  cout << datavalue << ":" << datacount;
  if (has_next()) {
    cout << ", "; next->print();
  }
};

void List::print() {
  cout << "List:";
  if (head!=nullptr)
    cout << " => "; head->print();
  cout << '\n';
};



