#include "Container.h"

Container::Container(const int& len, const int& val) : _length(len), _value(val)
{
    if (len) {
        next = new Container(len - 1, val);
    }
}

Container* Container::getElement(const int& n)
{
    if (n < 0 || n >= _length)
        return nullptr;
    Container* ret = this;
    for (int u = 0; u != n; ++u)
        if (ret->next)
            ret = ret->next;
    return ret;
}
const Container* Container::getCElement(const int& n) const
{
    if (n < 0 || n >= _length)
        return nullptr;
    const Container* ret = this;
    for (int u = 0; u != n; ++u)
        if (ret->next)
            ret = ret->next;
    return ret;
}
