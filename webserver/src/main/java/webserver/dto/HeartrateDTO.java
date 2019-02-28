package webserver.dto;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Carries heartrate value and handles its parsing to integer.
 */
@JsonIgnoreProperties(ignoreUnknown = true)
public class HeartrateDTO
{
    private int heartrate;

    /**
     * Instantiates new Heartrate DTO and parses string value to int.
     *
     * @param heartrate heartrate value.
     */
    @JsonCreator
    public HeartrateDTO(@JsonProperty(value = "hrm") String heartrate)
    {
        this.heartrate = Integer.parseInt(heartrate);
    }

    /**
     * Getter for property 'heartrate'.
     *
     * @return current heartrate value stored in Heartrate DTO.
     */
    public int getHeartrate()
    {
        return heartrate;
    }
}
