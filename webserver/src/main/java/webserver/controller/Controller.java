package webserver.controller;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.*;
import webserver.dto.HeartrateDTO;

@RestController
public class Controller
{
    private int heartrate;
    private final Logger logger = LoggerFactory.getLogger(getClass());

    @RequestMapping(path = "/heartrate/", method = RequestMethod.POST)
    public int postHeartrate(@RequestBody HeartrateDTO heartrateDTO)
    {
        heartrate = heartrateDTO.getHeartrate();
        logger.info("Heartrate: {}", heartrate);
        return heartrate;
    }

    @RequestMapping(path = "/heartrate/GET", method = RequestMethod.GET)
    public int getHeartrate()
    {
        return heartrate;
    }





}