/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE127_Buffer_Underread__malloc_wchar_t_loop_81.h
Label Definition File: CWE127_Buffer_Underread__malloc.label.xml
Template File: sources-sink-81.tmpl.h
*/
/*
 * @description
 * CWE: 127 Buffer Under-read
 * BadSource:  Set data pointer to before the allocated memory buffer
 * GoodSource: Set data pointer to the allocated memory buffer
 * Sinks: loop
 *    BadSink : Copy data to string using a loop
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE127_Buffer_Underread__malloc_wchar_t_loop_81
{

class CWE127_Buffer_Underread__malloc_wchar_t_loop_81_base
{
public:
    /* pure virtual function */
    virtual void action(wchar_t * data) const = 0;
};

#ifndef OMITBAD

class CWE127_Buffer_Underread__malloc_wchar_t_loop_81_bad : public CWE127_Buffer_Underread__malloc_wchar_t_loop_81_base
{
public:
    void action(wchar_t * data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE127_Buffer_Underread__malloc_wchar_t_loop_81_goodG2B : public CWE127_Buffer_Underread__malloc_wchar_t_loop_81_base
{
public:
    void action(wchar_t * data) const;
};

#endif /* OMITGOOD */

}
