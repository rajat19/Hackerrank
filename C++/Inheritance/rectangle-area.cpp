class Rectangle{
   protected:
        int height, width;
    public:
        void display(){
            cout<<height<<" "<<width<<endl;
        }
};
class RectangleArea: public Rectangle{
    public:
        void read_input(){
            cin>>height>>width;
        }
        void display(){
            cout<<height*width;
        }
};


