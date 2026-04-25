# System Overview – Air Quality Monitoring System

## Overview
This project is an embedded air quality monitoring system built using an Arduino Uno, MQ-135 gas sensor, LCD display, LEDs, and a Python logging script.

The system reads environmental air quality data in real time, processes it on the Arduino, displays results locally, and sends data to a Python program for logging and analysis.

## System Architecture

The system follows a simple data flow pipeline:

---

## 1. Sensor Layer (Input)

### MQ-135 Gas Sensor
- Detects air quality based on gas concentration
- Outputs an analog voltage signal
- Connected to Arduino analog pin A0

---

## 2. Processing Layer (Arduino Uno)

The Arduino acts as the central controller:
- Reads analog values from the MQ-135
- Converts raw sensor values into air quality categories:
  - Good
  - Moderate
  - Poor
- Controls output devices (LCD + LEDs)
- Sends data to computer via Serial communication (USB)

---

## 3. Output Layer (Hardware Feedback)

### LCD Display
- Shows current air quality status
- Displays live readings or category labels

### LED Indicators
- Green → Good air quality
- Yellow → Moderate air quality
- Red → Poor air quality

---

## 4. Data Logging Layer (Python)

A Python script running on the computer:
- Reads serial data from Arduino
- Parses sensor value and status
- Logs data into a text or CSV file
- Can be extended for graphs and analytics

---

## Data Flow Summary

---

## Key Concept

This project demonstrates a full embedded system pipeline:
- Sensor integration
- Embedded programming
- Real-time decision making
- Serial communication
- External data logging
