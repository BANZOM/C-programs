/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by 
deleting some (can be none) of the characters without disturbing the relative positions of 
the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not). 

Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false

*/

// T.C O(N)

// here's the function in C
bool isSubsequence(char * s, char * t){
        int str1 = strlen(s);
        int i=0;
        int j=0;

        while(*(t+j) != '\0')
        {
            if(*(t+j) == *(s+i))
                i++;

            j++;
        }

        if(i==str1)
            return 1;
        return 0;
}
