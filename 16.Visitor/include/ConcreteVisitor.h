#ifndef __CONCRETE_VISITOR_H__
#define __CONCRETE_VISITOR_H__

#include "Visitor.h"

class ConcreteVisitor : public Visitor
{
public:
    ConcreteVisitor();

    virtual void order(std::shared_ptr<Element> element) override;

    const int getTotal() const;

private:
    int m_total;
    int m_number;
};

#endif // __CONCRETE_VISITOR_H__
