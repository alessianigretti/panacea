package webserver;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.scheduling.annotation.EnableScheduling;
import org.springframework.web.servlet.config.annotation.EnableWebMvc;

@EnableWebMvc
@EnableScheduling
@SpringBootApplication
public class Application
{
    public static void main(String[] args)
    {
        System.setProperty("java.net.preferIPv4Stack" , "true");
        SpringApplication.run(Application.class);
    }
}
