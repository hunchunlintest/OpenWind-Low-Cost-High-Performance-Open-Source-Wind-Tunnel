# Straightening Section

This directory contains the CAD models, manufacturing specs, and assembly instructions for the Straightening Section located at the wind tunnel inlet.

The straightening section stabilizes incoming ambient air by eliminating large-scale eddies, swirl, and non-uniform lateral velocities before the air enters the contraction cone.

---

## 📐 Dimensional Specifications

* **Outer Frame Cross-Section**: $60\text{ cm} \times 60\text{ cm}$ (Matches the inlet opening of the contraction cone)
* **Honeycomb Cell Diameter**: $10\text{ mm} (Recommended cell size)
* **Honeycomb Depth**: $13\text{ cm}
* **Damping Mesh / Screen**: Fine stainless steel mesh placed downstream/upstream of the honeycomb

---

---

## 🛠️ Material & Manufacturing Options

You can build the straightening section using two primary methods:

1. **Commercial Honeycomb Core + 3D Printed Frame (Recommended)**:
   * **Honeycomb Material**: Aluminum or plastic honeycomb sheet (cut to fit $60\text{ cm} \times 60\text{ cm}$).
   * **Assembly**: Secure the commercial honeycomb block into the 3D printed frame using structural brackets.
2. **Fully 3D Printed Modular Honeycomb Grid**:
   * If commercial honeycomb is unavailable, print the modular hexagonal grid sections included in the `/STL` folder and glue them together.

---

## ✏️ Customization & Modifications

> ⚠️ **Important Note:** You can modify the outer frame flange dimensions or bolt pattern in `Honeycomb_Frame.f3d` to match custom intake screens or alternative honeycomb cell sizes.
