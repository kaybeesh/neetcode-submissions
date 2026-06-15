class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        StringBuilder sb = new StringBuilder();

        for(char c : s.toCharArray()){

            if(Character.isLetterOrDigit(c)){
                sb.append(Character.toLowerCase(c));
            }
            // int a = c - 'a';
            // System.out.println(c);
            // System.out.println(a);

            // if(c - 'a' >= 0 && c - 'a' <= 26) sb.append(c);
            // else if(c - 'A' >= 0 && c - 'A' <= 26) sb.append(c);
            // else if(c - '0' >= 0 && c - '0' <= 9) sb.append(c);
            
        }

        return sb.toString().equals(sb.reverse().toString());
        


    }
}
