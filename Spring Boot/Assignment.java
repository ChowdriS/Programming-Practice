import java.io.IOException;
import java.net.URI;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.net.http.HttpClient;

public class Assignment {
    public static void main(String[] args) throws IOException, InterruptedException {
        var url = "https://api.thecatapi.com/v1/images/search";
        var apiKey = "live_UyTAuIJLMcBnD8ETNuEavGD6VH9EemrOSQJkXPpeEZ88QFmaKevBbKsGLM47Zhy4";
        var request = HttpRequest.newBuilder()
                .GET()
                .uri(URI.create(url))
                .header("x-api-key", apiKey)
                .build();

        var client = HttpClient.newBuilder().build();
        var response = client.send(request, HttpResponse.BodyHandlers.ofString());

        System.out.println(response.statusCode());
        System.out.println(response.body());
    }
}
