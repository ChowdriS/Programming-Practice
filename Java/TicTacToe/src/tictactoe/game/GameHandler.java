package tictactoe.game;
import java.util.Scanner;

public class GameHandler 
{
	private Board board;
	private final Player player1,player2;
	private Player currentPlayer;
	private int row,col,n;
	Scanner x = new Scanner(System.in);
	
	public GameHandler()
	{
		
		player1 = new Player(1,'X');
		player2 = new Player(2,'O');
		currentPlayer = player1;
		row=-1;
		col=-1;
	}
	
	public void Start()
	{
		welcome();
		System.out.println("\n-----> Game Starts <-----\n");
		while(!board.isFull())
		{
			board.printBoard();
			
			System.out.println(currentPlayer.getName()+"'s turn >");
			System.out.print("Enter row(give space)Enter col positions(0 to 2) : ");
			row = x.nextInt();
			col = x.nextInt();
			
			
			if(board.isValidMove(row, col))
			{
				board.Move(row, col, currentPlayer.getSymbol());
				
				if(board.hasWinner(currentPlayer.getSymbol()))
				{
					board.printBoard();
					System.out.println("\n-----> "+currentPlayer.getName()+" has Won!!! <-----");
					System.exit(0);
				}
			}
			else
			{
				System.out.println("\nInvalid Move!! Try other positions!! ");
				continue;
			}
			switchPlayer();
			
		}
		
		System.out.println("\n-----> Game Over with a Draw! <-----");
		System.exit(0);
		
	}
	
	private void welcome()
	{
		System.out.print("Enter the Board size ( size > 0 ): ");
		n = Integer.valueOf(x.nextLine());
		board = new Board(n);
		System.out.println("\nReady To Play TicTacToe???");
		
		//initialize players
		System.out.print("Enter player1 name: ");
		String name = x.nextLine();
		player1.setName(name);
		System.out.print("Enter player2 name: ");
		name = x.nextLine();
		player2.setName(name);
		
	}
	
	
	private void switchPlayer()
	{
		currentPlayer = (currentPlayer == player1 ? player2 : player1);
	}
}
