package webserver.controller;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.*;
import webserver.dto.HeartrateDTO;

/**
 * Handles data posting and fetching.
 */
@RestController
public class Controller
{
    private int heartrate;
    private final Logger logger = LoggerFactory.getLogger(getClass());

    /**
     * Posts heartrate value.
     *
     * @param heartrateDTO heartrate to post.
     * @return heartrate posted.
     */
    @RequestMapping(path = "/heartrate/", method = RequestMethod.POST)
    public int postHeartrate(@RequestBody HeartrateDTO heartrateDTO)
    {
        heartrate = heartrateDTO.getHeartrate();
        logger.info("Heartrate: {}", heartrate);
        return heartrate;
    }

    /**
     * Gets current heartrate value in server.
     *
     * @return heartrate fetched.
     */
    @RequestMapping(path = "/heartrate/GET", method = RequestMethod.GET)
    public int getHeartrate()
    {
        return heartrate;
    }

    /**
     * Gets slash.
     *
     * @return the slash
     */
    @RequestMapping(path = "/", method = RequestMethod.GET)
    public int getSlash()
    {
        return 1;
    }

    /**
     * Gets fav icon.
     *
     * @return the fav icon
     */
    @RequestMapping(path = "/favicon.ico", method = RequestMethod.GET)
    public int getFavIcon()
    {
        return 1;
    }
}