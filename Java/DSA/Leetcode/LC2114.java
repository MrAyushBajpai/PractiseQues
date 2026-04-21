public class LC2114 {
    public int mostWordsFound(String[] sentences) {
        int mostWords = 0;
        for (String sentence : sentences) {
            int currWords = 1;
            for (int i = 0; i < sentence.length(); i++) {
                if (sentence.charAt(i) == ' ') {
                    currWords++;
                }
            }
            mostWords = Math.max(mostWords, currWords);
        }
        return mostWords;
    }

    public static void main(String[] args) {
        LC2114 obj = new LC2114();

        // Case 1: basic
        String[] s1 = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
        System.out.println(obj.mostWordsFound(s1) + " expected: 6");

        // Case 2: single sentence
        String[] s2 = {"hello world"};
        System.out.println(obj.mostWordsFound(s2) + " expected: 2");

        // Case 3: single word sentences
        String[] s3 = {"a", "b", "c"};
        System.out.println(obj.mostWordsFound(s3) + " expected: 1");

        // Case 4: mixed lengths
        String[] s4 = {"one two", "one two three four", "one"};
        System.out.println(obj.mostWordsFound(s4) + " expected: 4");

        // Case 5: empty string (edge)
        String[] s5 = {""};
        System.out.println(obj.mostWordsFound(s5) + " expected: 1"); // note: logic counts 1

        // Case 6: multiple spaces edge
        String[] s6 = {"a  b", "a b c"};
        System.out.println(obj.mostWordsFound(s6) + " expected: 3"); // double space counts extra
    }
}