# OpenWind-Low-Cost-High-Performance-Open-Source-Wind-Tunnel
An open-source, suction-type continuous wind tunnel engineered for low cost and easy assembly. Features a 900 cm² test section, CAD files, Arduino control firmware, and assembly guides. Optimized via ANSYS Discovery to deliver precise PWM speed control (up to 10 m/s) with high flow uniformity and low turbulence (T.I. < 1.6%).

---

##Ensure your room has sufficient space to accommodate the assembled wind tunnel structure and proper airflow!

##You may need to modify the CAD models to fit your specific 3D printer dimensions or hardware components.

##You will need to design a custom support frame based on your specific environment and perform system calibration prior to testing.

##If you need help, please contact me. Email: edisonlin2009@proton.me

---

## 🛠️ Hardware & Bill of Materials (BOM)

### 1. Wind Tunnel Structure Modules
*   **Flow Straightener Section (Honeycomb & Mesh)**:
    *   Plastic straws (1 cm diameter, aligned in a honeycomb pattern)
    *   Stainless steel wire mesh
*   **Contraction Section (Contraction Cone)**:
    *   3D printed components (PLA)
    *   Wall putty / spackle
*   **Test Section (Observation Section)**:
    *   Acrylic plates
    *   Pre-drilled ports for Pitot tube and smoke generator injection
*   **Diffuser Section**:
    *   Tapered enclosure panels (Length: 120 cm)

### 2. Power & Control System (You can choose your own!)
*   **Fans**: Snow Fan YY20060H24 × 4 
*   **Microcontroller**: Arduino UNO × 1
*   **Motor Driver**: APO-L3 PWM Controller × 1
*   **Power Supply**: MEAN WELL LRS-350-24 (24V) × 1

### 3. Optional Measurement & Testing Gear
*   Pitot tube anemometer (e.g., PASCO ME-2221)
*   Smoke generator (for flow visualization)
*   High-speed camera (e.g., XIMEA XIQ)

---

## 💻 Software & Files

*   **Autodesk Fusion 360**: 3D structural model source files (`.f3d`) and printable files (`.stl`).
*   **Arduino IDE**: Firmware for fan speed control via PWM (`.ino`).

---

## 📊 Performance Specs

Replicated and measured experimentally, this setup achieves the following specifications:

*   **Test Section Cross-Section**: 900 cm² (30 cm × 30 cm)
*   **Maximum Wind Speed**: 10 m/s
*   **Flow Field Uniformity**: Post-sanding treatment of the contraction cone reduces test section Turbulence Intensity (T.I.) to below **1.6%**.
*   **Control Linearity**: High linear relationship ($R^2 = 0.9996$) between Arduino PWM duty cycle and average test section wind speed.
*   **Operating Stability**: Continuous 60-minute test shows 5-minute average wind speed fluctuations staying within a **$\pm 5\%$** error margin.

---

## 🚀 Getting Started

1. **Download CAD Files**: Clone this repository and navigate to the CAD directory to get the `.stl` files.
2. **3D Printing & Post-Processing**: Print the contraction cone parts and assemble them. **Apply wall putty to the interior walls and sand repeatedly until smooth** to ensure low turbulence intensity.
3. **Assemble Main Structure**: Connect the components in sequence: Straightener $\rightarrow$ Contraction Cone $\rightarrow$ Acrylic Test Section $\rightarrow$ Diffuser $\rightarrow$ Fan Power Section. Seal all joining edges to prevent air leaks. Secure the entire assembly onto your custom-built support frame.
4. **Wiring & Firmware Flashing**:
   * Connect the Arduino UNO, APO-L3 PWM driver, LRS-350-24 power supply, and Snow Fans according to the provided circuit diagram.
   * Open Arduino IDE and upload the control script to the Arduino UNO.
5. **Operation & Calibration**: Power on the system, send PWM signals to control fan speed, and use your measurement tools (e.g., Pitot tube) to calibrate the wind speed against the PWM output for your specific build environment.
