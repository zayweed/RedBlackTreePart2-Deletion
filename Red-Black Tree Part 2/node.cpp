//node functions
#include <iostream>

#include "node.h"

using namespace std;

//constructor
Node::Node(int newValue) {
  left = NULL;
  right = NULL;
  parent = NULL;
  color = 1; //red
  value = newValue;
}

//destructor
Node::~Node() {
}
  
//getters
Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}

Node* Node::getParent() {
  return parent;
}

int Node::getValue() {
  return value;
}

int Node::getColor() {
  return color;
}
  
//setters
void Node::setLeft(Node* newLeft) {
  left = newLeft;
}

void Node::setRight(Node* newRight) {
  right = newRight;
}

void Node::setParent(Node* newParent) {
  parent = newParent;
}

void Node::setValue(int newValue) {
  value = newValue;
}

void Node::setColor(int newColor) {
  color = newColor;
}
void Node::setRed() {
  color = 1; //red
}
void Node::setBlack() {
  color = 0; //black
}