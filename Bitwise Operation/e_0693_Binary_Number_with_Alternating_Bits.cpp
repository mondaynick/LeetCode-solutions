/*
  輸入一數字，求其二進位表示是否為0、1交錯

  若一數字其二進位表示為0、1交錯，假設是n = 101010，做以下運算若結果為0則其二進位表示為0、1交錯
  n                   0  0  1  0  1  0  1  0
  n>>1                0  0  0  1  0  1  0  1
  n^(n>>1)            0  0  1  1  1  1  1  1
  (n^(n>>1))+1        0  1  0  0  0  0  0  0
  n & (n^(n>>1))+1    0  0  0  0  0  0  0  0
 */

class Solution {
public:
    bool hasAlternatingBits(unsigned int n) {
        n = n ^ (n >> 1);
        return (n & (n + 1)) == 0;
    }
};
