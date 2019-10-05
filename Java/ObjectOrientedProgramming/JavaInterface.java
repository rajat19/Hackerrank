//Write your code here

class MyCalculator implements AdvancedArithmetic{
  
 public int divisor_sum(int n){
     
     int num=0,sum=0;
   
   if(n==1)
     return 1;
   
   for(int i=1;i<Math.sqrt(n);i++){
     num=n;
     if(num%i==0){
       sum+=((num/i)+i);
       
     }
   }
   
   return sum;
   }
  
}