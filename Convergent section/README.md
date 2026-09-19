# Contraction Section

This directory contains the CAD models, 3D printing files, and post-processing instructions for the contraction cone section of the open-source wind tunnel.

The contraction cone is a critical component designed to accelerate incoming airflow and significantly improve flow uniformity while minimizing turbulence intensity before entering the test section.

---

## 📂 Directory Contents

*   **`/STL`**: Printable 3D mesh files (`.stl`) split into sub-blocks for standard desktop 3D printers.

---
## 🛠️ Manufacturing & Post-Processing (Crucial Step)

The interior surface quality of the contraction cone directly impacts the turbulence intensity (T.I.) in the test section. To achieve a T.I. below **1.6%**, follow these post-processing steps:

1. **3D Printing**:
   * **Material**: PLA (or ABS/PETG).
   * **Infill**: 15–20% is sufficient.
     
2. **Assembly**:
   * Assemble the printed sub-blocks using M8 screw.
   * Ensure structural alignment along the interior contraction profile.
     
3. **Surface Smoothing (Required)**:
   * **Spackle / Wall Putty**: Apply wall putty or filler evenly across all interior seams and layer lines.
   * **Sanding**: Repeatedly sand the interior surface using progressively finer sandpaper (e.g., 200 $\rightarrow$ 400 $\rightarrow$ 800 grit) until completely smooth.
   * **Finishing**: Apply a coat of primer or clear spray paint to seal the surface.

---

## ✏️ Customization & Modifications

> ⚠️ **Important Note:** Depending on your 3D printer's build volume or specific structural needs, you may need to modify the CAD models (`.f3d` / `.step`) to adjust the section splitting or wall thickness before printing.
