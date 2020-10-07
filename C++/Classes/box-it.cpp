class Box {
    private:
        long long l, b, h;
    public:
        Box();
        Box(long long, long long, long long);
        Box(Box &box);
        long long getLength();
        long long getBreadth();
        long long getHeight();
        long long CalculateVolume();   
        bool operator<(Box &box);
};

Box::Box() {
    l = b = h = 0;
}

Box::Box(long long l, long long b, long long h) {
    this->l = l;
    this->b = b;
    this->h = h;
}

Box::Box(Box &box) {
    l = box.l;
    b = box.b;
    h = box.h;
}

long long Box::getLength() {
    return l;
}

long long Box::getBreadth() {
    return b;
}

long long Box::getHeight() {
    return h;
}

long long Box::CalculateVolume() {
    return l*b*h;
}

bool Box::operator<(Box& box) {
    if(l < box.l)
        return true;
    else if(l == box.l && b < box.b)
        return true;
    else if(l == box.l && b == box.b && h < box.h)
        return true;
    return false;
}

ostream& operator<<(ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};
