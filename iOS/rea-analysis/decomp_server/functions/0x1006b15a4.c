// rea decompile_all
// name: FUN_1006b15a4
// address: 0x1006b15a4
// body: available
// range: 0x1006b15a4-0x1006b1747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b15a4(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  
  puVar1 = param_1 + 5;
  uVar5 = (ulong)(uint)param_1[9];
  if (*param_1 < 0x20) {
    lVar9 = param_1[3] + 0x27d4eb2f165667c5;
  }
  else {
    uVar6 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    uVar4 = param_1[4];
    lVar9 = (((((uVar3 >> 0x39 | uVar3 << 7) + (uVar6 >> 0x3f | uVar6 << 1) +
                (uVar2 >> 0x34 | uVar2 << 0xc) + (uVar4 >> 0x2e | uVar4 << 0x12) ^
               (uVar6 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar6 * -0x6c158a5880000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar3 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar3 * -0x6c158a5880000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
             (uVar2 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar2 * -0x6c158a5880000000) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar4 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar4 * -0x6c158a5880000000) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  uVar6 = lVar9 + *param_1;
  puVar7 = puVar1;
  puVar10 = puVar1;
  if (7 < (uint)param_1[9]) {
    do {
      puVar10 = puVar7 + 1;
      puVar8 = puVar7 + 2;
      uVar6 = (*puVar7 * -0x3d4d51c2d82b14b1 >> 0x21 | *puVar7 * -0x6c158a5880000000) *
              -0x61c8864e7a143579 ^ uVar6;
      uVar6 = (uVar6 >> 0x25 | uVar6 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar7 = puVar10;
    } while (puVar8 <= (ulong *)((long)puVar1 + uVar5));
  }
  if ((ulong *)((long)puVar10 + 4U) <= (ulong *)((long)puVar1 + uVar5)) {
    uVar6 = (ulong)(uint)*puVar10 * -0x61c8864e7a143579 ^ uVar6;
    uVar6 = (uVar6 >> 0x29 | uVar6 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    puVar10 = (ulong *)((long)puVar10 + 4U);
  }
  if (puVar10 < (ulong *)((long)puVar1 + uVar5)) {
    lVar9 = (long)param_1 + (uVar5 - (long)puVar10) + 0x28;
    do {
      uVar6 = (ulong)(byte)*puVar10 * 0x27d4eb2f165667c5 ^ uVar6;
      uVar6 = (uVar6 >> 0x35 | uVar6 << 0xb) * -0x61c8864e7a143579;
      lVar9 = lVar9 + -1;
      puVar10 = (ulong *)((long)puVar10 + 1);
    } while (lVar9 != 0);
  }
  uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0x3d4d51c2d82b14b1;
  uVar5 = (uVar5 ^ uVar5 >> 0x1d) * 0x165667b19e3779f9;
  return uVar5 ^ uVar5 >> 0x20;
}

