class Solution {
    public boolean isPowerOfThree(int n) {
        
    
         if(n==1){
            return true;
        }
        
        boolean bool = check(n,1);
        return bool;
    }
    
    static boolean check(int n, int x){
        
        // base condition
        if(n < Math.pow(3,x)){
            return false;
        }
        
       
            
            if(n == Math.pow(3,x)){

                return true;
                
            }
        
         return check(n,x+1);
            
    }
}
