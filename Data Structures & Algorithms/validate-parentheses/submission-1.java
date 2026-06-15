class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        for(char c : s.toCharArray()){
            if(c == '[' || c == '(' || c == '{'){
                st.push(c);
            }
            else if(c == ']' || c == ')' || c == '}'){
                char c2;
                if(!st.isEmpty()) c2 = st.peek();
                else return false;

                if(c2 == '[' && c != ']') return false;
                if(c2 == '{' && c != '}') return false;
                if(c2 == '(' && c != ')') return false;

                st.pop();

            }
        }

        return st.isEmpty() ? true : false;
    }
}
