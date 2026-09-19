# Power Section

This directory contains the specification, wiring guidelines, and safety instructions for the Power Section of the open-source wind tunnel.

The power section serves as the primary suction power source, drawing air through the entire tunnel system using a multi-fan array with integrated power supply and PWM speed control electronics.

---

## 📂 Directory Contents

| File Name | Format | Description |
| :--- | :---: | :--- |


---

## 📐 Hardware Specifications & Configuration

* **Fan Matrix**: $2 \times 2$ grid array (Total of 4 high-performance exhaust fans)
* **Fan Frame Dimensions**: $20\text{ cm} \times 20\text{ cm}$ per fan (Total cross-section area fits the outlet of the diffuser)
* **Drive Type**: Pull-through (suction) configuration mounted at the downstream exit of the diffuser
* **Operating Voltage**: 12V / 24V DC (depending on selected fan model)

---

## ⚡ Electrical & Control System

The electrical system consists of three core components: Power Supply Unit (PSU), Speed Controller, and Safety Circuitry.

### 1. Power Supply Unit (PSU)
* **Voltage Rating**: Matches fan requirements (typically 12V or 24V DC).
* **Current Capacity**: Ensure the PSU rated current ($A$) exceeds the total combined peak current draw of all 4 fans by at least **20–30%** (Safety Margin).

### 2. Speed Control (PWM)
* **Control Signal**: 4-wire PWM (Pulse Width Modulation) signal generator or microcontroller (e.g., Arduino / ESP32) for precise wind speed tuning.
* **Synchronization**: All 4 fans must receive identical PWM signal duty cycles to maintain uniform suction pressure across the exit boundary.

### 3. Wiring Guidelines
* **Bus Wiring**: Wire power in parallel across all 4 fans using appropriate gauge wire (e.g., 16–18 AWG) to prevent voltage drops.
* **Common Ground**: Ensure a common ground (GND) is shared between the PWM controller and the main power supply.

---

## 🛠️ Assembly & Safety Guidelines

1. **Vibration Isolation**:
   * Mount rubber gaskets or silicone dampeners between the fan housing and the diffuser mounting flange to minimize structural vibration and resonance.
2. **Safety Grilles / Finger Guards**:
   * **Mandatory**: Install protective wire mesh or fan guards on the rear exhaust face to prevent accidental contact with spinning blades.
3. **Thermal Management**:
   * Enclose all control electronics and terminal blocks inside a ventilated, flame-retardant junction box.

---

## ✏️ Customization & Modifications

> ⚠️ **Important Note:** You can adapt this power section for different fan dimensions or higher-voltage brushless motors (EDF) by adjusting the power supply capacity and speed controller specifications accordingly.
