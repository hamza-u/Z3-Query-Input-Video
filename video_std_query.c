#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <z3_v4l2.h>

int main () {
    z3_v4l2_capture_status_t   vid_detect_status;
    z3_v4l2_capture_status_t   expected_vid;
    int                         startX;
    int                         startY;
    int                         iter = 1;
    int                         ret=0;

    ret = z3_v4l2_capture_autodetect( 0,
                                      "HD-SDI",
                                      &vid_detect_status,
                                      &startX,
                                      &startY,
                                      iter); 
    if ( ret != OMX_ErrorNone )
    {
        printf ("Query called returned with error\n");
    }

    printf ("isVideoDetect      = %d\n"
            "frameWidth         = %d\n"
            "frameHeight        = %d\n"
            "frameInterval      = %d\n"
            "isInterlaced       = %d\n",
            vid_detect_status.isVideoDetect, vid_detect_status.frameWidth, 
            vid_detect_status.frameHeight, vid_detect_status.frameInterval,
            vid_detect_status.isInterlaced);
}
