class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack();
        int top = 0;
        int buttom = 0;
        for(int i = 0;i<tokens.length;i++){
            switch(tokens[i]){
                case "+":
                    stack.push(stack.pop() + stack.pop());
                    break;
                case "-":
                    stack.push(-stack.pop() + stack.pop());
                    break;
                case "*":
                    stack.push(stack.pop() * stack.pop());
                    break;
                case "/":
                    top = stack.pop();
                    buttom = stack.pop();
                    stack.push(buttom/top);
                    break;
                default:
                    stack.push(Integer.valueOf(tokens[i]));
                    break;
            }
        }
        return stack.pop();
    }
}
