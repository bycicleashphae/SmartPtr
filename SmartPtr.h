/*
Copyright(c) <2014> bycicle.ashphae
All rights reserved.

Redistribution and use in source and binary forms are permitted
provided that the above copyright notice and this paragraph are
duplicated in all such forms and that any documentation,
advertising materials, and other materials related to such
distribution and use acknowledge that the software was developed
by the <organization>.The name of the
<organization> may not be used to endorse or promote products derived
from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*/
#ifndef MY_SMART_PTR_TO_REPLACE_BOOST_PTR_20140030203902
#define MY_SMART_PTR_TO_REPLACE_BOOST_PTR_20140030203902

template <typename T>
class SmartPtr 
{
public:
    SmartPtr(T *p = 0);
    SmartPtr(const SmartPtr& src);
    SmartPtr& operator= (const SmartPtr& rhs) ;
    bool operator== (T*rhs) ;
    bool operator!= (T*rhs) ;
    bool operator== (const SmartPtr& rhs) ;
    bool operator!= (const SmartPtr& rhs) ;
    T*get() const;
    void reset();
    
    T *operator->() ;
    const T *operator->() const ;
    T &operator*() ;
    const T &operator*() const ;
    ~SmartPtr() ;
    
private:
    void decrUse() ;
    T *ptr;
    unsigned int *pUse;
};
#endif