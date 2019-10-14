import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    private static void next_move(int posr, int posc, String[] board){
        // if dirty --> clean
        if(board[posr].charAt(posc) == 'd'){
            System.out.println("CLEAN");
            return;
        }
        // determine the location of the nearest dirty tile
        determineClosestDirtyTile(posr, posc, board);
    }

    private static void determineClosestDirtyTile(int botRow, int botCol, String[] board){
        // get the current row
        String row = board[botRow];

        // check if a dirt spot exists in the row
        if(row.contains("d")){
            // determine the closest char from left to right
            for(int colIdx = 0; colIdx < row.length(); colIdx++){
                // get the char in the cell
                char cellChar = row.charAt(colIdx);
                if(cellChar == 'd'){
                    if(colIdx < botCol){
                        System.out.println("LEFT");
                        return;
                    }else{
                        System.out.println("RIGHT");
                        return;
                    }
                }
            }
        }
        // if no dirt cell found in the row go down
        System.out.println("DOWN");
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int [] pos = new int[2];
        String board[] = new String[5];
        for(int i=0;i<2;i++) pos[i] = in.nextInt();
        for(int i=0;i<5;i++) board[i] = in.next();
        next_move(pos[0], pos[1], board);
    }
}