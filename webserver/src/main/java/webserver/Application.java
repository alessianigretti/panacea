package webserver;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.scheduling.annotation.EnableScheduling;
import org.springframework.web.servlet.config.annotation.EnableWebMvc;

/**
 * Launches application.
 */
@EnableWebMvc
@EnableScheduling
@SpringBootApplication
public class Application
{
    /**
     * The entry point of application.
     *
     * @param args the input arguments
     */
    public static void main(String[] args)
    {
        System.setProperty("java.net.preferIPv4Stack" , "true");
        SpringApplication.run(Application.class);
    }
}
