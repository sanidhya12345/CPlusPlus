import java.math.*;
class Solution {
    static BigInteger factorial(int n)
    {
        BigInteger f
            = new BigInteger("1");
        for (int i = 2; i <= n; i++)
            f = f.multiply(BigInteger.valueOf(i));

        return f;
    }
    public int numTrees(int n) {
        //catalan number is used to find the unique BSTs
        
        BigInteger fact1=factorial(2*n);
        BigInteger fact2=factorial(n+1);
        BigInteger fact3=factorial(n);
        BigInteger ans=fact1.divide(fact2.multiply(fact3));
        return ans.intValue();
    }
}