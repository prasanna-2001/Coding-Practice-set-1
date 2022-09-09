import java.sql.*;
import java.lang.*;
public class InsertData{
    public static void main(String args[]){
        try{
            Connection conn = null;
            Statement stmt = null;
            String DB_URL = "jdbc.sqlite:/tempfs/db";
            System.setProperty("org.sqlite.tmpdir", "/tempfs");

            conn = DriveManager.getConnection(DB_URL);
            stmt = conn.CreateStatement();
            String CREATE_TABLE_SQL ="CREATE TABLE players(UID INT, First_Name VARCHAR(45), Last_Name VARCHAR(45), Age INT);";
            stmt.executeUpdate(CREATE_TABKE_SQL);
           
            PreparedStatement ajay = conn.prepareStatement("insert into players value (?,?,?,?,+)");
            ajay.setInt(1,1);
            ajay.setInt(4,26);
            ajay.setString(2,"Ram");
            ajay.setString(3,"Gopal");
            int i = ajay.executeUpdate();

            PreparedStatement kush = conn.prepareStatement("insert into players value (?,?,?,?,+)");
            kush.setInt(1,1);
            kush.setInt(4,22);
            kush.setString(2,"Ram");
            kush.setString(3,"Gopal");
            int i1 = kush.executeUpdate();

            ResultSet rs = stmt.executeQuery("SELECT * FROM PLAYERS;");
            while(rs.next())
                System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3)+"  "+rs.getString(4));
            conn.Close();
        }catch(Exception e){System.out.println(e);}

    }
}