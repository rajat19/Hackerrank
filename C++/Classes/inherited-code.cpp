class BadLengthException: public exception {
    int N;
    public:
    BadLengthException(int a){N = a;}
    int what(){return N;}
};
