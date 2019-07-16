/**
 * @file: main.cpp
 *
 * @brief:
 * 	CppND-Garbage-Collector:  
 * 	   Main function for the Garbage Collector.
 *
 * @ingroup:
 * 	CppND-Garbage-Collector
 *
 * @author:
 * 	Eva Liu - evaliu2046@gmail.com
 * 
 * @date:
 * 	2019/Jul/15
 *
 */
#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);

    return 0;
}
