/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8 */

#ifndef PB_MESHTASTIC_MESHTASTIC_TELEMETRY_PB_H_INCLUDED
#define PB_MESHTASTIC_MESHTASTIC_TELEMETRY_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Supported I2C Sensors for telemetry in Meshtastic */
typedef enum _meshtastic_TelemetrySensorType {
    /* No external telemetry sensor explicitly set */
    meshtastic_TelemetrySensorType_SENSOR_UNSET = 0,
    /* High accuracy temperature, pressure, humidity */
    meshtastic_TelemetrySensorType_BME280 = 1,
    /* High accuracy temperature, pressure, humidity, and air resistance */
    meshtastic_TelemetrySensorType_BME680 = 2,
    /* Very high accuracy temperature */
    meshtastic_TelemetrySensorType_MCP9808 = 3,
    /* Moderate accuracy current and voltage */
    meshtastic_TelemetrySensorType_INA260 = 4,
    /* Moderate accuracy current and voltage */
    meshtastic_TelemetrySensorType_INA219 = 5,
    /* High accuracy temperature and pressure */
    meshtastic_TelemetrySensorType_BMP280 = 6,
    /* High accuracy temperature and humidity */
    meshtastic_TelemetrySensorType_SHTC3 = 7,
    /* High accuracy pressure */
    meshtastic_TelemetrySensorType_LPS22 = 8,
    /* 3-Axis magnetic sensor */
    meshtastic_TelemetrySensorType_QMC6310 = 9,
    /* 6-Axis inertial measurement sensor */
    meshtastic_TelemetrySensorType_QMI8658 = 10,
    /* 3-Axis magnetic sensor */
    meshtastic_TelemetrySensorType_QMC5883L = 11,
    /* High accuracy temperature and humidity */
    meshtastic_TelemetrySensorType_SHT31 = 12,
    /* PM2.5 air quality sensor */
    meshtastic_TelemetrySensorType_PMSA003I = 13,
    /* INA3221 3 Channel Voltage / Current Sensor */
    meshtastic_TelemetrySensorType_INA3221 = 14,
    /* BMP085/BMP180 High accuracy temperature and pressure (older Version of BMP280) */
    meshtastic_TelemetrySensorType_BMP085 = 15,
    /* RCWL-9620 Doppler Radar Distance Sensor, used for water level detection */
    meshtastic_TelemetrySensorType_RCWL9620 = 16,
    /* Sensirion High accuracy temperature and humidity */
    meshtastic_TelemetrySensorType_SHT4X = 17,
    /* VEML7700 high accuracy ambient light(Lux) digital 16-bit resolution sensor. */
    meshtastic_TelemetrySensorType_VEML7700 = 18,
    /* MLX90632 non-contact IR temperature sensor. */
    meshtastic_TelemetrySensorType_MLX90632 = 19,
    /* TI OPT3001 Ambient Light Sensor */
    meshtastic_TelemetrySensorType_OPT3001 = 20,
    /* Lite On LTR-390UV-01 UV Light Sensor */
    meshtastic_TelemetrySensorType_LTR390UV = 21,
    /* AMS TSL25911FN RGB Light Sensor */
    meshtastic_TelemetrySensorType_TSL25911FN = 22,
    /* AHT10 Integrated temperature and humidity sensor */
    meshtastic_TelemetrySensorType_AHT10 = 23,
    /* DFRobot Lark Weather station (temperature, humidity, pressure, wind speed and direction) */
    meshtastic_TelemetrySensorType_DFROBOT_LARK = 24,
    /* Moderate accuracy current and voltage */
    meshtastic_TelemetrySensorType_INA219_x41 = 25
} meshtastic_TelemetrySensorType;

/* Struct definitions */
/* Key native device metrics such as battery level */
typedef struct _meshtastic_DeviceMetrics {
    /* 0-100 (>100 means powered) */
    uint32_t battery_level;
    /* Voltage measured */
    float voltage;
    /* Utilization for the current channel, including well formed TX, RX and malformed RX (aka noise). */
    float channel_utilization;
    /* Percent of airtime for transmission used within the last hour. */
    float air_util_tx;
    /* How long the device has been running since the last reboot (in seconds) */
    uint32_t uptime_seconds;
} meshtastic_DeviceMetrics;

/* Weather station or other environmental metrics */
typedef struct _meshtastic_EnvironmentMetrics {
    /* Temperature measured */
    float temperature;
    /* Relative humidity percent measured */
    float relative_humidity;
    /* Barometric pressure in hPA measured */
    float barometric_pressure;
    /* Gas resistance in MOhm measured */
    float gas_resistance;
    /* Voltage measured (To be depreciated in favor of PowerMetrics in Meshtastic 3.x) */
    float voltage;
    /* Current measured (To be depreciated in favor of PowerMetrics in Meshtastic 3.x) */
    float current;
    /* relative scale IAQ value as measured by Bosch BME680 . value 0-500.
 Belongs to Air Quality but is not particle but VOC measurement. Other VOC values can also be put in here. */
    uint16_t iaq;
    /* RCWL9620 Doppler Radar Distance Sensor, used for water level detection. Float value in mm. */
    float distance;
    /* VEML7700 high accuracy ambient light(Lux) digital 16-bit resolution sensor. */
    float lux;
    /* VEML7700 high accuracy white light(irradiance) not calibrated digital 16-bit resolution sensor. */
    float white_lux;
    /* Infrared lux */
    float ir_lux;
    /* Ultraviolet lux */
    float uv_lux;
    /* Wind direction in degrees
 0 degrees = North, 90 = East, etc... */
    uint16_t wind_direction;
    /* Wind speed in m/s */
    float wind_speed;
} meshtastic_EnvironmentMetrics;

/* Power Metrics (voltage / current / etc) */
typedef struct _meshtastic_PowerMetrics {
    /* Voltage (Ch1) */
    float ch1_voltage;
    /* Current (Ch1) */
    float ch1_current;
    /* Voltage (Ch2) */
    float ch2_voltage;
    /* Current (Ch2) */
    float ch2_current;
    /* Voltage (Ch3) */
    float ch3_voltage;
    /* Current (Ch3) */
    float ch3_current;
} meshtastic_PowerMetrics;

/* Air quality metrics */
typedef struct _meshtastic_AirQualityMetrics {
    /* Concentration Units Standard PM1.0 */
    uint32_t pm10_standard;
    /* Concentration Units Standard PM2.5 */
    uint32_t pm25_standard;
    /* Concentration Units Standard PM10.0 */
    uint32_t pm100_standard;
    /* Concentration Units Environmental PM1.0 */
    uint32_t pm10_environmental;
    /* Concentration Units Environmental PM2.5 */
    uint32_t pm25_environmental;
    /* Concentration Units Environmental PM10.0 */
    uint32_t pm100_environmental;
    /* 0.3um Particle Count */
    uint32_t particles_03um;
    /* 0.5um Particle Count */
    uint32_t particles_05um;
    /* 1.0um Particle Count */
    uint32_t particles_10um;
    /* 2.5um Particle Count */
    uint32_t particles_25um;
    /* 5.0um Particle Count */
    uint32_t particles_50um;
    /* 10.0um Particle Count */
    uint32_t particles_100um;
} meshtastic_AirQualityMetrics;

/* Types of Measurements the telemetry module is equipped to handle */
typedef struct _meshtastic_Telemetry {
    /* Seconds since 1970 - or 0 for unknown/unset */
    uint32_t time;
    pb_size_t which_variant;
    union {
        /* Key native device metrics such as battery level */
        meshtastic_DeviceMetrics device_metrics;
        /* Weather station or other environmental metrics */
        meshtastic_EnvironmentMetrics environment_metrics;
        /* Air quality metrics */
        meshtastic_AirQualityMetrics air_quality_metrics;
        /* Power Metrics */
        meshtastic_PowerMetrics power_metrics;
    } variant;
} meshtastic_Telemetry;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _meshtastic_TelemetrySensorType_MIN meshtastic_TelemetrySensorType_SENSOR_UNSET
#define _meshtastic_TelemetrySensorType_MAX meshtastic_TelemetrySensorType_INA219_x41
#define _meshtastic_TelemetrySensorType_ARRAYSIZE ((meshtastic_TelemetrySensorType)(meshtastic_TelemetrySensorType_INA219_x41+1))







/* Initializer values for message structs */
#define meshtastic_DeviceMetrics_init_default    {0, 0, 0, 0, 0}
#define meshtastic_EnvironmentMetrics_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define meshtastic_PowerMetrics_init_default     {0, 0, 0, 0, 0, 0}
#define meshtastic_AirQualityMetrics_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define meshtastic_Telemetry_init_default        {0, 0, {meshtastic_DeviceMetrics_init_default}}
#define meshtastic_DeviceMetrics_init_zero       {0, 0, 0, 0, 0}
#define meshtastic_EnvironmentMetrics_init_zero  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define meshtastic_PowerMetrics_init_zero        {0, 0, 0, 0, 0, 0}
#define meshtastic_AirQualityMetrics_init_zero   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define meshtastic_Telemetry_init_zero           {0, 0, {meshtastic_DeviceMetrics_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define meshtastic_DeviceMetrics_battery_level_tag 1
#define meshtastic_DeviceMetrics_voltage_tag     2
#define meshtastic_DeviceMetrics_channel_utilization_tag 3
#define meshtastic_DeviceMetrics_air_util_tx_tag 4
#define meshtastic_DeviceMetrics_uptime_seconds_tag 5
#define meshtastic_EnvironmentMetrics_temperature_tag 1
#define meshtastic_EnvironmentMetrics_relative_humidity_tag 2
#define meshtastic_EnvironmentMetrics_barometric_pressure_tag 3
#define meshtastic_EnvironmentMetrics_gas_resistance_tag 4
#define meshtastic_EnvironmentMetrics_voltage_tag 5
#define meshtastic_EnvironmentMetrics_current_tag 6
#define meshtastic_EnvironmentMetrics_iaq_tag    7
#define meshtastic_EnvironmentMetrics_distance_tag 8
#define meshtastic_EnvironmentMetrics_lux_tag    9
#define meshtastic_EnvironmentMetrics_white_lux_tag 10
#define meshtastic_EnvironmentMetrics_ir_lux_tag 11
#define meshtastic_EnvironmentMetrics_uv_lux_tag 12
#define meshtastic_EnvironmentMetrics_wind_direction_tag 13
#define meshtastic_EnvironmentMetrics_wind_speed_tag 14
#define meshtastic_PowerMetrics_ch1_voltage_tag  1
#define meshtastic_PowerMetrics_ch1_current_tag  2
#define meshtastic_PowerMetrics_ch2_voltage_tag  3
#define meshtastic_PowerMetrics_ch2_current_tag  4
#define meshtastic_PowerMetrics_ch3_voltage_tag  5
#define meshtastic_PowerMetrics_ch3_current_tag  6
#define meshtastic_AirQualityMetrics_pm10_standard_tag 1
#define meshtastic_AirQualityMetrics_pm25_standard_tag 2
#define meshtastic_AirQualityMetrics_pm100_standard_tag 3
#define meshtastic_AirQualityMetrics_pm10_environmental_tag 4
#define meshtastic_AirQualityMetrics_pm25_environmental_tag 5
#define meshtastic_AirQualityMetrics_pm100_environmental_tag 6
#define meshtastic_AirQualityMetrics_particles_03um_tag 7
#define meshtastic_AirQualityMetrics_particles_05um_tag 8
#define meshtastic_AirQualityMetrics_particles_10um_tag 9
#define meshtastic_AirQualityMetrics_particles_25um_tag 10
#define meshtastic_AirQualityMetrics_particles_50um_tag 11
#define meshtastic_AirQualityMetrics_particles_100um_tag 12
#define meshtastic_Telemetry_time_tag            1
#define meshtastic_Telemetry_device_metrics_tag  2
#define meshtastic_Telemetry_environment_metrics_tag 3
#define meshtastic_Telemetry_air_quality_metrics_tag 4
#define meshtastic_Telemetry_power_metrics_tag   5

/* Struct field encoding specification for nanopb */
#define meshtastic_DeviceMetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   battery_level,     1) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           2) \
X(a, STATIC,   SINGULAR, FLOAT,    channel_utilization,   3) \
X(a, STATIC,   SINGULAR, FLOAT,    air_util_tx,       4) \
X(a, STATIC,   SINGULAR, UINT32,   uptime_seconds,    5)
#define meshtastic_DeviceMetrics_CALLBACK NULL
#define meshtastic_DeviceMetrics_DEFAULT NULL

#define meshtastic_EnvironmentMetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    temperature,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    relative_humidity,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    barometric_pressure,   3) \
X(a, STATIC,   SINGULAR, FLOAT,    gas_resistance,    4) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           5) \
X(a, STATIC,   SINGULAR, FLOAT,    current,           6) \
X(a, STATIC,   SINGULAR, UINT32,   iaq,               7) \
X(a, STATIC,   SINGULAR, FLOAT,    distance,          8) \
X(a, STATIC,   SINGULAR, FLOAT,    lux,               9) \
X(a, STATIC,   SINGULAR, FLOAT,    white_lux,        10) \
X(a, STATIC,   SINGULAR, FLOAT,    ir_lux,           11) \
X(a, STATIC,   SINGULAR, FLOAT,    uv_lux,           12) \
X(a, STATIC,   SINGULAR, UINT32,   wind_direction,   13) \
X(a, STATIC,   SINGULAR, FLOAT,    wind_speed,       14)
#define meshtastic_EnvironmentMetrics_CALLBACK NULL
#define meshtastic_EnvironmentMetrics_DEFAULT NULL

#define meshtastic_PowerMetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    ch1_voltage,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    ch1_current,       2) \
X(a, STATIC,   SINGULAR, FLOAT,    ch2_voltage,       3) \
X(a, STATIC,   SINGULAR, FLOAT,    ch2_current,       4) \
X(a, STATIC,   SINGULAR, FLOAT,    ch3_voltage,       5) \
X(a, STATIC,   SINGULAR, FLOAT,    ch3_current,       6)
#define meshtastic_PowerMetrics_CALLBACK NULL
#define meshtastic_PowerMetrics_DEFAULT NULL

#define meshtastic_AirQualityMetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   pm10_standard,     1) \
X(a, STATIC,   SINGULAR, UINT32,   pm25_standard,     2) \
X(a, STATIC,   SINGULAR, UINT32,   pm100_standard,    3) \
X(a, STATIC,   SINGULAR, UINT32,   pm10_environmental,   4) \
X(a, STATIC,   SINGULAR, UINT32,   pm25_environmental,   5) \
X(a, STATIC,   SINGULAR, UINT32,   pm100_environmental,   6) \
X(a, STATIC,   SINGULAR, UINT32,   particles_03um,    7) \
X(a, STATIC,   SINGULAR, UINT32,   particles_05um,    8) \
X(a, STATIC,   SINGULAR, UINT32,   particles_10um,    9) \
X(a, STATIC,   SINGULAR, UINT32,   particles_25um,   10) \
X(a, STATIC,   SINGULAR, UINT32,   particles_50um,   11) \
X(a, STATIC,   SINGULAR, UINT32,   particles_100um,  12)
#define meshtastic_AirQualityMetrics_CALLBACK NULL
#define meshtastic_AirQualityMetrics_DEFAULT NULL

#define meshtastic_Telemetry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FIXED32,  time,              1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,device_metrics,variant.device_metrics),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,environment_metrics,variant.environment_metrics),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,air_quality_metrics,variant.air_quality_metrics),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,power_metrics,variant.power_metrics),   5)
#define meshtastic_Telemetry_CALLBACK NULL
#define meshtastic_Telemetry_DEFAULT NULL
#define meshtastic_Telemetry_variant_device_metrics_MSGTYPE meshtastic_DeviceMetrics
#define meshtastic_Telemetry_variant_environment_metrics_MSGTYPE meshtastic_EnvironmentMetrics
#define meshtastic_Telemetry_variant_air_quality_metrics_MSGTYPE meshtastic_AirQualityMetrics
#define meshtastic_Telemetry_variant_power_metrics_MSGTYPE meshtastic_PowerMetrics

extern const pb_msgdesc_t meshtastic_DeviceMetrics_msg;
extern const pb_msgdesc_t meshtastic_EnvironmentMetrics_msg;
extern const pb_msgdesc_t meshtastic_PowerMetrics_msg;
extern const pb_msgdesc_t meshtastic_AirQualityMetrics_msg;
extern const pb_msgdesc_t meshtastic_Telemetry_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define meshtastic_DeviceMetrics_fields &meshtastic_DeviceMetrics_msg
#define meshtastic_EnvironmentMetrics_fields &meshtastic_EnvironmentMetrics_msg
#define meshtastic_PowerMetrics_fields &meshtastic_PowerMetrics_msg
#define meshtastic_AirQualityMetrics_fields &meshtastic_AirQualityMetrics_msg
#define meshtastic_Telemetry_fields &meshtastic_Telemetry_msg

/* Maximum encoded size of messages (where known) */
#define MESHTASTIC_MESHTASTIC_TELEMETRY_PB_H_MAX_SIZE meshtastic_Telemetry_size
#define meshtastic_AirQualityMetrics_size        72
#define meshtastic_DeviceMetrics_size            27
#define meshtastic_EnvironmentMetrics_size       68
#define meshtastic_PowerMetrics_size             30
#define meshtastic_Telemetry_size                79

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
