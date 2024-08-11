using System;

public class Solution {
    public string solution(string s, string skip, int index) {
        char[] skips = skip.ToCharArray();
        char[] answer = new char[s.Length];
        for (int i = 0; i < s.Length; i++) {
            int count = index;
            int target = (int)s[i];        
            
            while (count != 0) {
                target++;
                target = target % 123; 
                if (target == 0) {
                    target = 97;        
                }
                
                if (Array.IndexOf(skips, (char)target) == -1) {
                    count--;
                }
            }
            
            
            answer[i] = (char)(target);
        }
        
        
        return string.Concat(answer);
    }
}