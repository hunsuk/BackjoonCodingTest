public class Solution {
    public string[] solution(string[] strings, int n) {
        string[] answer = new string[] {};
        ArrSort(strings, n);
        
        return strings;
    } 
    
    public int SortByString(string a, string b, int n) {
        char first = a[n];
        char second = b[n];
        return  first - second;
    }
    
    public void ArrSort(string[] strings, int n) {
        bool change = true;
        
        while (change) {
            change = false;
            for (int i = 0; i < strings.Length - 1; i++) {
                int check = SortByString(strings[i] , strings[i + 1],n);
                if (check == 0) {
                    if (strings[i].CompareTo(strings[i + 1]) == 1) {
                        string temp = strings[i];
                        strings[i] = strings[i + 1];
                        strings[i + 1] = temp;
                        change = true;
                    }    
                } else if (check > 0){
                        string temp = strings[i];
                        strings[i] = strings[i + 1];
                        strings[i + 1] = temp;
                        change = true;
                } 
            }        
        }
    }
    
}