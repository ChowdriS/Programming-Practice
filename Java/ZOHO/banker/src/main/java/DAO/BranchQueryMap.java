package DAO;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.HashMap;
import java.util.Map;

import com.google.gson.JsonObject;

import model.Branch;
import utility.DbConnection;
import utility.Query_util;

public class BranchQueryMap {

    private DbConnection db = new DbConnection();

    public boolean insertBranch(Connection conn, Branch branch) throws SQLException 
    {
        Query_util query = Query_util.create()
                .insert("branch")
                .columns("branch_name", "branch_address", "branch_number", "bank_id",  "manager_id")
                .values(branch.getName(), branch.getAddress(), branch.getBranch_number(), branch.getBank_id(),
                         branch.getManager_id());

        return query.executeUpdate(conn, db) > 0;
    }

    public Branch selectBranches(Connection conn) throws SQLException 
    {
        Query_util query = Query_util.create()
                .select("*")
                .from("branch");

        try (ResultSet rs = query.executeQuery(conn, db)) {
            if (rs.next()) {
                Branch branch = new Branch();
                branch.setBranch_id(rs.getInt("branch_id"));
                branch.setName(rs.getString("branch_name"));
                branch.setAddress(rs.getString("branch_address"));
                branch.setBranch_number(rs.getString("branch_number"));
                branch.setBank_id(rs.getInt("bank_id"));
                branch.setManager_id(rs.getInt("manager_id"));
                return branch;
            }
        }
        return null;
    }
    
    public Branch selectBranchById(Connection conn ,int branchId) throws SQLException 
    {
    	Map<String,Object[]> conditions = new HashMap<>();
    	conditions.put("branch_id", new Object[] {"=",branchId});
    	
        Query_util query = Query_util.create()
                .select("*")
                .from("branch")
                .where(conditions);

        try (ResultSet rs = query.executeQuery(conn, db)) {
            if (rs.next()) {
                Branch branch = new Branch();
                branch.setBranch_id(rs.getInt("branch_id"));
                branch.setName(rs.getString("branch_name"));
                branch.setAddress(rs.getString("branch_address"));
                branch.setBranch_number(rs.getString("branch_number"));
                branch.setBank_id(rs.getInt("bank_id"));
                branch.setManager_id(rs.getInt("manager_id"));
                return branch;
            }
        }
        return null;
    }

    
    
    public int getBranchId(Connection conn, String branch_name) throws SQLException 
    {
    	Map<String,Object[]> conditions = new HashMap<>();
    	conditions.put("branch_name", new Object[] {"=",branch_name});
    	
        Query_util query = Query_util.create()
                .select("*")
                .from("branch")
                .where(conditions);

        try (ResultSet rs = query.executeQuery(conn, db)) {
            if (rs.next()) {
                
                return rs.getInt("branch_id");
            }
        }
        return -1;
    }

    public boolean updateBranch(Connection conn, Branch branch) throws SQLException 
    {
    	Map<String,Object[]> whereconditions = new HashMap<>();
    	Map<String,Object> setconditions = new HashMap<>();
    	setconditions.put("branch_name", branch.getName());
    	setconditions.put("branch_address", branch.getAddress());
    	setconditions.put("branch_number", branch.getBranch_number());
    	setconditions.put("bank_id", branch.getBank_id());
    	setconditions.put("manager_id", branch.getManager_id());
    	whereconditions.put("branch_id", new Object[]{"=",branch.getBranch_id()});
    	
    	
        Query_util query = Query_util.create()
                .update("branch")
                .set(setconditions)
                .where(whereconditions);

        return query.executeUpdate(conn, db) > 0;
    }

    public boolean deleteBranch(Connection conn, int branchId) throws SQLException 
    {
    	Map<String,Object[]> conditions = new HashMap<>();
    	conditions.put("branch_id", new Object[] {"=",branchId});
    	
        Query_util query = Query_util.create()
                .deleteFrom("branch")
                .where(conditions);

        return query.executeUpdate(conn, db) > 0;
    }
    
    public Branch extractBranchDetails(JsonObject jsonRequest,Branch branch) 
    {
    	branch.setName(jsonRequest.get("branch_name").getAsString());
        branch.setAddress(jsonRequest.get("branch_address").getAsString());
        branch.setBranch_number(jsonRequest.get("branch_number").getAsString());
        branch.setBank_id(jsonRequest.get("bank_id").getAsInt());
        branch.setManager_id(jsonRequest.get("manager_id").getAsInt());
        
		return branch;
    
    }
}
