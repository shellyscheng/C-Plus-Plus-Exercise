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
  // - hold the pointer and initalize ref count to 1
  //
  // note: explicit keyword
  // note: default argument
  //

  explicit SmartPtr(T *p = 0)
  {
    ptr = p;
    cout = new int(1);
  }

  // copy constructor
  // - copy the data member and increment the reference cout
  // member initialziation syntax
  SmartPtr(const SmartPtr<T>& sp) :: ptr(sp.ptr), count(sp.count)
  {
      ++*count;
  }

  // destructor
  //
  // - delete the underlying object if this was the last owner
  ~SmartPtr()
  {
    if(--*count == 0) {
      delete count;
      delete ptr;
    }
  }

  
}