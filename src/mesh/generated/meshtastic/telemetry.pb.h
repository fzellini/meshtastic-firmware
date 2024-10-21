/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9 */

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
    /* NAU7802 Scale Chip or compatible */
    meshtastic_TelemetrySensorType_NAU7802 = 25,
    /* BMP3XX High accuracy temperature and pressure */
    meshtastic_TelemetrySensorType_BMP3XX = 26,
    /* ICM-20948 9-Axis digital motion processor */
    meshtastic_TelemetrySensorType_ICM20948 = 27,
    /* MAX17048 1S lipo battery sensor (voltage, state of charge, time to go) */
    meshtastic_TelemetrySensorType_MAX17048 = 28,
    /* Custom I2C sensor implementation based on https://github.com/meshtastic/i2c-sensor */
    meshtastic_TelemetrySensorType_CUSTOM_SENSOR = 29,
    /* MAX30102 Pulse Oximeter and Heart-Rate Sensor */
    meshtastic_TelemetrySensorType_MAX30102 = 30,
    /* MLX90614 non-contact IR temperature sensor */
    meshtastic_TelemetrySensorType_MLX90614 = 31,
    /* SCD40/SCD41 CO2, humidity, temperature sensor */
    meshtastic_TelemetrySensorType_SCD4X = 32,
    meshtastic_TelemetrySensorType_INA219_x41 = 33
} meshtastic_TelemetrySensorType;

/* Struct definitions */
/* Key native device metrics such as battery level */
typedef struct _meshtastic_DeviceMetrics {
    /* 0-100 (>100 means powered) */
    bool has_battery_level;
    uint32_t battery_level;
    /* Voltage measured */
    bool has_voltage;
    float voltage;
    /* Utilization for the current channel, including well formed TX, RX and malformed RX (aka noise). */
    bool has_channel_utilization;
    float channel_utilization;
    /* Percent of airtime for transmission used within the last hour. */
    bool has_air_util_tx;
    float air_util_tx;
    /* How long the device has been running since the last reboot (in seconds) */
    bool has_uptime_seconds;
    uint32_t uptime_seconds;
} meshtastic_DeviceMetrics;

/* Weather station or other environmental metrics */
typedef struct _meshtastic_EnvironmentMetrics {
    /* Temperature measured */
    bool has_temperature;
    float temperature;
    /* Relative humidity percent measured */
    bool has_relative_humidity;
    float relative_humidity;
    /* Barometric pressure in hPA measured */
    bool has_barometric_pressure;
    float barometric_pressure;
    /* Gas resistance in MOhm measured */
    bool has_gas_resistance;
    float gas_resistance;
    /* Voltage measured (To be depreciated in favor of PowerMetrics in Meshtastic 3.x) */
    bool has_voltage;
    float voltage;
    /* Current measured (To be depreciated in favor of PowerMetrics in Meshtastic 3.x) */
    bool has_current;
    float current;
    /* relative scale IAQ value as measured by Bosch BME680 . value 0-500.
 Belongs to Air Quality but is not particle but VOC measurement. Other VOC values can also be put in here. */
    bool has_iaq;
    uint16_t iaq;
    /* RCWL9620 Doppler Radar Distance Sensor, used for water level detection. Float value in mm. */
    bool has_distance;
    float distance;
    /* VEML7700 high accuracy ambient light(Lux) digital 16-bit resolution sensor. */
    bool has_lux;
    float lux;
    /* VEML7700 high accuracy white light(irradiance) not calibrated digital 16-bit resolution sensor. */
    bool has_white_lux;
    float white_lux;
    /* Infrared lux */
    bool has_ir_lux;
    float ir_lux;
    /* Ultraviolet lux */
    bool has_uv_lux;
    float uv_lux;
    /* Wind direction in degrees
 0 degrees = North, 90 = East, etc... */
    bool has_wind_direction;
    uint16_t wind_direction;
    /* Wind speed in m/s */
    bool has_wind_speed;
    float wind_speed;
    /* Weight in KG */
    bool has_weight;
    float weight;
    /* Wind gust in m/s */
    bool has_wind_gust;
    float wind_gust;
    /* Wind lull in m/s */
    bool has_wind_lull;
    float wind_lull;
} meshtastic_EnvironmentMetrics;

/* Power Metrics (voltage / current / etc) */
typedef struct _meshtastic_PowerMetrics {
    /* Voltage (Ch1) */
    bool has_ch1_voltage;
    float ch1_voltage;
    /* Current (Ch1) */
    bool has_ch1_current;
    float ch1_current;
    /* Voltage (Ch2) */
    bool has_ch2_voltage;
    float ch2_voltage;
    /* Current (Ch2) */
    bool has_ch2_current;
    float ch2_current;
    /* Voltage (Ch3) */
    bool has_ch3_voltage;
    float ch3_voltage;
    /* Current (Ch3) */
    bool has_ch3_current;
    float ch3_current;
} meshtastic_PowerMetrics;

/* Air quality metrics */
typedef struct _meshtastic_AirQualityMetrics {
    /* Concentration Units Standard PM1.0 */
    bool has_pm10_standard;
    uint32_t pm10_standard;
    /* Concentration Units Standard PM2.5 */
    bool has_pm25_standard;
    uint32_t pm25_standard;
    /* Concentration Units Standard PM10.0 */
    bool has_pm100_standard;
    uint32_t pm100_standard;
    /* Concentration Units Environmental PM1.0 */
    bool has_pm10_environmental;
    uint32_t pm10_environmental;
    /* Concentration Units Environmental PM2.5 */
    bool has_pm25_environmental;
    uint32_t pm25_environmental;
    /* Concentration Units Environmental PM10.0 */
    bool has_pm100_environmental;
    uint32_t pm100_environmental;
    /* 0.3um Particle Count */
    bool has_particles_03um;
    uint32_t particles_03um;
    /* 0.5um Particle Count */
    bool has_particles_05um;
    uint32_t particles_05um;
    /* 1.0um Particle Count */
    bool has_particles_10um;
    uint32_t particles_10um;
    /* 2.5um Particle Count */
    bool has_particles_25um;
    uint32_t particles_25um;
    /* 5.0um Particle Count */
    bool has_particles_50um;
    uint32_t particles_50um;
    /* 10.0um Particle Count */
    bool has_particles_100um;
    uint32_t particles_100um;
    /* 10.0um Particle Count */
    bool has_co2;
    uint32_t co2;
} meshtastic_AirQualityMetrics;

/* Local device mesh statistics */
typedef struct _meshtastic_LocalStats {
    /* How long the device has been running since the last reboot (in seconds) */
    uint32_t uptime_seconds;
    /* Utilization for the current channel, including well formed TX, RX and malformed RX (aka noise). */
    float channel_utilization;
    /* Percent of airtime for transmission used within the last hour. */
    float air_util_tx;
    /* Number of packets sent */
    uint32_t num_packets_tx;
    /* Number of packets received (both good and bad) */
    uint32_t num_packets_rx;
    /* Number of packets received that are malformed or violate the protocol */
    uint32_t num_packets_rx_bad;
    /* Number of nodes online (in the past 2 hours) */
    uint16_t num_online_nodes;
    /* Number of nodes total */
    uint16_t num_total_nodes;
    /* Number of received packets that were duplicates (due to multiple nodes relaying).
 If this number is high, there are nodes in the mesh relaying packets when it's unnecessary, for example due to the ROUTER/REPEATER role. */
    uint32_t num_rx_dupe;
    /* Number of packets we transmitted that were a relay for others (not originating from ourselves). */
    uint32_t num_tx_relay;
    /* Number of times we canceled a packet to be relayed, because someone else did it before us.
 This will always be zero for ROUTERs/REPEATERs. If this number is high, some other node(s) is/are relaying faster than you. */
    uint32_t num_tx_relay_canceled;
} meshtastic_LocalStats;

/* Health telemetry metrics */
typedef struct _meshtastic_HealthMetrics {
    /* Heart rate (beats per minute) */
    bool has_heart_bpm;
    uint8_t heart_bpm;
    /* SpO2 (blood oxygen saturation) level */
    bool has_spO2;
    uint8_t spO2;
    /* Body temperature in degrees Celsius */
    bool has_temperature;
    float temperature;
} meshtastic_HealthMetrics;

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
        /* Local device mesh statistics */
        meshtastic_LocalStats local_stats;
        /* Health telemetry metrics */
        meshtastic_HealthMetrics health_metrics;
    } variant;
} meshtastic_Telemetry;

/* NAU7802 Telemetry configuration, for saving to flash */
typedef struct _meshtastic_Nau7802Config {
    /* The offset setting for the NAU7802 */
    int32_t zeroOffset;
    /* The calibration factor for the NAU7802 */
    float calibrationFactor;
} meshtastic_Nau7802Config;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _meshtastic_TelemetrySensorType_MIN meshtastic_TelemetrySensorType_SENSOR_UNSET
#define _meshtastic_TelemetrySensorType_MAX meshtastic_TelemetrySensorType_SCD4X
#define _meshtastic_TelemetrySensorType_ARRAYSIZE ((meshtastic_TelemetrySensorType)(meshtastic_TelemetrySensorType_SCD4X+1))
#define _meshtastic_TelemetrySensorType_MAX meshtastic_TelemetrySensorType_INA219_x41









/* Initializer values for message structs */
#define meshtastic_DeviceMetrics_init_default    {false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_EnvironmentMetrics_init_default {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_PowerMetrics_init_default     {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_AirQualityMetrics_init_default {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_LocalStats_init_default       {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define meshtastic_HealthMetrics_init_default    {false, 0, false, 0, false, 0}
#define meshtastic_Telemetry_init_default        {0, 0, {meshtastic_DeviceMetrics_init_default}}
#define meshtastic_Nau7802Config_init_default    {0, 0}
#define meshtastic_DeviceMetrics_init_zero       {false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_EnvironmentMetrics_init_zero  {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_PowerMetrics_init_zero        {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_AirQualityMetrics_init_zero   {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define meshtastic_LocalStats_init_zero          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define meshtastic_HealthMetrics_init_zero       {false, 0, false, 0, false, 0}
#define meshtastic_Telemetry_init_zero           {0, 0, {meshtastic_DeviceMetrics_init_zero}}
#define meshtastic_Nau7802Config_init_zero       {0, 0}

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
#define meshtastic_EnvironmentMetrics_weight_tag 15
#define meshtastic_EnvironmentMetrics_wind_gust_tag 16
#define meshtastic_EnvironmentMetrics_wind_lull_tag 17
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
#define meshtastic_AirQualityMetrics_co2_tag     13
#define meshtastic_LocalStats_uptime_seconds_tag 1
#define meshtastic_LocalStats_channel_utilization_tag 2
#define meshtastic_LocalStats_air_util_tx_tag    3
#define meshtastic_LocalStats_num_packets_tx_tag 4
#define meshtastic_LocalStats_num_packets_rx_tag 5
#define meshtastic_LocalStats_num_packets_rx_bad_tag 6
#define meshtastic_LocalStats_num_online_nodes_tag 7
#define meshtastic_LocalStats_num_total_nodes_tag 8
#define meshtastic_LocalStats_num_rx_dupe_tag    9
#define meshtastic_LocalStats_num_tx_relay_tag   10
#define meshtastic_LocalStats_num_tx_relay_canceled_tag 11
#define meshtastic_HealthMetrics_heart_bpm_tag   1
#define meshtastic_HealthMetrics_spO2_tag        2
#define meshtastic_HealthMetrics_temperature_tag 3
#define meshtastic_Telemetry_time_tag            1
#define meshtastic_Telemetry_device_metrics_tag  2
#define meshtastic_Telemetry_environment_metrics_tag 3
#define meshtastic_Telemetry_air_quality_metrics_tag 4
#define meshtastic_Telemetry_power_metrics_tag   5
#define meshtastic_Telemetry_local_stats_tag     6
#define meshtastic_Telemetry_health_metrics_tag  7
#define meshtastic_Nau7802Config_zeroOffset_tag  1
#define meshtastic_Nau7802Config_calibrationFactor_tag 2

/* Struct field encoding specification for nanopb */
#define meshtastic_DeviceMetrics_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UINT32,   battery_level,     1) \
X(a, STATIC,   OPTIONAL, FLOAT,    voltage,           2) \
X(a, STATIC,   OPTIONAL, FLOAT,    channel_utilization,   3) \
X(a, STATIC,   OPTIONAL, FLOAT,    air_util_tx,       4) \
X(a, STATIC,   OPTIONAL, UINT32,   uptime_seconds,    5)
#define meshtastic_DeviceMetrics_CALLBACK NULL
#define meshtastic_DeviceMetrics_DEFAULT NULL

#define meshtastic_EnvironmentMetrics_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, FLOAT,    temperature,       1) \
X(a, STATIC,   OPTIONAL, FLOAT,    relative_humidity,   2) \
X(a, STATIC,   OPTIONAL, FLOAT,    barometric_pressure,   3) \
X(a, STATIC,   OPTIONAL, FLOAT,    gas_resistance,    4) \
X(a, STATIC,   OPTIONAL, FLOAT,    voltage,           5) \
X(a, STATIC,   OPTIONAL, FLOAT,    current,           6) \
X(a, STATIC,   OPTIONAL, UINT32,   iaq,               7) \
X(a, STATIC,   OPTIONAL, FLOAT,    distance,          8) \
X(a, STATIC,   OPTIONAL, FLOAT,    lux,               9) \
X(a, STATIC,   OPTIONAL, FLOAT,    white_lux,        10) \
X(a, STATIC,   OPTIONAL, FLOAT,    ir_lux,           11) \
X(a, STATIC,   OPTIONAL, FLOAT,    uv_lux,           12) \
X(a, STATIC,   OPTIONAL, UINT32,   wind_direction,   13) \
X(a, STATIC,   OPTIONAL, FLOAT,    wind_speed,       14) \
X(a, STATIC,   OPTIONAL, FLOAT,    weight,           15) \
X(a, STATIC,   OPTIONAL, FLOAT,    wind_gust,        16) \
X(a, STATIC,   OPTIONAL, FLOAT,    wind_lull,        17)
#define meshtastic_EnvironmentMetrics_CALLBACK NULL
#define meshtastic_EnvironmentMetrics_DEFAULT NULL

#define meshtastic_PowerMetrics_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, FLOAT,    ch1_voltage,       1) \
X(a, STATIC,   OPTIONAL, FLOAT,    ch1_current,       2) \
X(a, STATIC,   OPTIONAL, FLOAT,    ch2_voltage,       3) \
X(a, STATIC,   OPTIONAL, FLOAT,    ch2_current,       4) \
X(a, STATIC,   OPTIONAL, FLOAT,    ch3_voltage,       5) \
X(a, STATIC,   OPTIONAL, FLOAT,    ch3_current,       6)
#define meshtastic_PowerMetrics_CALLBACK NULL
#define meshtastic_PowerMetrics_DEFAULT NULL

#define meshtastic_AirQualityMetrics_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UINT32,   pm10_standard,     1) \
X(a, STATIC,   OPTIONAL, UINT32,   pm25_standard,     2) \
X(a, STATIC,   OPTIONAL, UINT32,   pm100_standard,    3) \
X(a, STATIC,   OPTIONAL, UINT32,   pm10_environmental,   4) \
X(a, STATIC,   OPTIONAL, UINT32,   pm25_environmental,   5) \
X(a, STATIC,   OPTIONAL, UINT32,   pm100_environmental,   6) \
X(a, STATIC,   OPTIONAL, UINT32,   particles_03um,    7) \
X(a, STATIC,   OPTIONAL, UINT32,   particles_05um,    8) \
X(a, STATIC,   OPTIONAL, UINT32,   particles_10um,    9) \
X(a, STATIC,   OPTIONAL, UINT32,   particles_25um,   10) \
X(a, STATIC,   OPTIONAL, UINT32,   particles_50um,   11) \
X(a, STATIC,   OPTIONAL, UINT32,   particles_100um,  12) \
X(a, STATIC,   OPTIONAL, UINT32,   co2,              13)
#define meshtastic_AirQualityMetrics_CALLBACK NULL
#define meshtastic_AirQualityMetrics_DEFAULT NULL

#define meshtastic_LocalStats_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   uptime_seconds,    1) \
X(a, STATIC,   SINGULAR, FLOAT,    channel_utilization,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    air_util_tx,       3) \
X(a, STATIC,   SINGULAR, UINT32,   num_packets_tx,    4) \
X(a, STATIC,   SINGULAR, UINT32,   num_packets_rx,    5) \
X(a, STATIC,   SINGULAR, UINT32,   num_packets_rx_bad,   6) \
X(a, STATIC,   SINGULAR, UINT32,   num_online_nodes,   7) \
X(a, STATIC,   SINGULAR, UINT32,   num_total_nodes,   8) \
X(a, STATIC,   SINGULAR, UINT32,   num_rx_dupe,       9) \
X(a, STATIC,   SINGULAR, UINT32,   num_tx_relay,     10) \
X(a, STATIC,   SINGULAR, UINT32,   num_tx_relay_canceled,  11)
#define meshtastic_LocalStats_CALLBACK NULL
#define meshtastic_LocalStats_DEFAULT NULL

#define meshtastic_HealthMetrics_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UINT32,   heart_bpm,         1) \
X(a, STATIC,   OPTIONAL, UINT32,   spO2,              2) \
X(a, STATIC,   OPTIONAL, FLOAT,    temperature,       3)
#define meshtastic_HealthMetrics_CALLBACK NULL
#define meshtastic_HealthMetrics_DEFAULT NULL

#define meshtastic_Telemetry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FIXED32,  time,              1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,device_metrics,variant.device_metrics),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,environment_metrics,variant.environment_metrics),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,air_quality_metrics,variant.air_quality_metrics),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,power_metrics,variant.power_metrics),   5) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,local_stats,variant.local_stats),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,health_metrics,variant.health_metrics),   7)
#define meshtastic_Telemetry_CALLBACK NULL
#define meshtastic_Telemetry_DEFAULT NULL
#define meshtastic_Telemetry_variant_device_metrics_MSGTYPE meshtastic_DeviceMetrics
#define meshtastic_Telemetry_variant_environment_metrics_MSGTYPE meshtastic_EnvironmentMetrics
#define meshtastic_Telemetry_variant_air_quality_metrics_MSGTYPE meshtastic_AirQualityMetrics
#define meshtastic_Telemetry_variant_power_metrics_MSGTYPE meshtastic_PowerMetrics
#define meshtastic_Telemetry_variant_local_stats_MSGTYPE meshtastic_LocalStats
#define meshtastic_Telemetry_variant_health_metrics_MSGTYPE meshtastic_HealthMetrics

#define meshtastic_Nau7802Config_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    zeroOffset,        1) \
X(a, STATIC,   SINGULAR, FLOAT,    calibrationFactor,   2)
#define meshtastic_Nau7802Config_CALLBACK NULL
#define meshtastic_Nau7802Config_DEFAULT NULL

extern const pb_msgdesc_t meshtastic_DeviceMetrics_msg;
extern const pb_msgdesc_t meshtastic_EnvironmentMetrics_msg;
extern const pb_msgdesc_t meshtastic_PowerMetrics_msg;
extern const pb_msgdesc_t meshtastic_AirQualityMetrics_msg;
extern const pb_msgdesc_t meshtastic_LocalStats_msg;
extern const pb_msgdesc_t meshtastic_HealthMetrics_msg;
extern const pb_msgdesc_t meshtastic_Telemetry_msg;
extern const pb_msgdesc_t meshtastic_Nau7802Config_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define meshtastic_DeviceMetrics_fields &meshtastic_DeviceMetrics_msg
#define meshtastic_EnvironmentMetrics_fields &meshtastic_EnvironmentMetrics_msg
#define meshtastic_PowerMetrics_fields &meshtastic_PowerMetrics_msg
#define meshtastic_AirQualityMetrics_fields &meshtastic_AirQualityMetrics_msg
#define meshtastic_LocalStats_fields &meshtastic_LocalStats_msg
#define meshtastic_HealthMetrics_fields &meshtastic_HealthMetrics_msg
#define meshtastic_Telemetry_fields &meshtastic_Telemetry_msg
#define meshtastic_Nau7802Config_fields &meshtastic_Nau7802Config_msg

/* Maximum encoded size of messages (where known) */
#define MESHTASTIC_MESHTASTIC_TELEMETRY_PB_H_MAX_SIZE meshtastic_Telemetry_size
#define meshtastic_AirQualityMetrics_size        78
#define meshtastic_DeviceMetrics_size            27
#define meshtastic_EnvironmentMetrics_size       85
#define meshtastic_HealthMetrics_size            11
#define meshtastic_LocalStats_size               60
#define meshtastic_Nau7802Config_size            16
#define meshtastic_PowerMetrics_size             30
#define meshtastic_Telemetry_size                92

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif