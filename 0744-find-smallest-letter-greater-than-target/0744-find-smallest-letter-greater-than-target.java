class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int low=0;
        int high=letters.length-1;
        char ans=letters[0];
        while (low<=high) {
            int mid=(high+low)/2;
            if(letters[mid]>=(char)(target+1)){
                ans=letters[mid];
                high=mid-1;
            }
            else if(letters[mid]>(char)(target+1)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
}