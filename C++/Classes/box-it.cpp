class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;b=0;h=0;
        }
        Box(int a,int d,int c){
            l=a;b=d;h=c;
        }
        Box(const Box &a){
            l=a.l;
            b=a.b;
            h=a.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return (long long int)l*b*h;
        }
        bool operator<(const Box& a){
            if(l<a.l){
                return true;
            }
            if(l==a.l && b<a.b){
                return true;
            }
            if(l==a.l && b==a.b && h<a.h){
                return true;
            }
            else 
                return false;
        }
        friend ostream &operator<<( ostream &output, 
         const Box &D ) { 
         output << D.l << " " << D.b << " " << D.h;
         return output;            
      }
};


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


