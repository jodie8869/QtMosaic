/**
 * \file AntipoleTree.h
 */

#ifndef ANTIPOLETREE
#define ANTIPOLETREE

class AntipoleNode
{
public:
  virtual ~AntipoleNode();

  virtual bool isLeaf();
};

class AntipoleLeaf: public AntipoleNode
{
public:
  virtual ~AntipoleLeaf();

  virtual bool isLeaf();
};

class AntipoleTree
{
public:
  AntipoleTree(void);
};

#endif
