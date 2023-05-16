import javax.swing.*;

class protochess{
    public static void main(String Args[]){
        //Max int Value = 2147483647
        int n = Integer.parseInt(JOptionPane.showInputDialog("Give me a Number: "));;
        String bin = "";
        long start = System.nanoTime();


        while(n>0){
            bin+=Integer.toString(n%2);
            n/=2;
        }

        char[] reverser = bin.toCharArray();
        char temp;
        
        for(int i=0; i<bin.length();i++){
            for(int j=0; j<bin.length()-1-i;j++){
                temp = reverser[j+1];
                reverser[j+1] = reverser[j];
                reverser[j] = temp;
            }
        }
        
        bin = new String(reverser);

        JOptionPane.showMessageDialog(null, "Your value is: "+bin+"\n Time elapsed: "+(System.nanoTime()-start)+"ns.");
    }
}