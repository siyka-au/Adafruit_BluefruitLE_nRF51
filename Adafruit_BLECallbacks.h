#pragma once

#include <Arduino.h>

class IAdafruit_BLEConnectionListener
{
  public:
    virtual ~IAdafruit_BLEConnectionListener() = default;

    virtual void onBLEConnect() = 0;
};

class IAdafruit_BLEDisconnectionListener
{
  public:
    virtual ~IAdafruit_BLEDisconnectionListener() = default;

    virtual void onBLEDisconnect() = 0;
};

class IAdafruit_BLEGattRxListener
{
  public:
    virtual ~IAdafruit_BLEGattRxListener() = default;

    virtual void onBLEGattRx(int32_t characteristicId, uint8_t data[], uint16_t dataLength) = 0;
};