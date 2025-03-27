package utility;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

import javax.servlet.ServletException;

public class DbConnection {
	
	
    
	
	public static Connection connect() throws SQLException, ServletException {
		try {
			
			Class.forName("org.postgresql.Driver");
		} catch (ClassNotFoundException e) {
			throw new ServletException("PSQL JDBC Driver not found", e);
		}
		String url = "jdbc:mysql://localhost:3306/banker";
        String user = "root"; 
        String password = "chow3sql"; 
        System.out.println("Db Connected");
        return DriverManager.getConnection(url, user, password);
    }
	
}
