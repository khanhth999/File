import java.util.*;
import java.io.*;

public class DictionaryManagement extends Dictionary {
    Scanner sc = new Scanner(System.in);
    private static final String fileIN = "E:/dictionaries.txt";
    
    // nhap du lieu bang tay
    public void insertFromCommandline(){
    	System.out.println("Nhap so tu can them");
    	int n = sc.nextInt();
    	boolean check = false;
        for(int i = 0; i < n; i++){
            String ES = sc.next();
            for(int j = 0; j < word.size(); j++) {
            	if(word.get(j).getWord_target().equals(ES)) {
            		System.out.println("Tu can them: " + ES +" da co san. Moi ban nhap lai ...");
            		check = true;
            		i--;
            		break;
            	}
            }
            if(!check) {
            	String VN = sc.nextLine();
                Word word1 = new Word(ES, VN);
                word.add(word1);
            }
        }
    }
    // nhap du lieu tu dien tu tep dictionaries.txt
    // phuong thuc doc tu file
    public void insertFromFile(){
    	try {
            File file = new File(fileIN);
            BufferedReader in = new BufferedReader(new InputStreamReader(new FileInputStream(file), "UTF-8"));
            String line;
            /* Đọc từng dòng (line) dữ liệu.
             Nếu đọc được null nghĩa là kết thúc */
            while ((line = in.readLine()) != null){
                Word w = new Word(line);
                word.add(w);
            }
            in.close();
        } 
        catch (Exception e){
        }
    }
    
    // tra cuu tu dien bang dong lenh
    public void dictionaryLookup(){
    	System.out.println("Nhap tu can tim kiem:");
        String eng = sc.next();
        int dem = 0;
        for(int i = 0; i < word.size(); ){
            if(eng.equals(word.get(i).getWord_target())){
            	System.out.print(dem + 1 + "\t");
    			word.get(i).displayWord();
    			dem++;
            }
            break;
        }
        if(dem == 0) {
        	System.out.println("Khong co ket qua can tim.");
        }
    }
    // chinh sua tu dien
    public void editWord() {
    	System.out.println("Nhap tu muon sua:");
    	String editW = sc.nextLine();
    	for(int i = 0; i < word.size(); i++) {
    		if(editW.equals(word.get(i).getWord_target())) {
    			System.out.println("Tim thay tu can sua:");
    			System.out.println("Nhap tu thay the:");
    			String eng = sc.next();
    			String vn = sc.nextLine();
    			Word w = new Word(eng, vn);
    			word.set(i, w);
    			return;
    		}
    	}
    	System.out.println("Khong tim thay tu: " + editW);
    }
    
    // xoa tu
    public void deleteWord() {
    	System.out.println("Nhap tu muon xoa: ");
    	String deleteW = sc.nextLine();
    	for(int i = 0; i < word.size(); i++) {
    		if(deleteW.equals(word.get(i).getWord_target())) {
    			System.out.println("Da tim thay tu can xoa");
    			System.out.println("Ban co muon xoa tu " + deleteW + " hay khong?\nAnswer: YES / NO");
    			String answer = sc.next();
    			if(answer.equals("YES")) {
    				word.remove(i);
    			}
    			else if(answer.equals("NO")) {
    				System.out.println("Ket thuc xoa.");
    			}
    			return;
    		}
    	}
    	System.out.println("Khong tim thay tu can xoa");
    }
    
    // xuat du lieu tu dien hien tai ra File
    public void dictionaryExportToFile() {
    	BufferedWriter file = null;
        try {
        	file = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(fileIN), "UTF-8"));
    	    for(int i = 0; i < word.size(); i++) {
    		     file.write(word.get(i).getWord_target() + "\t" + word.get(i).getWord_explain());
    		     file.newLine();
    	    }
    	    file.close();
        }
        catch(IOException e) {
    	    e.printStackTrace();
        } 	
    }
}