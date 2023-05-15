#include "Container.h"

Container::Container(const unsigned& len, const unsigned& val) : value(val)
{
    if (len) {
        next = new Container(len - 1, val);
    }
}

Container& Container::getElement(const int& n)
{
    Container* ret = this;
    for (int u = 0; u != n; ++u)
        if (ret->next)
            ret = ret->next;
    return *ret;
}
const Container& Container::getCElement(const int& n) const
{
    const Container* ret = this;
    for (int u = 0; u != n; ++u)
        if (ret->next)
            ret = ret->next;
    return *ret;
}
