#ifndef __VISITOR_H__
#define __VISITOR_H__

#include <memory>

class Element;

class Visitor
{
public:
    virtual void order(std::shared_ptr<Element> element) = 0;
};

#endif // __VISITOR_H__
