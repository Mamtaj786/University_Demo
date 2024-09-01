import java.util.*;
class call_by_value
{ 
   public static int sum(int m, int n) 
   { 
     int z= m+n; 
     return z; 
   } 
   public static void main(String[]args) 
   { 
      int x = 2 , y = 3; 
      int z = sum(x,y); 
      System.out.println("Sum = "+z); 
   } 
} 