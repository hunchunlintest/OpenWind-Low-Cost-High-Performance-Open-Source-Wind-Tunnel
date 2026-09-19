# OpenWind-Low-Cost-High-Performance-Open-Source-Wind-Tunnel
An open-source, suction-type continuous wind tunnel engineered for low cost and easy assembly. Features a 900 cm² test section, CAD files, Arduino control firmware, and assembly guides. Optimized via ANSYS Discovery to deliver precise PWM speed control (up to 10 m/s) with high flow uniformity and low turbulence (T.I. &lt; 1.6%).
# Low-Cost, High-Performance Open Source Wind Tunnel

An open-source, suction-type continuous wind tunnel design assisted by ANSYS Discovery, built to be low-cost and easy to replicate[cite: 2]. This repository provides CAD files, control firmware, and assembly guidelines to help users set up a flow field testing environment with high uniformity and low turbulence[cite: 2].

---

## 🛠️ Hardware & Bill of Materials (BOM)

### 1. Wind Tunnel Structure Modules
*   **Flow Straightener Section (Honeycomb & Mesh)**:
    *   Plastic straws (1 cm diameter, aligned in a honeycomb pattern)[cite: 2]
    *   Stainless steel wire mesh[cite: 2]
*   **Contraction Section (Contraction Cone)**:
    *   3D printed components (PLA, modeled in Autodesk Fusion 360)[cite: 2]
    *   Wall putty / spackle (for sanding and smoothing the interior surface)[cite: 2]
*   **Test Section (Observation Section)**:
    *   Acrylic plates (Cross-section: 30 cm × 30 cm, Length: 40 cm)[cite: 2]
    *   Pre-drilled ports for Pitot tube and smoke generator injection[cite: 2]
*   **Diffuser Section**:
    *   Tapered enclosure panels (Length: 120 cm)[cite: 2]

### 2. Power & Control System
*   **Fans**: Snow Fan YY20060H24 × 4[cite: 2]
*   **Microcontroller**: Arduino UNO × 1[cite: 2]
*   **Motor Driver**: APO-L3 PWM Controller × 1[cite: 2]
*   **Power Supply**: MEAN WELL LRS-350-24 (24V) × 1[cite: 2]

### 3. Optional Measurement & Testing Gear
*   Pitot tube anemometer (e.g., PASCO ME-2221)[cite: 2]
*   Smoke generator (for flow visualization)[cite: 2]
*   High-speed camera (e.g., XIMEA XIQ)[cite: 2]

---

## 💻 Software & Files

*   **Autodesk Fusion 360**: 3D structural model source files (`.f3d`) and printable files (`.stl`)[cite: 2].
*   **ANSYS Discovery**: Flow lines, cross-sectional wind speeds, and vector field simulation data for verification reference[cite: 2].
*   **Arduino IDE**: Firmware for fan speed control via PWM (`.ino`)[cite: 2].

---

## 📊 Performance Specs

Replicated and measured experimentally, this setup achieves the following specifications:

*   **Test Section Cross-Section**: 900 cm² (30 cm × 30 cm)[cite: 2]
*   **Maximum Wind Speed**: 10 m/s[cite: 2]
*   **Flow Field Uniformity**: Post-sanding treatment of the contraction cone reduces test section Turbulence Intensity (T.I.) to below **1.6%**[cite: 2].
*   **Control Linearity**: High linear relationship ($R^2 = 0.9996$) between Arduino PWM duty cycle and average test section wind speed[cite: 2].
*   **Operating Stability**: Continuous 60-minute test shows 5-minute average wind speed fluctuations staying within a **$\pm 5\%$** error margin[cite: 2].

---

## 🚀 Getting Started

1. **Download CAD Files**: Clone this repository and navigate to the CAD directory to get the `.stl` files.
2. **3D Printing & Post-Processing**: Print the contraction cone parts and assemble them. **Apply wall putty to the interior walls and sand repeatedly until smooth** to ensure low turbulence intensity[cite: 2].
3. **Assemble Main Structure**: Connect the components in sequence: Straightener $\rightarrow$ Contraction Cone $\rightarrow$ Acrylic Test Section $\rightarrow$ Diffuser $\rightarrow$ Fan Power Section[cite: 2]. Seal all joining edges to prevent air leaks.
4. **Wiring & Firmware Flashing**:
   * Connect the Arduino UNO, APO-L3 PWM driver, LRS-350-24 power supply, and Snow Fans according to the provided circuit diagram[cite: 2].
   * Open Arduino IDE and upload the control script to the Arduino UNO[cite: 2].
5. **Operation**: Power on the system and send PWM signals to achieve precise wind speed control[cite: 2].
