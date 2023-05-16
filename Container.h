class Container
{
public:
    Container(const int& len, const int& val);
    Container(const int& len) : Container(len, 0) {}

    int& value() { return _value; }
    const int& cvalue() const { return _value; }
    const int& length() const { return _length; }

    int& getValueAt(const int& n) { return getElement(n)->value(); }
    const int& getCValueAt(const int& n) const { return getCElement(n)->cvalue(); }

private:
    Container* getElement(const int&);
    const Container* getCElement(const int&) const;

    int _value;
    int _length;
    Container* next;
};

