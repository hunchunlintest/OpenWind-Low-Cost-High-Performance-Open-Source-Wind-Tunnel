# 🌪️ Simulation & CFD Analysis

This directory contains Computational Fluid Dynamics (CFD) simulation results used to verify and optimize the aerodynamic performance of the OpenWind modular wind tunnel.
## 💻 Simulation Software
The modeling, simulation, and visualization were conducted using **ANSYS Discovery**, leveraging its rapid simulation capabilities to iterate on the contraction cone and diffuser designs.

## 📊 Key Results (Visualizations)
Below are two key visualization results from our ANSYS Discovery analysis.

<!-- IMPORTANT: Please rename the image filenames in this directory to match your actual uploaded file names and replace them in the paths below (e.g., replace './image_7.png' with './sim_full_streamlines.png'). -->

### 1. Wind Tunnel Flow Path Streamlines (Overview)
![ANSYS Discovery Flow Path Streamlines](./image_7.png)

*   **Description**: This full wind tunnel overview displays flow path streamlines colored by velocity magnitude. It demonstrates:
    *   Efficient flow acceleration through the 3D-printed contraction cone.
    *   Smooth flow development into the test section, validating the overall modular design.
    *   Effective velocity recovery within the diffuser section before exhaust.
*   **Result**: The simulation indicates a smooth velocity increase from the straightener to the test section.

### 2. Test Section Velocity Contour (Cross-Section)
![ANSYS Discovery Velocity Contour](./image_8.png)

*   **Description**: This is a cross-sectional velocity contour plot taken directly from the acrylic test section. It is designed to verify:
    *   High flow uniformity across the 900 cm² (30 cm x 30 cm) working area.
    *   Minimal turbulence and low velocity boundary layers at the square edges.
*   **Result**: The core region shows excellent velocity uniformity, with a maximum velocity of approximately **$10.2\text{ m/s}$**, validating the design's ability to achieve the target maximum wind speed.

---

## 📁 Full Simulation Files Request

> **⚠️ Notice regarding raw files:**
> Due to GitHub's file size limitations, the original complete ANSYS Discovery simulation files (project databases, full result sets, and volumetric data) **exceed the 25MB upload limit** and are not hosted directly in this repository.

If you require the original simulation data for academic verification, joint research, or your own modifications, please feel free to contact me directly:

📧 **Email**: [edisonlin2009@proton.me](mailto:edisonlin2009@proton.me)
