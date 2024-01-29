import java.io.*;
import java.net.URI;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.net.http.HttpClient;

public class WeatherApi{
    public static void main(String arg[]) throws IOException , InterruptedException{
        
        var url="https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/erode?unitGroup=metric&key=XTQFZN5LJNK496Y3GU26QPB9A&contentType=json";
        var request=HttpRequest.newBuilder().GET().uri(URI.create(url)).build();
        var client=HttpClient.newBuilder().build();
        var response=client.send(request,HttpResponse.BodyHandlers.ofString());

        System.out.println(response.statusCode());
        System.out.println(response.body());

    }
}
