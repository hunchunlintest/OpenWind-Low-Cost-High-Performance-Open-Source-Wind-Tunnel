#  Core Test Data

This document details the simulation, fabrication, and core experimental data for the custom large-scale high-performance wind tunnel, including long-term stability, wind speed linearity, turbulence intensity, and Kármán vortex street observations.

---

## 📊 Table of Contents
- [1. Long-Term Stability Test (60-Minute Continuous Operation)](#1-long-term-stability-test-60-minute-continuous-operation)
- [2. Duty Cycle vs. Wind Speed in Central Test Area (3,3)](#2-duty-cycle-vs-wind-speed-in-central-test-area-33)
- [3. Flow Field Uniformity & Kármán Vortex Street Observations](#3-flow-field-uniformity--kármán-vortex-street-observations)

---

## 1. Long-Term Stability Test (60-Minute Continuous Operation)

**Test Conditions:**
* Fan Duty Cycle: Fixed at `50%`
* Sampling Interval: Average wind speed and standard deviation recorded every 5 minutes

| Interval (min) | Avg Speed (m/s) | Std Dev (m/s) | Interval (min) | Avg Speed (m/s) | Std Dev (m/s) |
| :---: | :---: | :---: | :---: | :---: | :---: |
| **1–5** | 6.105 | 0.091 | **31–35** | 6.083 | 0.092 |
| **6–10** | 6.097 | 0.098 | **36–40** | 6.147 | 0.098 |
| **11–15** | 6.018 | 0.096 | **41–45** | 6.289 | 0.093 |
| **16–20** | 6.003 | 0.094 | **46–50** | 6.350 | 0.096 |
| **21–25** | 6.010 | 0.094 | **51–55** | 6.409 | 0.090 |
| **26–30** | 6.034 | 0.095 | **56–60** | 6.475 | 0.094 |

> **💡 Summary of Results:**
> Over the 60-minute test period, the average wind speed fluctuations per 5-minute interval remained strictly within an allowable error margin of **±5%**, demonstrating excellent operational stability during prolonged use.

---

## 2. Duty Cycle vs. Wind Speed in Central Test Area (3,3)

**Test Conditions:**
* Measurement Location: Center block `(3,3)` of the test section
* Duty Cycle Range: `20%` to `80%`
* Linear Regression: Strong linear correlation with $R^2 = 0.9996$

| Duty Cycle (%) | Avg Wind Speed (m/s) | Std Dev (m/s) |
| :---: | :---: | :---: |
| **20** | 2.3760 | 0.2048 |
| **25** | 2.9018 | 0.1824 |
| **30** | 3.5640 | 0.1620 |
| **35** | 4.2861 | 0.1338 |
| **40** | 4.8999 | 0.1027 |
| **45** | 5.4855 | 0.0965 |
| **50** | 6.1010 | 0.0935 |
| **55** | 6.7936 | 0.0832 |
| **60** | 7.4169 | 0.0727 |
| **65** | 7.9449 | 0.0642 |
| **70** | 8.5687 | 0.0597 |
| **75** | 9.2096 | 0.0639 |
| **80** | 9.8174 | 0.0640 |

---

## 3. Flow Field Uniformity & Kármán Vortex Street Observations

### 3.1 Turbulence Intensity (T.I.) Improvement
* **Before Sanding:** Prior to polishing the contraction section, turbulence intensity across test areas was within `2%`.
* **After Sanding:** Repeated applying of wall putty and fine sanding reduced turbulence intensity across all test areas to **below `1.6%`**, significantly improving flow uniformity.

### 3.2 Kármán Vortex Street Observations
Obstacles using cylinders with diameters of `7mm`, `13mm`, and `19mm` yielded the following observations:

1. **Frequency vs. Velocity & Width:** Experimental results match theoretical equations.
   * Higher wind speed ➡️ Higher vortex shedding frequency.
   * Larger obstacle width ➡️ Lower vortex shedding frequency.
2. **High Wind Speed Deviation:** At higher wind speeds, measured frequencies were slightly **higher** than theoretical calculations.
   * **Inferred Cause (Venturi Effect):** Inserting the cylinder reduced the effective cross-sectional area of the flow channel, inducing a Venturi effect that caused local air speed past the cylinder to exceed the measured baseline flow velocity.
