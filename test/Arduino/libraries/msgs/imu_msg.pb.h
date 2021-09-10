/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_IMU_MSG_PB_H_INCLUDED
#define PB_IMU_MSG_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _IMU { 
    double acc_x; 
    double acc_y; 
    double acc_z; 
    double gyr_x; 
    double gyr_y; 
    double gyr_z; 
    double time; 
} IMU;

typedef struct _VICON { 
    float pos_x; 
    float pos_y; 
    float pos_z; 
    float quat_w; 
    float quat_x; 
    float quat_y; 
    float quat_z; 
    double time; 
} VICON;

typedef struct _IMU_VICON { 
    bool has_imu;
    IMU imu; 
    bool has_vicon;
    VICON vicon; 
} IMU_VICON;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define IMU_init_default                         {0, 0, 0, 0, 0, 0, 0}
#define VICON_init_default                       {0, 0, 0, 0, 0, 0, 0, 0}
#define IMU_VICON_init_default                   {false, IMU_init_default, false, VICON_init_default}
#define IMU_init_zero                            {0, 0, 0, 0, 0, 0, 0}
#define VICON_init_zero                          {0, 0, 0, 0, 0, 0, 0, 0}
#define IMU_VICON_init_zero                      {false, IMU_init_zero, false, VICON_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define IMU_acc_x_tag                            1
#define IMU_acc_y_tag                            2
#define IMU_acc_z_tag                            3
#define IMU_gyr_x_tag                            5
#define IMU_gyr_y_tag                            6
#define IMU_gyr_z_tag                            7
#define IMU_time_tag                             8
#define VICON_pos_x_tag                          1
#define VICON_pos_y_tag                          2
#define VICON_pos_z_tag                          3
#define VICON_quat_w_tag                         4
#define VICON_quat_x_tag                         5
#define VICON_quat_y_tag                         6
#define VICON_quat_z_tag                         7
#define VICON_time_tag                           8
#define IMU_VICON_imu_tag                        1
#define IMU_VICON_vicon_tag                      2

/* Struct field encoding specification for nanopb */
#define IMU_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, DOUBLE,   acc_x,             1) \
X(a, STATIC,   SINGULAR, DOUBLE,   acc_y,             2) \
X(a, STATIC,   SINGULAR, DOUBLE,   acc_z,             3) \
X(a, STATIC,   SINGULAR, DOUBLE,   gyr_x,             5) \
X(a, STATIC,   SINGULAR, DOUBLE,   gyr_y,             6) \
X(a, STATIC,   SINGULAR, DOUBLE,   gyr_z,             7) \
X(a, STATIC,   SINGULAR, DOUBLE,   time,              8)
#define IMU_CALLBACK NULL
#define IMU_DEFAULT NULL

#define VICON_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    pos_x,             1) \
X(a, STATIC,   SINGULAR, FLOAT,    pos_y,             2) \
X(a, STATIC,   SINGULAR, FLOAT,    pos_z,             3) \
X(a, STATIC,   SINGULAR, FLOAT,    quat_w,            4) \
X(a, STATIC,   SINGULAR, FLOAT,    quat_x,            5) \
X(a, STATIC,   SINGULAR, FLOAT,    quat_y,            6) \
X(a, STATIC,   SINGULAR, FLOAT,    quat_z,            7) \
X(a, STATIC,   SINGULAR, DOUBLE,   time,              8)
#define VICON_CALLBACK NULL
#define VICON_DEFAULT NULL

#define IMU_VICON_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  imu,               1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  vicon,             2)
#define IMU_VICON_CALLBACK NULL
#define IMU_VICON_DEFAULT NULL
#define IMU_VICON_imu_MSGTYPE IMU
#define IMU_VICON_vicon_MSGTYPE VICON

extern const pb_msgdesc_t IMU_msg;
extern const pb_msgdesc_t VICON_msg;
extern const pb_msgdesc_t IMU_VICON_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define IMU_fields &IMU_msg
#define VICON_fields &VICON_msg
#define IMU_VICON_fields &IMU_VICON_msg

/* Maximum encoded size of messages (where known) */
#define IMU_VICON_size                           111
#define IMU_size                                 63
#define VICON_size                               44

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif