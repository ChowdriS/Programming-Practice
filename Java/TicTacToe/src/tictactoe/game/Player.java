package tictactoe.game;

public class Player 
{
	private final int id;
	private String name;
	private final char Symbol;
	
	public Player(int id,char Symbol)
	{
		this.name = "";
		this.id = id;
		this.Symbol = Symbol;
	}
	public void setName(String name)
	{
		this.name = name;
	}
	
	public String getName()
	{
		return name;
	}
	
	public char getSymbol()
	{
		return Symbol;
	}
}
