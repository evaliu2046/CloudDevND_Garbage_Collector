/**
 * @file: gc_details.h
 *
 * @brief:
 * 	CppND-Garbage-Collector: This class defines an element that is stored in the garbage collection information list.
 *     
 * @ingroup:
 * 	CppND-Garbage-Collector
 *
 * @author:
 * 	Eva Liu - evaliu2046@gmail.com
 * 
 * @date:
 * 	2019/Jul/14
 *
 */
template <class T>
class PtrDetails
{
  public:
    unsigned refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    // isArray is true if memPtr points to an allocated array. It is false otherwise.
    bool isArray const {return memPtr == nullptr};
    
    // size of array
    unsigned arraySize;
    PtrDetails (T *cur_ptr = 0): memPtr(cur_ptr){}
};

/**
 * @function:
 *  template <class T>
 *  bool operator==(const PtrDetails<T> &ob1, const PtrDetails<T> &ob2)
 *  Overloading operator== allows two class objects to be compared.
*   This is needed by the STL list class.
 *
 * @param: const PtrDetails<T> &ob1, const PtrDetails<T> &ob2
 * @return: true/false
 */
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // TODO: Implement operator==
    if ((ob1 == nullptr) && (ob2 == nullptr))
        return true;
    else 
        return false;
}
