# Calibration Notes – MQ-135 Sensor

## Overview

The MQ-135 gas sensor is a low-cost air quality sensor, but it is not highly precise. It provides relative readings rather than exact air pollution measurements.

Because of this, calibration and threshold tuning are important for meaningful results.

---

## Sensor Limitations

- Not factory-calibrated for exact AQI values
- Sensitive to multiple gases (CO₂, ammonia, smoke, etc.)
- Readings can vary with:
  - Temperature
  - Humidity
  - Warm-up time
  - Environmental conditions

---

## Warm-Up Period

Before taking stable readings:
- Sensor requires ~1–2 minutes warm-up
- Best consistency after longer stabilization (5–10 minutes in some cases)

---

## Threshold Calibration

Instead of absolute values, this project uses relative thresholds:

| Air Quality | Sensor Range (Example) |
|-------------|------------------------|
| Good        | < 200                  |
| Moderate    | 200 – 400              |
| Poor        | > 400                  |

These values may vary depending on:
- Location
- Indoor vs outdoor environment
- Sensor aging

---

## How Thresholds Were Tuned

Thresholds were determined by:
1. Observing raw sensor values in a clean indoor environment
2. Introducing controlled changes (breathing near sensor, room ventilation changes)
3. Noting value ranges and clustering behavior
4. Choosing simple breakpoints that clearly separate conditions

---

## Known Issues

- Values are not absolute air quality measurements
- Sensor drift may occur over time
- Requires occasional re-evaluation of thresholds

---

## Future Improvements

- Add temperature/humidity compensation
- Use multiple sensor averaging
- Map values to official AQI scale
- Implement long-term calibration logging
