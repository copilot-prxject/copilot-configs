#pragma once

#include <host/ble_uuid.h>

#define GATT_SVC_OBD_MODULE                         0x5100
#define GATT_CHR_ENGINE_SPEED                       0x5101
#define GATT_CHR_FUEL_TANK_LEVEL                    0x5102
#define GATT_CHR_BATTERY_VOLTAGE                    0x5103
#define GATT_CHR_THROTTLE_POSITION                  0x5104

#define GATT_SVC_GPS_MODULE                         0x5200
#define GATT_CHR_GPS_GEO_POSITION                   0x5201
#define GATT_CHR_GPS_VEHICLE_SPEED                  0x5202
#define GATT_CHR_GPS_DATA_TIME                      0x5203

#define GATT_SVC_CONTROL_MEASUREMENT_MODULE         0x5000
#define GATT_CHR_CURRENT_MEASUREMENT_CONTROL        0x5001
#define GATT_DSC_CURRENT_MEASURE_CONTROL            0x5011
#define GATT_CHR_CURRENT_MEASUREMENT                0x5002
#define GATT_CHR_VOLTAGE_MEASUREMENT_CONTROL        0x5003
#define GATT_CHR_VOLTAGE_MEASUREMENT                0x5004
#define GATT_CHR_PWM                                0x5005
#define GATT_CHR_RELAY                              0x5006
#define GATT_CHR_TEMPERATURE_CONTROL                0x5007
#define GATT_CHR_TEMPERATURE                        0x5008
#define GATT_DSC_TEMPERATURE_CONTROL                0x5018
