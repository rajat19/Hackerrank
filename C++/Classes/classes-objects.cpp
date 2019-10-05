class Student{
    private:
        int score[5];
    public:
        void input(){
            for(int i=0;i<5;i++)
                cin>>score[i];
        }
        int calculateTotalScore(){
            int temp=0;
            for(int i=0;i<5;i++)
                temp+=score[i];
            return temp;
        }
};
