#ifndef NODE_H
#define NODE_H
#include <cstddef>
#include <iostream>

using namespace std;

class Node
{
    public:
        Node(double data, string tx): ip(data), left(NULL), right(NULL), text(tx), repeated(1){}
        Node() : ip(0), left(NULL), right(NULL), text(""), repeated(1){}
        Node(double data) : ip(data), left(NULL), right(NULL), text(""), repeated(1){}
        double ip;
        string text;
        int repeated;
        Node *left;
        Node *right;
};

#endif