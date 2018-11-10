package webserver.dto;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonIgnoreProperties(ignoreUnknown = true)
public class HeartrateDTO
{
    private int heartrate;

    @JsonCreator
    public HeartrateDTO(@JsonProperty(value = "hrm") String heartrate)
    {
        this.heartrate = Integer.parseInt(heartrate);
    }

    public int getHeartrate()
    {
        return heartrate;
    }
}
