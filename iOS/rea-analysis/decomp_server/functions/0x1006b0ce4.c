// rea decompile_all
// name: FUN_1006b0ce4
// address: 0x1006b0ce4
// body: available
// range: 0x1006b0ce4-0x1006b10bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b0ce4(uint *param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  
  puVar1 = (uint *)((long)param_1 + param_2);
  if (((ulong)param_1 & 7) == 0) {
    if (param_2 < 0x20) {
      uVar9 = param_3 + 0x27d4eb2f165667c5 + param_2;
      puVar8 = param_1 + 2;
      puVar10 = param_1;
    }
    else {
      uVar9 = param_3 + 0x60ea27eeadc0b5d6;
      uVar2 = param_3 + 0xc2b2ae3d27d4eb4f;
      uVar11 = param_3 + 0x61c8864e7a143579;
      puVar10 = param_1;
      do {
        puVar8 = puVar10;
        uVar9 = uVar9 + *(long *)puVar8 * -0x3d4d51c2d82b14b1;
        uVar4 = uVar9 >> 0x21 | uVar9 * 0x80000000;
        uVar9 = uVar4 * -0x61c8864e7a143579;
        uVar2 = uVar2 + *(long *)(puVar8 + 2) * -0x3d4d51c2d82b14b1;
        uVar3 = uVar2 >> 0x21 | uVar2 * 0x80000000;
        uVar2 = uVar3 * -0x61c8864e7a143579;
        param_3 = param_3 + *(long *)(puVar8 + 4) * -0x3d4d51c2d82b14b1;
        uVar6 = param_3 >> 0x21 | param_3 * 0x80000000;
        param_3 = uVar6 * -0x61c8864e7a143579;
        uVar11 = uVar11 + *(long *)(puVar8 + 6) * -0x3d4d51c2d82b14b1;
        uVar5 = uVar11 >> 0x21 | uVar11 * 0x80000000;
        uVar11 = uVar5 * -0x61c8864e7a143579;
        puVar10 = puVar8 + 8;
      } while (puVar10 <= puVar1 + -8);
      uVar9 = (((((uVar2 >> 0x39 | uVar3 * 0x1bbcd8c2f5e54380) +
                  (uVar9 >> 0x3f | uVar4 * 0x3c6ef3630bd7950e) +
                  (param_3 >> 0x34 | uVar6 * 0x779b185ebca87000) +
                  (uVar11 >> 0x2e | uVar5 * -0x1939e850d5e40000) ^
                 (uVar4 * -0x210ca4fef0869357 >> 0x21 | uVar4 * -0x784349ab80000000) *
                 -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
                (uVar3 * -0x210ca4fef0869357 >> 0x21 | uVar3 * -0x784349ab80000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar6 * -0x210ca4fef0869357 >> 0x21 | uVar6 * -0x784349ab80000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar5 * -0x210ca4fef0869357 >> 0x21 | uVar5 * -0x784349ab80000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d + param_2;
      puVar8 = puVar8 + 10;
    }
    while (puVar8 <= puVar1) {
      uVar9 = ((ulong)(*(long *)puVar10 * -0x3d4d51c2d82b14b1) >> 0x21 |
              *(long *)puVar10 * -0x6c158a5880000000) * -0x61c8864e7a143579 ^ uVar9;
      uVar9 = (uVar9 >> 0x25 | uVar9 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar8 = puVar10 + 4;
      puVar10 = puVar10 + 2;
    }
    if (puVar10 + 1 <= puVar1) {
      uVar9 = (ulong)*puVar10 * -0x61c8864e7a143579 ^ uVar9;
      uVar9 = (uVar9 >> 0x29 | uVar9 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
      puVar10 = puVar10 + 1;
    }
    if (puVar10 < puVar1) {
      lVar7 = (long)param_1 + (param_2 - (long)puVar10);
      do {
        uVar9 = (ulong)(byte)*puVar10 * 0x27d4eb2f165667c5 ^ uVar9;
        uVar9 = (uVar9 >> 0x35 | uVar9 << 0xb) * -0x61c8864e7a143579;
        lVar7 = lVar7 + -1;
        puVar10 = (uint *)((long)puVar10 + 1);
      } while (lVar7 != 0);
    }
  }
  else {
    if (param_2 < 0x20) {
      uVar9 = param_3 + 0x27d4eb2f165667c5 + param_2;
      puVar8 = param_1 + 2;
      puVar10 = param_1;
    }
    else {
      uVar9 = param_3 + 0x60ea27eeadc0b5d6;
      uVar2 = param_3 + 0xc2b2ae3d27d4eb4f;
      uVar11 = param_3 + 0x61c8864e7a143579;
      puVar10 = param_1;
      do {
        puVar8 = puVar10;
        uVar9 = uVar9 + *(long *)puVar8 * -0x3d4d51c2d82b14b1;
        uVar4 = uVar9 >> 0x21 | uVar9 * 0x80000000;
        uVar9 = uVar4 * -0x61c8864e7a143579;
        uVar2 = uVar2 + *(long *)(puVar8 + 2) * -0x3d4d51c2d82b14b1;
        uVar3 = uVar2 >> 0x21 | uVar2 * 0x80000000;
        uVar2 = uVar3 * -0x61c8864e7a143579;
        param_3 = param_3 + *(long *)(puVar8 + 4) * -0x3d4d51c2d82b14b1;
        uVar6 = param_3 >> 0x21 | param_3 * 0x80000000;
        param_3 = uVar6 * -0x61c8864e7a143579;
        uVar11 = uVar11 + *(long *)(puVar8 + 6) * -0x3d4d51c2d82b14b1;
        uVar5 = uVar11 >> 0x21 | uVar11 * 0x80000000;
        uVar11 = uVar5 * -0x61c8864e7a143579;
        puVar10 = puVar8 + 8;
      } while (puVar10 <= puVar1 + -8);
      uVar9 = (((((uVar2 >> 0x39 | uVar3 * 0x1bbcd8c2f5e54380) +
                  (uVar9 >> 0x3f | uVar4 * 0x3c6ef3630bd7950e) +
                  (param_3 >> 0x34 | uVar6 * 0x779b185ebca87000) +
                  (uVar11 >> 0x2e | uVar5 * -0x1939e850d5e40000) ^
                 (uVar4 * -0x210ca4fef0869357 >> 0x21 | uVar4 * -0x784349ab80000000) *
                 -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
                (uVar3 * -0x210ca4fef0869357 >> 0x21 | uVar3 * -0x784349ab80000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar6 * -0x210ca4fef0869357 >> 0x21 | uVar6 * -0x784349ab80000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar5 * -0x210ca4fef0869357 >> 0x21 | uVar5 * -0x784349ab80000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d + param_2;
      puVar8 = puVar8 + 10;
    }
    while (puVar8 <= puVar1) {
      uVar9 = ((ulong)(*(long *)puVar10 * -0x3d4d51c2d82b14b1) >> 0x21 |
              *(long *)puVar10 * -0x6c158a5880000000) * -0x61c8864e7a143579 ^ uVar9;
      uVar9 = (uVar9 >> 0x25 | uVar9 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar8 = puVar10 + 4;
      puVar10 = puVar10 + 2;
    }
    if (puVar10 + 1 <= puVar1) {
      uVar9 = (ulong)*puVar10 * -0x61c8864e7a143579 ^ uVar9;
      uVar9 = (uVar9 >> 0x29 | uVar9 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
      puVar10 = puVar10 + 1;
    }
    if (puVar10 < puVar1) {
      lVar7 = (long)param_1 + (param_2 - (long)puVar10);
      do {
        uVar9 = (ulong)(byte)*puVar10 * 0x27d4eb2f165667c5 ^ uVar9;
        uVar9 = (uVar9 >> 0x35 | uVar9 << 0xb) * -0x61c8864e7a143579;
        lVar7 = lVar7 + -1;
        puVar10 = (uint *)((long)puVar10 + 1);
      } while (lVar7 != 0);
    }
  }
  uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3d4d51c2d82b14b1;
  uVar9 = (uVar9 ^ uVar9 >> 0x1d) * 0x165667b19e3779f9;
  return uVar9 ^ uVar9 >> 0x20;
}

