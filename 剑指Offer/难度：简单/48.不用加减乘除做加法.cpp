不用加减乘除做加法
https://www.nowcoder.com/practice/59ac416b4b944300b617d4f7f111b215?tpId=13&&tqId=11201&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
方法：位运算
	    进位就是按位与运算并向左移一位，表示进位
        无进位就是按位异或运算
class Solution {
public:
    int Add(int num1, int num2)
    {    
        while(num2){
            int num = (unsigned int)(num1 & num2) << 1;    // 进位和
            num1 ^= num2;    // 无进位和
            num2 = num;
        }
        return num1;
    }
};