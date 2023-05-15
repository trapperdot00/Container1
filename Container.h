class Container
{
public:
    Container(const unsigned& len, const unsigned& val);
    Container(const unsigned& len) : Container(len, 0) {}
    Container() : Container(0, 0) {}

    int& getValue() { return value; }
    const int& getCValue() const { return value; }

    Container& getElement(const int&);
    const Container& getCElement(const int&) const;

    int& getValueAt(const int& n) { return getElement(n).getValue(); }
    const int& getCValueAt(const int& n) const { return getCElement(n).getCValue(); }

private:

    int value;
    Container* next;
};
