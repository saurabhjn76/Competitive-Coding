import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static void nextMove(int posr, int posc, String[] board){
        // first check if the bot is on the dirty spot
        if(board[posr].charAt(posc) == 'd'){
            System.out.println("CLEAN");
            return;
        }

        // determine the position of the dirty cell
        int[] locationOfDirtyCell = locationOfDirtyCell(board);
        int rowIdx = locationOfDirtyCell[0];
        int colIdx = locationOfDirtyCell[1];

        // first check the row
        if(posr == rowIdx){
            // check the column
            if(colIdx < posc){
                System.out.println("LEFT");
            }else{
                System.out.println("RIGHT");
            }
        }else if(rowIdx < posr){
            System.out.println("UP");
        }else{
            System.out.println("DOWN");
        }
    }

    static int[] locationOfDirtyCell(String[] board){
        // loop through the rows
        for(int rowIdx = 0; rowIdx < board.length; rowIdx++){
            // loop through the characters
            for(int colIdx = 0; colIdx < board[rowIdx].length(); colIdx++){
                // determine if it is a dirty cell
                if(board[rowIdx].charAt(colIdx) == 'd'){
                    return new int[]{rowIdx, colIdx};
                }
            }
        }
        throw new IllegalArgumentException("Cannot find any dirty spots on the board!");
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int [] pos = new int[2];
        String board[] = new String[5];
        for(int i=0;i<2;i++) pos[i] = in.nextInt();
        for(int i=0;i<5;i++) board[i] = in.next();
        nextMove(pos[0], pos[1], board);
    }
}