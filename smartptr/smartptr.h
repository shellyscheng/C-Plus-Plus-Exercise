#ifndef __SMARTPTR_H__
#define __SMARTPTR_H__

template <class T>
class SmartPtr {

private:
  T *ptr; // the underlying pointer
  int *count; // the reference count

public:
  // constructor
  // - p is assumed to point to an object created by "new T(...)"
  // - we hold the pointer and initalize ref count to 1
}