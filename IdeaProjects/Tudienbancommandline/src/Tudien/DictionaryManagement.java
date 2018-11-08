package Tudien;

import java.io.*;
import java.util.*;

public class DictionaryManagement extends Dictionary{
    Scanner sc = new Scanner(System.in);
    private static final String fileSTRING = "dictionaries.txt";

    public void insertFromCommandline()
    {
        System.out.println("So Tu Can Them: ");
        int n = sc.nextInt();
        boolean check = false;
        for(int i=0;i<n;i++)
        {
            System.out.println("Nhap Tu");
            String Eng = sc.nextLine();
            for (int j=0;j<words.size();j++)
            {
                if(words.get(j).getword_target().equals(Eng))
                {
                    System.out.println("Tu : " + Eng +" da ton tai. Moi ban nhap lai ...");
                    check = true;
                    i--;
                }
                if(!check)
                {
                    String Vn = sc.nextLine();
                    Word w1 = new Word(Eng, Vn);
                    words.add(w1);
                }
            }

        }
    }


    public void insertFromFile()// nhap du lieu tu dien tu tep dictionaries.txt
    {
        try {
            File file = new File(fileSTRING);
            BufferedReader in = new BufferedReader(new InputStreamReader(new FileInputStream(file), "UTF-8"));
            String line;
            while((line = in.readLine())!= null)
            {
                Word w2 = new Word(line);
                words.add(w2);
            }


        }catch (Exception e)
        {

        }
    }


}
