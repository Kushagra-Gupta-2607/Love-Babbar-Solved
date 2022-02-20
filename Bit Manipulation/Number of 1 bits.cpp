//https://practice.geeksforgeeks.org/problems/set-bits0143/1

class Solution {
  public:
    int setBits(int N) {
        return __builtin_popcount(N);
      
        /*
        Brian Kernighan's Algorithm:
        int count = 0;
        while(N){
          N&=(N-1);
          count++;
        }
        return count;
        */
      
        /*
        Lookup table: 8 bits of chunks
        int l_table[256];
        l_table[0] = 0;
        for(int i = 1; i<256; i++)  l_table[i] = i&1 + l_table[i/2];
        Now to find the answer for N, 
        ans = l_table[N & 0xff] + l_table[(N>>8) & 0xff] + 
              l_table[(N>>16) & 0xff] + l_table[(N>>24) & 0xff];
        */
    }
};
