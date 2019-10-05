class D : public A, public B, public C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val=1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
             int flag=0;
             if(new_val%2==0){
                A::func(val);
                new_val/=2; 
                flag=1; 
             }
             if(new_val%3==0){
                B::func(val);
                new_val/=3;
                flag=1;
             }
			 if(new_val%5==0){
                C::func(val);
                new_val/=5;
                flag=1;
             }
             if(flag==1){
                 update_val(new_val);
             }
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};

