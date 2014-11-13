
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(AVLOOP C CXX)

SET(CMAKE_LINKER arm-none-linux-gnueabi-gcc)    
SET(CMAKE_C_COMPILER  arm-none-linux-gnueabi-gcc)
SET(CMAKE_CXX_COMPILER  arm-none-linux-gnueabi-gcc)
SET(CMAKE_INSTALL_PREFIX ${AVLOOP_SOURCE_DIR}/)
SET(CMAKE_C_FLAGS "-Wall -O3")

SET(Z3_EZSDK_BASE_DIR    ${AVLOOP_SOURCE_DIR}/../z3/ezsdk/)
SET(Z3_LINUX_DEVKIT     ${AVLOOP_SOURCE_DIR}/../z3/ezsdk/linux-devkit/)
SET(Z3_COMPONENT_SOURCES ${Z3_EZSDK_BASE_DIR}/component-sources/)
SET(INSTALL_PATH ../z3/filesys/fs/root/)

SET(AVLOOP_Inc_Dirs 
        ${AVLOOP_SOURCE_DIR}/../scrambler_encrypt/
        ${AVLOOP_SOURCE_DIR}/../scrambler_encrypt/bitstream/
        ${AVLOOP_SOURCE_DIR}/../amagi_classes/inc
        ${AVLOOP_SOURCE_DIR}/../amagi_classes/audio/inc
        ${AVLOOP_SOURCE_DIR}/../amagi_classes/data_sink/
        ${AVLOOP_SOURCE_DIR}/../amagi_classes/data_source
        ${AVLOOP_SOURCE_DIR}/../amagi_classes/ts_parser/inc
        ${AVLOOP_SOURCE_DIR}/../mpeg2_player3/inc
        ${AVLOOP_SOURCE_DIR}/../relayd/mqueue
        ${AVLOOP_SOURCE_DIR}/../avloop/aloop_pcm_plus_ac3/inc
        ${AVLOOP_SOURCE_DIR}/../avloop/app/inc
        ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/scte35/inc
        ${AVLOOP_SOURCE_DIR}/../dart_plus_ird/clock/inc/
        ${AVLOOP_SOURCE_DIR}/../dart_plus_ird/inc
        ./app/inc 
        ./vloop/inc 
        ./aloop_new/inc
        ./../relayd/mqueue 
        ./config/
        ${AVLOOP_SOURCE_DIR}/../amagi_classes/ac3_decoder/include/
        ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/inc/
        ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/video_fingerprint/inc/
        ${AVLOOP_SOURCE_DIR}/../audio_fingerprint_algo/inc/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/vfcc/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/vfdc/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/venc/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/vdec/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/vswmosaic/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/vfpc/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/comp/ctrl/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/domx/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/omx/interfaces/openMaxv11
        ${AVLOOP_SOURCE_DIR}/../common/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/include/ti/sdo/ce/osal
        ${Z3_COMPONENT_SOURCES}/xdctools_3_23_03_53/packages/
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/local/include/
        ${AVLOOP_SOURCE_DIR}/../player3/inc/
        ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/inc
        ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/include
        )
INCLUDE_DIRECTORIES(${AVLOOP_Inc_Dirs})
LINK_DIRECTORIES(${Z3_EZSDK_BASE_DIR}/linux-devkit/arm-none-linux-gnueabi/usr/lib
                 ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/audio_fingerprint_algo/thirdparty_lib/arm9/
                 ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/lib/ARM/
                 ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/video_fingerprint/build/lib/ARM/
                 ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/audio_fingerprint_algo/lib/ARM/
                    ${AVLOOP_SOURCE_DIR}/../trigger_det_algos_and_app/audio_watermark/lib/ARM/  
                    ${AVLOOP_SOURCE_DIR}/../amagi_classes/ac3_decoder/  
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/install/ARM/usr/local/lib/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/dr/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/db/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/comm/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/algos/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/packet/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/signalhandler/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/eventq/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/timer/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/alloc/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/uri_handlers/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/group/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/dss/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/rateshaper/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/comm/satcomm/
                    ${AVLOOP_SOURCE_DIR}/../dartbus/dartbus_v4/dartbus_base/obj/lib/utils/
                    ${AVLOOP_SOURCE_DIR}/../player3/out/lib/ARM)    

ADD_DEFINITIONS( -DMULTICHANNEL_OPT=1 -Dxdc_target_name__=GCArmv5T -Dxdc_target_types__=gnu/targets/arm/std.h  -Dxdc_bld__profile_debug  
        -Dxdc_bld__vers_1_0_4_3_3 -DGlobal_GrpxDssMsgHeapId=6 -DGlobal_TilerHeapId=7 
        -D_LOCAL_CORE_a8host_ -DAVLOOP_LOG_FRM_LOG4C -DAMG_USE_MOSAIC )


SET(AVLOOP_SRCS    
        ./video_stdd_query.c)
ADD_EXECUTABLE(vquery ${AVLOOP_SRCS})
TARGET_LINK_LIBRARIES(vquery  -Xlinker --start-group
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/z3.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/local/lib/liblog4c.a
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/omx/omxcore/lib/a8host/debug/omxcore.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/omx/memcfg/lib/a8host/debug/memcfg.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/omx/domx/lib/a8host/debug/domx.av5T

        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/omx/domx/delegates/shmem/lib/a8host/debug/domx_delegates_shmem.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/timmosal/lib/a8host/debug/timmosal.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/linuxdist/build/lib/osal.a
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/linuxdist/cstubs/lib/cstubs.a
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/sdo/rcm/lib/release/rcm_syslink.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/sdo/fc/memutils/lib/release/memutils.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/sdo/xdcruntime/linux/lib/release/osal_linux_470.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/sdo/fc/global/lib/release/fcsettings.av5T
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/syslink/lib/syslink.a_release
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/sdo/linuxutils/cmem/lib/cmem.a470MV
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/ti/uia/linux/lib/servicemgr.a
        ${Z3_LINUX_DEVKIT}/arm-none-linux-gnueabi/usr/lib/omxcfg.av5T
        pthread
        rt -Xlinker --end-group )
