import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int gridDimensions;
        gridDimensions = in.nextInt();
        CellType[][] grid = new CellType[gridDimensions][gridDimensions];
        for(int row = 0; row < gridDimensions; row++) {
            String rowStr = in.next();
            for(int column = 0; column < gridDimensions; column++){
                grid[row][column] = CellType.of(rowStr.charAt(column));
            }
        }

        displayPathToPrincess(gridDimensions,grid);
    }

    private static void displayPathToPrincess(int n, CellType [][] grid){
        // Find the location of the bot and princess
        int[] princessLocation = getLocationOf(CellType.PRINCESS, grid);
        int[] botLocation = getLocationOf(CellType.BOT, grid);

        // calculate the row-Diff and column-Diff
        int rowDiff = botLocation[0] - princessLocation[0];
        int colDiff = princessLocation[1] - botLocation[1];

        // print the output
        printMovementByDifference(rowDiff, "UP", "DOWN");
        printMovementByDifference(colDiff, "RIGHT", "LEFT");
    }

    private static void printMovementByDifference(int diff, String positiveDirectionName, String negativeDirectionName){
        String verticalMovement = diff > 0 ? positiveDirectionName : negativeDirectionName;
        diff = diff < 0 ? diff * -1: diff;

        for(int i = 0; i < diff; i++) {
            System.out.println(verticalMovement);
        }
    }

    private static int[] getLocationOf(CellType cellTypeToSearchFor, CellType [][] grid){
        // loop through the rows
        for(int rowIdx = 0; rowIdx < grid.length; rowIdx++){
            // loop through the columns
            for(int columnIdx = 0; columnIdx < grid[rowIdx].length; columnIdx++){
                // check the type
                if(grid[rowIdx][columnIdx] == cellTypeToSearchFor){
                    return new int[]{rowIdx, columnIdx};
                }
            }
        }
        throw new IllegalArgumentException("No cell of type: " + cellTypeToSearchFor + " in the grid!");
    }
}

enum CellType {

    EMPTY,
    BOT,
    PRINCESS;

    static CellType of(char cellStrRep){
        switch (cellStrRep){
            case '-':
                return EMPTY;
            case 'm':
                return BOT;
            case 'p':
                return PRINCESS;
            default:
                throw new IllegalArgumentException("No CellType that is identified by " + cellStrRep);
        }
    }
}