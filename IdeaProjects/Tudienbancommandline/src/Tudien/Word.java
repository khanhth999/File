package Tudien;

public class Word {
    private String word_target;
    private String word_explain;
    public Word(){}
    public Word(String word_target, String word_explain)
    {
        this.word_target = word_target;
        this.word_explain = word_explain;
    }
    public Word(String lineFile)
    {
        this.word_target=lineFile.substring(0, lineFile.indexOf("\t"));
        this.word_explain=lineFile.substring(lineFile.indexOf("\t")+1);
    }
    public void setword_target(String word_target){this.word_target=word_target;}
    public String getword_target(){return word_target;}

    public void setword_explain(String word_explain){this.word_explain = word_explain;}
    public String getword_explain(){return word_explain;}

    public void hienthi()
    {
        System.out.printf("%-20s%-20s\n",word_target, word_explain);
    }



}
