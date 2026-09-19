# Diffuser Section

This directory contains the CAD models, dimensional specifications, and assembly instructions for the Diffuser Section of the open-source wind tunnel.

The diffuser is a tapered expansion duct designed to gradually decelerate high-velocity airflow exiting the test section, reducing static pressure losses and preventing downstream wake instability.

---

## 📐 Dimensional Specifications

* **Total Length**: $120\text{ cm}$
* **Inlet Cross-Section**: $30\text{ cm} \times 30\text{ cm}$ (Matches the acrylic test section output)
* **Outlet Cross-Section**: Tapered expansion to fit the fan drive array housing
* **Wall Thickness**: $2\text{ cm}$ ($20\text{ mm}$) board/panel material construction
* **Duct Profile**: Linear geometric expansion optimized for stable pressure recovery

---

## 📂 Directory Contents

* **`Diffuser_Assembly.f3d`** (or `.step`): Full 3D CAD source files for Fusion 360.
* **`/STL`**: Printable adapter flanges, corner brackets, or panel joiners.
* **`Diffuser_Panels.pdf`**: Engineering cutting layout and dimensional drawings for $2\text{ cm}$ sheet material fabrication.

---

## 🛠️ Fabrication & Assembly Guidelines

Depending on your available tools and workspace, the 120 cm long diffuser can be built using sheet materials or 3D printed modular sections:

1. **Sheet Material Construction (Recommended)**:
   * **Materials**: $2\text{ cm}$ thick wood/MDF boards, acrylic panels, or dense plastic sheets.
   * **Cutting**: Cut 4 trapezoidal panels according to the dimensions in `Diffuser_Panels.pdf` (taking the $2\text{ cm}$ material thickness into account for edge overlaps).
   * **Joining**: Fasten panels using heavy-duty screws, 3D printed corner braces, or aluminum brackets.
2. **Air Tightness (Critical)**:
   * Apply silicone sealant or foam gasket tape along all internal longitudinal seams.
   * Air leaks in the diffuser section degrade fan suction efficiency and introduce flow turbulence.
3. **Fan Array Attachment**:
   * Mount the 4× Snow Fan array securely at the outlet flange. Ensure vibration-dampening rubber pads are placed between the diffuser housing and fan frame.

---

## ✏️ Customization & Modifications

> ⚠️ **Important Note:** If you are using different fan models, alternative board thicknesses, or a custom power array, you may need to adjust the outlet cross-section dimensions and panel edge joint geometries in the CAD source file (`.f3d`) prior to fabrication.
