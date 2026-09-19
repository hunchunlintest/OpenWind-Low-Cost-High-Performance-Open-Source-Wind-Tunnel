# Contraction Section

This directory contains the CAD models, 3D printing files, and post-processing instructions for the contraction cone section of the open-source wind tunnel.

The contraction cone is a critical component designed to accelerate incoming airflow and significantly improve flow uniformity while minimizing turbulence intensity before entering the test section.

---

## 📂 Directory Contents & 3D Printing Quantities

The contraction cone is split into 8 different zones and sub-blocks to fit standard desktop 3D printer build volumes. 

> ⚠️ **Note on File Naming:** The number in parentheses `(xN)` inside the filename indicates the **required quantity to print** for that specific component.

| File Name | Required Quantity | Description |
| :--- | :---: | :--- |
| **`WINDZONE1-1(x4).stl`** | 4 | Contraction Cone Zone 1 - Part 1 |
| **`WINDZONE1-2(x8).stl`** | 8 | Contraction Cone Zone 1 - Part 2 |
| **`WINDZONE2-1(x4).stl`** | 4 | Contraction Cone Zone 2 - Part 1 |
| **`WINDZONE2-2(x8).stl`** | 8 | Contraction Cone Zone 2 - Part 2 |
| **`WINDZONE3-1(x4).stl`** | 4 | Contraction Cone Zone 3 - Part 1 |
| **`WINDZONE3-2(x4).stl`** | 4 | Contraction Cone Zone 3 - Part 2 |
| **`WINDZONE4-1(x4).stl`** | 4 | Contraction Cone Zone 4 - Part 1 |
| **`WINDZONE4-2(x4).stl`** | 4 | Contraction Cone Zone 4 - Part 2 |

* **Total Printed Parts**: 40 individual pieces.

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

> ⚠️ **Important Note:** Depending on your 3D printer's build volume or specific structural needs, you may need to modify the CAD models to adjust the section splitting or wall thickness before printing.
