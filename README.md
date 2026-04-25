# Air Quality Monitoring System

## Overview

This project is an Arduino-based air quality monitoring system that measures gas levels using an MQ-135 sensor. It displays real-time air quality on an LCD and uses LEDs for visual alerts. Data is also sent to Python for logging.

## Features

* Real-time sensor readings
* LCD display output
* LED indicators (Good, Moderate, Poor)
* Serial communication to Python
* Data logging

## Hardware

* Arduino Uno
* MQ-135 sensor
* 16x2 LCD
* LEDs and resistors

## Results

Example Output:
Air Value: 320 | Status: Moderate

## Challenges

* Wiring issues with LCD → fixed pin connections
* Serial port conflict → closed Serial Monitor before Python
* Sensor inconsistency → added warm-up time

## How to Run

1. Upload Arduino code
2. Connect circuit
3. Run Python script
