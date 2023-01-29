// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Input: s = "egg", t = "add"
// Output: true


// This is a C function:

bool isIsomorphic(char * s, char * t){
    int mapS[256]= {0};
    int mapT[256]= {0};

    int i=0;

    while(*(s+i) != '\0')
    {
        if( mapS[s[i]] != mapT[t[i]])
            return 0;
        mapT[t[i]] = mapS[s[i]] = i+1;
        i++;
    }

    return 1;

}
