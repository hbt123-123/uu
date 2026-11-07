// rea decompile_all
// name: FUN_1006bb148
// address: 0x1006bb148
// body: available
// range: 0x1006bb148-0x1006bba9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bb148(int *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  int *piVar21;
  long lVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  param_1[0x8c] = 1;
  piVar24 = (int *)(param_2 + 0xc);
  if (*piVar24 != 0) {
    FUN_1006df480(piVar24,(long)param_2 + 4);
    uVar10 = *(int *)((long)param_2 + 0x6c) - 1;
    if (uVar10 == 0) {
      lVar9 = 1;
    }
    else {
      lVar13 = -0x30e44323485a9b9d;
      lVar9 = 1;
      uVar14 = (ulong)uVar10;
      do {
        lVar2 = lVar13;
        if ((uVar14 & 1) == 0) {
          lVar2 = 1;
        }
        lVar9 = lVar2 * lVar9;
        lVar13 = lVar13 * lVar13;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 >> 1;
      } while (bVar1);
    }
    *(long *)(param_1 + 0xae) = lVar9;
  }
  lVar9 = 0;
  puVar20 = (uint *)((long)param_2 + 4);
  uVar10 = *puVar20;
  uVar14 = 1L << ((ulong)uVar10 & 0x3f);
  if (param_3 <= uVar14) {
    uVar14 = param_3;
  }
  if (param_3 == 0) {
    uVar14 = 1;
  }
  uVar15 = uVar14;
  if (0x1ffff < uVar14) {
    uVar15 = 0x20000;
  }
  uVar16 = 3;
  if (*(int *)((long)param_2 + 0x14) != 3) {
    uVar16 = 4;
  }
  uVar17 = 0x20000 - uVar15 >> 0xb;
  if (0x1ffff < uVar14) {
    uVar17 = 0;
  }
  uVar3 = 0;
  if (uVar16 != 0) {
    uVar3 = (uint)uVar15 / uVar16;
  }
  uVar19 = (ulong)uVar3;
  lVar13 = 0;
  if (param_5 == 1) {
    lVar13 = uVar15 + (uVar15 >> 8) + uVar17 + 1;
  }
  lVar2 = uVar15 + uVar14;
  if (param_5 != 1) {
    lVar2 = 0;
  }
  uVar16 = *(uint *)((long)param_2 + 0x1c);
  if (uVar16 != 1) {
    lVar9 = 4L << ((ulong)*(uint *)(param_2 + 1) & 0x3f);
  }
  lVar18 = 0x24608;
  if (*(int *)((long)param_2 + 0x14) == 3) {
    if (uVar16 < 7) {
      lVar18 = 0;
    }
    lVar9 = (4L << ((ulong)*(uint *)((long)param_2 + 0xc) & 0x3f)) + lVar9;
    if (uVar10 < 0x12) {
      if (uVar10 == 0) goto LAB_1006bb2d0;
      lVar22 = 4L << ((ulong)uVar10 & 0x3f);
    }
    else {
      lVar22 = 0x80000;
    }
  }
  else {
    if (uVar16 < 7) {
      lVar18 = 0;
    }
    lVar9 = (4L << ((ulong)*(uint *)((long)param_2 + 0xc) & 0x3f)) + lVar9;
LAB_1006bb2d0:
    lVar22 = 0;
  }
  uStack_78 = param_2[0xd];
  local_80 = *(undefined8 *)piVar24;
  local_70 = param_2[0xe];
  puVar4 = &local_80;
  FUN_1006df55c(puVar4,uVar15);
  bVar1 = 0xdf000000 < (ulong)(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xc2));
  param_1[0x5b] = param_1[0x5b] + 1;
  lVar25 = *(long *)(param_1 + 0x82);
  uStack_78 = param_2[0xd];
  local_80 = *(undefined8 *)piVar24;
  local_70 = param_2[0xe];
  puVar5 = &local_80;
  FUN_1006df528();
  lVar12 = 0x3be0;
  if (lVar25 != 0) {
    lVar12 = 0x4058;
  }
  uVar14 = (long)puVar5 +
           uVar19 * 0xb +
           uVar15 + lVar2 + lVar13 + lVar9 + lVar18 + lVar22 + (long)puVar4 * 0xc + lVar12 + 0x20;
  lVar9 = *(long *)(param_1 + 0x4e);
  uVar17 = *(long *)(param_1 + 0x50) - lVar9;
  if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x54)) < uVar14 * 3) {
    if (uVar14 <= uVar17) goto LAB_1006bb3d8;
LAB_1006bb4f0:
    if (*(long *)(param_1 + 0x82) != 0) {
      return;
    }
    uStack_78 = *(undefined8 *)(param_1 + 0x7e);
    local_80 = *(undefined8 *)(param_1 + 0x7c);
    local_70 = *(undefined8 *)(param_1 + 0x80);
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    FUN_1006b1828(lVar9,&local_80);
    uStack_78 = *(undefined8 *)(param_1 + 0x7e);
    local_80 = *(undefined8 *)(param_1 + 0x7c);
    local_70 = *(undefined8 *)(param_1 + 0x80);
    uVar17 = uVar14;
    FUN_1006b17b4(uVar14,&local_80);
    if (uVar17 == 0) {
      return;
    }
    lVar9 = uVar17 + uVar14;
    *(ulong *)(param_1 + 0x4e) = uVar17;
    *(long *)(param_1 + 0x50) = lVar9;
    param_1[0x5c] = 0;
    *(ulong *)(param_1 + 0x52) = uVar17;
    *(ulong *)(param_1 + 0x54) = uVar17;
    *(ulong *)(param_1 + 0x56) = uVar17;
    *(long *)(param_1 + 0x58) = lVar9;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    if ((long)uVar14 < 0x11f0) {
      param_1[0x5a] = 1;
      param_1[0xbc] = 0;
      param_1[0xbd] = 0;
      return;
    }
    lVar18 = uVar17 + 0x11f0;
    *(long *)(param_1 + 0x52) = lVar18;
    *(long *)(param_1 + 0x54) = lVar18;
    *(long *)(param_1 + 0x56) = lVar18;
    *(ulong *)(param_1 + 0xbc) = uVar17;
    if (uVar14 >> 5 < 0x11f) {
      param_1[0x5a] = 1;
      param_1[0xbe] = 0;
      param_1[0xbf] = 0;
      return;
    }
    lVar22 = uVar17 + 0x23e0;
    *(long *)(param_1 + 0x52) = lVar22;
    *(long *)(param_1 + 0x56) = lVar22;
    *(long *)(param_1 + 0xbe) = lVar18;
    if (uVar14 >> 5 < 0x1df) {
      lVar12 = 0;
      lVar18 = lVar22;
    }
    else {
      lVar18 = uVar17 + 0x3be0;
      *(long *)(param_1 + 0x52) = lVar18;
      *(long *)(param_1 + 0x56) = lVar18;
      lVar12 = lVar22;
    }
    *(long *)(param_1 + 0xf6) = lVar12;
    *(long *)(param_1 + 0x54) = lVar18;
    *(long *)(param_1 + 0x58) = lVar9;
    bVar1 = true;
    param_1[0x5a] = 0;
  }
  else {
    if (uVar17 < uVar14 || 0x80 < param_1[0x5b]) goto LAB_1006bb4f0;
LAB_1006bb3d8:
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x52);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    param_1[0x5a] = 0;
    if (1 < (uint)param_1[0x5c]) {
      param_1[0x5c] = 1;
    }
  }
  piVar23 = param_1 + 0x5c;
  piVar21 = param_1 + 0x5a;
  uVar26 = *param_2;
  *(undefined8 *)(param_1 + 0x2a) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar26;
  uVar27 = param_2[3];
  uVar26 = param_2[2];
  uVar29 = param_2[5];
  uVar28 = param_2[4];
  uVar30 = param_2[6];
  uVar32 = param_2[9];
  uVar31 = param_2[8];
  *(undefined8 *)(param_1 + 0x36) = param_2[7];
  *(undefined8 *)(param_1 + 0x34) = uVar30;
  *(undefined8 *)(param_1 + 0x3a) = uVar32;
  *(undefined8 *)(param_1 + 0x38) = uVar31;
  *(undefined8 *)(param_1 + 0x2e) = uVar27;
  *(undefined8 *)(param_1 + 0x2c) = uVar26;
  *(undefined8 *)(param_1 + 0x32) = uVar29;
  *(undefined8 *)(param_1 + 0x30) = uVar28;
  uVar27 = param_2[0xb];
  uVar26 = param_2[10];
  uVar29 = param_2[0xd];
  uVar28 = param_2[0xc];
  uVar30 = param_2[0xe];
  uVar32 = param_2[0x11];
  uVar31 = param_2[0x10];
  *(undefined8 *)(param_1 + 0x46) = param_2[0xf];
  *(undefined8 *)(param_1 + 0x44) = uVar30;
  *(undefined8 *)(param_1 + 0x4a) = uVar32;
  *(undefined8 *)(param_1 + 0x48) = uVar31;
  *(undefined8 *)(param_1 + 0x3e) = uVar27;
  *(undefined8 *)(param_1 + 0x3c) = uVar26;
  *(undefined8 *)(param_1 + 0x42) = uVar29;
  *(undefined8 *)(param_1 + 0x40) = uVar28;
  uVar27 = *(undefined8 *)((long)param_2 + 0xc);
  uVar26 = *(undefined8 *)puVar20;
  uVar28 = param_2[2];
  *(undefined8 *)(param_1 + 0xf3) = param_2[3];
  *(undefined8 *)(param_1 + 0xf1) = uVar28;
  *(undefined8 *)(param_1 + 0xf0) = uVar27;
  *(undefined8 *)(param_1 + 0xee) = uVar26;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(ulong *)(param_1 + 0x60) = param_3 + 1;
  if (param_3 == 0xffffffffffffffff) {
    param_1[0x30] = 0;
  }
  *(ulong *)(param_1 + 0x5e) = uVar15;
  FUN_1006b114c(param_1 + 0x66,0);
  *param_1 = 1;
  param_1[0x4c] = 0;
  lVar9 = *(long *)(param_1 + 0xbc);
  *(undefined8 *)(lVar9 + 0x11e8) = 0x800000004;
  *(undefined4 *)(lVar9 + 0x400) = 0;
  *(undefined8 *)(lVar9 + 0x11e0) = 0x100000000;
  *(undefined8 *)(lVar9 + 0x11d8) = 0;
  uVar14 = *(ulong *)(param_1 + 0x54);
  if (param_1[0x5c] == 0) {
    *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x52);
    param_1[0x5c] = 1;
    uVar11 = (*(ulong *)(param_1 + 0x58) - uVar15) - 0x20;
    uVar17 = *(ulong *)(param_1 + 0x58);
    if (uVar14 <= uVar11) goto LAB_1006bb524;
LAB_1006bb4bc:
    uVar11 = uVar17;
    *piVar21 = 1;
    uVar17 = 0;
  }
  else {
    uVar11 = (*(ulong *)(param_1 + 0x58) - uVar15) - 0x20;
    uVar17 = *(ulong *)(param_1 + 0x58);
    if (uVar11 < uVar14) goto LAB_1006bb4bc;
LAB_1006bb524:
    if (uVar11 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar11;
    }
    *(ulong *)(param_1 + 0x58) = uVar11;
    uVar17 = uVar11;
  }
  *(ulong *)(param_1 + 0x92) = uVar17;
  *(ulong *)(param_1 + 0x9e) = uVar15;
  uVar15 = uVar11 - lVar2;
  *(long *)(param_1 + 0xfa) = lVar2;
  if (uVar15 < uVar14) {
    *piVar21 = 1;
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
    *(long *)(param_1 + 0x104) = lVar13;
    uVar17 = uVar11 - lVar13;
    uVar15 = uVar11;
    if (uVar14 <= uVar17) goto LAB_1006bb580;
LAB_1006bb5dc:
    uVar17 = uVar15;
    *piVar21 = 1;
    param_1[0x102] = 0;
    param_1[0x103] = 0;
    if (*piVar24 != 0) goto LAB_1006bb5f8;
LAB_1006bb5a0:
    if (*param_1 != 1) goto LAB_1006bb64c;
LAB_1006bb644:
    if (param_1[0x40] != 0) goto LAB_1006bb64c;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    *(ulong *)(param_1 + 0x9c) = uVar19;
    uVar14 = *(ulong *)(param_1 + 0x54);
    uVar10 = param_1[0x5c];
    if (uVar10 == 0) goto LAB_1006bb780;
LAB_1006bb65c:
    uVar15 = *(ulong *)(param_1 + 0x58) - uVar19;
    uVar17 = *(ulong *)(param_1 + 0x58);
    if (uVar15 < uVar14) goto LAB_1006bb670;
LAB_1006bb7a4:
    if (uVar15 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar15;
    }
    *(ulong *)(param_1 + 0x58) = uVar15;
    *(ulong *)(param_1 + 0x96) = uVar15;
    uVar17 = uVar15 - uVar19;
    if (uVar17 < uVar14) goto LAB_1006bb7c8;
LAB_1006bb690:
    if (uVar17 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar17;
    }
    *(ulong *)(param_1 + 0x58) = uVar17;
    *(ulong *)(param_1 + 0x98) = uVar17;
    uVar11 = uVar17 - uVar19;
    uVar15 = uVar17;
    if (uVar14 <= uVar11) goto LAB_1006bb6b4;
LAB_1006bb7e8:
    uVar11 = uVar15;
    *piVar21 = 1;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    if (uVar10 < 2) goto LAB_1006bb804;
LAB_1006bb6d4:
    uVar11 = uVar11 + uVar19 * -8;
    if (uVar11 < uVar14) goto LAB_1006bb6e0;
LAB_1006bb830:
    if (uVar11 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar11;
    }
    *(ulong *)(param_1 + 0x58) = uVar11;
  }
  else {
    if (uVar15 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar15;
    }
    *(ulong *)(param_1 + 0x58) = uVar15;
    *(ulong *)(param_1 + 0xf8) = uVar15;
    *(long *)(param_1 + 0x104) = lVar13;
    uVar17 = uVar15 - lVar13;
    if (uVar17 < uVar14) goto LAB_1006bb5dc;
LAB_1006bb580:
    if (uVar17 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar17;
    }
    *(ulong *)(param_1 + 0x58) = uVar17;
    *(ulong *)(param_1 + 0x102) = uVar17;
    if (*piVar24 == 0) goto LAB_1006bb5a0;
LAB_1006bb5f8:
    sVar8 = 1L << ((ulong)(uint)(*(int *)((long)param_2 + 100) - *(int *)(param_2 + 0xd)) & 0x3f);
    pvVar7 = (void *)(uVar17 - sVar8);
    if (pvVar7 < *(void **)(param_1 + 0x56)) {
      *(void **)(param_1 + 0x56) = pvVar7;
    }
    *(void **)(param_1 + 0x58) = pvVar7;
    *(void **)(param_1 + 0xac) = pvVar7;
    _bzero(pvVar7,sVar8);
    if (*param_1 == 1) goto LAB_1006bb644;
LAB_1006bb64c:
    *(ulong *)(param_1 + 0x9c) = uVar19;
    uVar14 = *(ulong *)(param_1 + 0x54);
    uVar10 = param_1[0x5c];
    if (uVar10 != 0) goto LAB_1006bb65c;
LAB_1006bb780:
    *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x52);
    uVar10 = 1;
    param_1[0x5c] = 1;
    uVar15 = *(ulong *)(param_1 + 0x58) - uVar19;
    uVar17 = *(ulong *)(param_1 + 0x58);
    if (uVar14 <= uVar15) goto LAB_1006bb7a4;
LAB_1006bb670:
    uVar15 = uVar17;
    *piVar21 = 1;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    uVar17 = uVar15 - uVar19;
    if (uVar14 <= uVar17) goto LAB_1006bb690;
LAB_1006bb7c8:
    *piVar21 = 1;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    uVar11 = uVar15 - uVar19;
    if (uVar11 < uVar14) goto LAB_1006bb7e8;
LAB_1006bb6b4:
    if (uVar11 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar11;
    }
    *(ulong *)(param_1 + 0x58) = uVar11;
    *(ulong *)(param_1 + 0x9a) = uVar11;
    if (1 < uVar10) goto LAB_1006bb6d4;
LAB_1006bb804:
    uVar11 = uVar11 & 0xfffffffffffffffc;
    *(ulong *)(param_1 + 0x58) = uVar11;
    if (uVar11 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar11;
    }
    *piVar23 = 2;
    uVar11 = uVar11 + uVar19 * -8;
    if (uVar14 <= uVar11) goto LAB_1006bb830;
LAB_1006bb6e0:
    uVar11 = 0;
    *piVar21 = 1;
  }
  *(ulong *)(param_1 + 0x8e) = uVar11;
  piVar6 = param_1 + 0xc0;
  FUN_1006bba9c(piVar6,param_1 + 0x4e,puVar20,param_4,bVar1,1);
  if ((int *)0xffffffffffffff88 < piVar6) {
    return;
  }
  if (*piVar24 == 0) {
    return;
  }
  sVar8 = 8L << ((ulong)*(uint *)((long)param_2 + 100) & 0x3f);
  if ((uint)param_1[0x5c] < 2) {
    if (param_1[0x5c] == 0) {
      uVar14 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
      *(ulong *)(param_1 + 0x56) = *(ulong *)(param_1 + 0x52);
      *(ulong *)(param_1 + 0x58) = uVar14;
      if (uVar14 < *(ulong *)(param_1 + 0x52)) goto LAB_1006bb8a4;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
      *(ulong *)(param_1 + 0x58) = uVar14;
      if (uVar14 < *(ulong *)(param_1 + 0x56)) {
LAB_1006bb8a4:
        *(ulong *)(param_1 + 0x56) = uVar14;
      }
    }
    *piVar23 = 2;
    pvVar7 = (void *)(uVar14 - sVar8);
    if (*(void **)(param_1 + 0x54) <= pvVar7) goto LAB_1006bb8bc;
LAB_1006bb92c:
    *piVar21 = 1;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    _bzero((void *)0x0,sVar8);
    uVar14 = *(ulong *)(param_1 + 0x54);
    uVar10 = param_1[0x5c];
    if (uVar10 < 2) goto LAB_1006bb950;
LAB_1006bb8e8:
    uVar15 = *(long *)(param_1 + 0x58) + (long)puVar4 * -0xc;
    if (uVar15 < uVar14) {
LAB_1006bb984:
      uVar15 = 0;
      *piVar21 = 1;
      goto LAB_1006bb990;
    }
  }
  else {
    pvVar7 = (void *)(*(long *)(param_1 + 0x58) - sVar8);
    if (pvVar7 < *(void **)(param_1 + 0x54)) goto LAB_1006bb92c;
LAB_1006bb8bc:
    if (pvVar7 < *(void **)(param_1 + 0x56)) {
      *(void **)(param_1 + 0x56) = pvVar7;
    }
    *(void **)(param_1 + 0x58) = pvVar7;
    *(void **)(param_1 + 0xaa) = pvVar7;
    _bzero(pvVar7,sVar8);
    uVar14 = *(ulong *)(param_1 + 0x54);
    uVar10 = param_1[0x5c];
    if (1 < uVar10) goto LAB_1006bb8e8;
LAB_1006bb950:
    if (uVar10 == 0) {
      uVar15 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
      *(ulong *)(param_1 + 0x56) = *(ulong *)(param_1 + 0x52);
      *(ulong *)(param_1 + 0x58) = uVar15;
      if (uVar15 < *(ulong *)(param_1 + 0x52)) goto LAB_1006bb968;
    }
    else {
      uVar15 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
      *(ulong *)(param_1 + 0x58) = uVar15;
      if (uVar15 < *(ulong *)(param_1 + 0x56)) {
LAB_1006bb968:
        *(ulong *)(param_1 + 0x56) = uVar15;
      }
    }
    *piVar23 = 2;
    uVar15 = uVar15 + (long)puVar4 * -0xc;
    if (uVar15 < uVar14) goto LAB_1006bb984;
  }
  if (uVar15 < *(ulong *)(param_1 + 0x56)) {
    *(ulong *)(param_1 + 0x56) = uVar15;
  }
  *(ulong *)(param_1 + 0x58) = uVar15;
LAB_1006bb990:
  *(ulong *)(param_1 + 0xb0) = uVar15;
  *(undefined8 **)(param_1 + 0xb2) = puVar4;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa9] = -param_1[0xa4];
  param_1[0xa8] = -param_1[0xa4];
  return;
}

