//blueprint for node
#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{
  private:
    Node* left;
    Node* right;
    Node* parent;
    int value;
    int color; //1=red, 0=black
    
  public:
    //constructor
    Node(int newValue);
    ~Node();
    
    //getters
    Node* getLeft();
    Node* getRight();
    Node* getParent();
    int getValue();
    int getColor();
    
    //setters
    void setLeft(Node* newLeft);
    void setRight(Node* newRight);
    void setParent(Node* newParent);
    void setValue(int newValue);
    void setColor(int newColor);
    void setBlack();
    void setRed();
};

#endif