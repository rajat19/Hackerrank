class Person{
    protected:
        char name[100];
        int age;
    public:
        virtual void getdata(){}
        virtual void putdata(){}
};
class Professor : public Person{
    private:
        static int id;
        int publications;
    public:
        void getdata(){
            cin>>name>>age>>publications;
        }
        void putdata(){
            id++;
            cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
        }
};
int Professor::id=0;
class Student : public Person{
    private:
        static int id;
        int marks[6];
    public:
        void getdata(){
            cin>>name>>age;
            for(int i=0;i<6;i++)
                cin>>marks[i];
        }
        void putdata(){
            int sum=0;
            id++;
            for(int i=0;i<6;i++)
                sum+=marks[i];
            cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
        }
}; 
int Student::id=0;
