给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素
B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。
（注意：规定B[0] = A[1] * A[2] * ... * A[n-1]，B[n-1] = A[0] * A[1] * ... * A[n-2];）


代码实现：
class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        if(A.size() == 0)
            return vector<int> ();
        vector<int> B;
        B.push_back(1);
        for(int i = 0; i < A.size() - 1; ++i){
            B.push_back(B.back() * A[i]); 
        }
        int num = 1;
        // B 乘 right
        for(int i = A.size() - 1; i >= 0; --i){
            B[i] *= num;
            num *= A[i];
        }
        return B;
    }
};
	