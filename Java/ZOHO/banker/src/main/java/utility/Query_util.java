package utility;

import java.sql.Connection;
import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Map;

public class Query_util 
{

	    private StringBuilder query;
	    private Object[] params;

	    private Query_util() 
	    {
	        query = new StringBuilder();
	    }

	    public static Query_util create()
	    {
	        return new Query_util();
	    }

	    public Query_util select(String columns) 
	    {
	        query.append("SELECT ").append(columns).append(" ");
	        return this;
	    }

	    public Query_util from(String table) 
	    {
	        query.append("FROM ").append(table).append(" ");
	        return this;
	    }

	    public Query_util where(Map<String, Object[]> conditions) 
	    {
	        int index = 0;

	        for (Map.Entry<String, Object[]> entry : conditions.entrySet()) 
	        {
	            String column = entry.getKey();
	            Object[] condition = entry.getValue();
	            String operator = (String) condition[0];
	            Object value = condition[1];

	            if (index == 0) {
	                query.append("WHERE ").append(column).append(" ").append(operator).append(" ? ");
	            } else {
	                query.append("AND ").append(column).append(" ").append(operator).append(" ? ");
	            }

	            if (params != null) 
	            {
	                Object[] newParams = new Object[params.length + 1];
	                System.arraycopy(params, 0, newParams, 0, params.length);
	                newParams[params.length] = value;
	                this.params = newParams;
	            } else {
	                this.params = new Object[] { value };
	            }

	            index++;
	        }

	        return this;
	    }

	    public Query_util insert(String table) 
	    {
	        query.append("INSERT INTO ").append(table).append(" ");
	        return this;
	    }

	    public Query_util columns(String... columns) 
	    {
	        query.append("(").append(String.join(", ", columns)).append(") ");
	        return this;
	    }

	    public Query_util values(Object... values) 
	    {
	        query.append("VALUES (").append("?, ".repeat(values.length - 1)).append("?);");
//	        for(int i=0;i<values.length;i++)
//	        {
//	        	System.out.println(values[i]);
//	        }
	        this.params = values;
	        return this;
	    }

	    public Query_util update(String table) 
	    {
	        query.append("UPDATE ").append(table).append(" ");
	        return this;
	    }

	    public Query_util set(Map<String, Object> columns) 
	    {
	        int index = 0;
	        
	        for (Map.Entry<String, Object> entry : columns.entrySet()) 
	        {
	            String column = entry.getKey();
	            Object value = entry.getValue();

	            if (index == 0) {
	                query.append("SET ").append(column).append(" = ? ");
	            } else {
	                query.append(", ").append(column).append(" = ? ");
	            }

	            
	            if (params != null) 
	            {
	                Object[] newParams = new Object[params.length + 1];
	                System.arraycopy(params, 0, newParams, 0, params.length);
	                newParams[params.length] = value;
	                this.params = newParams;
	            } else {
	                this.params = new Object[] { value };
	            }

	            index++;
	        }

	        return this;
	    }

	    
	    public Query_util deleteFrom(String table) 
	    {
	        query.append("DELETE FROM ").append(table).append(" ");
	        return this;
	    }


	    public ResultSet executeQuery(Connection conn, DbConnection dbConn) throws SQLException 
	    {
	        PreparedStatement stmt = conn.prepareStatement(query.toString());
	        
	        if(params!=null)
	        {
	        	for (int i = 0; i < params.length; i++) 
	        	{
	        		if(params[i] instanceof Integer) 
	        		{
	        			System.out.println(params[i]);
	        			stmt.setInt(i+1, (int) params[i]);
	        		}
	        		else if(params[i] instanceof String)
	        		{
	        			stmt.setString(i+1,  (String) params[i]);
	        		}
	        		else if(params[i] instanceof Double)
	        		{
	        			stmt.setDouble(i+1,(Double) params[i]);
	        		}
	        		else if(params[i] instanceof Boolean)
	        		{
	        			stmt.setBoolean(i+1, (Boolean) params[i]);
	        		}
	        		else
	        		{
	        			stmt.setDate(i+1, (Date) params[i]);
	        		}
	        		
	        	}
	        	
	        }
	        	
	        
	        
	        return stmt.executeQuery();
	    }

	    public int executeUpdate(Connection conn, DbConnection dbConn) throws SQLException 
	    {
	    	
	        PreparedStatement stmt = conn.prepareStatement(query.toString());
	        
	        for (int i = 0; i < params.length; i++) 
	        {
	        	
		            if(params[i] instanceof Integer) 
		            {
		            	stmt.setInt(i+1, (int) params[i]);
		            }
		            else if(params[i] instanceof String)
		            {
		            	stmt.setString(i+1,  (String) params[i]);
		            	System.out.println(params[i]);
		            }
		            else if(params[i] instanceof Double)
		            {
		            	stmt.setDouble(i+1,(Double) params[i]);
		            }
		            else if(params[i] instanceof Boolean)
		            {
		            	stmt.setBoolean(i+1, (Boolean) params[i]);
		            }
		            else
		            {
		            	stmt.setDate(i+1, (Date) params[i]);
		            }
		            	
		        
	        }
	        System.out.println(stmt.executeUpdate());
	        return stmt.executeUpdate();
	    }
	

}
