class Solution {
    public void reverseString(char[] s) {
        int l = 0;
        int r = s.length - 1;
        while (r > l) {
            char temp = s[l]; // Store the value of s[l] in temp
            s[l] = s[r]; // Assign the value of s[r] to s[l]
            s[r] = temp; // Assign the original value of s[l] to s[r]
            l++;
            r--;
        }
    }
}