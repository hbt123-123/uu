// rea decompile_all
// name: FUN_1002deab4
// address: 0x1002deab4
// body: available
// range: 0x1002deab4-0x1002deeeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_1002deab4(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  uint *puVar12;
  void *pvVar13;
  uint *puVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  uint uVar24;
  
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar19 = *(long *)(lVar5 + -8);
  pcVar22 = *(code **)(lVar19 + 0x30);
  pvVar6 = param_1;
  (*pcVar22)(param_1,1,lVar5);
  pvVar7 = param_2;
  (*pcVar22)(param_2,1,lVar5);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 != 0) {
      (**(code **)(lVar19 + 8))(param_1,lVar5);
      goto LAB_1002deb60;
    }
    (**(code **)(lVar19 + 0x18))(param_1,param_2,lVar5);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar19 + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar19 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_1002deb60:
    sVar11 = *(size_t *)(lVar19 + 0x40);
    if (*(int *)(lVar19 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy(param_1,param_2,sVar11);
  }
  lVar5 = *(long *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  puVar15 = (undefined8 *)(lVar5 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar20 = (undefined8 *)(lVar5 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar15 = *puVar20;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)*(byte *)(lVar19 + 0x50);
  pvVar16 = (void *)(uVar8 + 8 + (long)puVar15 & (uVar8 ^ 0xffffffffffffffff));
  pvVar13 = (void *)(uVar8 + 8 + (long)puVar20 & (uVar8 ^ 0xffffffffffffffff));
  pcVar22 = *(code **)(lVar19 + 0x30);
  pvVar6 = pvVar16;
  (*pcVar22)(pvVar16,1,lVar5);
  pvVar7 = pvVar13;
  (*pcVar22)(pvVar13,1,lVar5);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 != 0) {
      (**(code **)(lVar19 + 8))(pvVar16,lVar5);
      goto LAB_1002dec54;
    }
    (**(code **)(lVar19 + 0x18))(pvVar16,pvVar13,lVar5);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar19 + 0x10))(pvVar16,pvVar13,lVar5);
    (**(code **)(lVar19 + 0x38))(pvVar16,0,1,lVar5);
  }
  else {
LAB_1002dec54:
    sVar11 = *(size_t *)(lVar19 + 0x40);
    if (*(int *)(lVar19 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy(pvVar16,pvVar13,sVar11);
  }
  lVar5 = *(long *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  puVar15 = (undefined8 *)((long)pvVar16 + lVar5 + 7 & 0xfffffffffffffff8);
  puVar20 = (undefined8 *)((long)pvVar13 + lVar5 + 7 & 0xfffffffffffffff8);
  uVar8 = puVar20[1];
  if ((puVar15[1] & 0x3000000000000000) == 0) {
    if ((uVar8 & 0x3000000000000000) != 0) {
      FUN_100006cdc(*puVar15);
      goto LAB_1002decd4;
    }
    uVar18 = *puVar20;
    FUN_100008184(uVar18,uVar8);
    uVar17 = *puVar15;
    uVar2 = puVar15[1];
    *puVar15 = uVar18;
    puVar15[1] = uVar8;
    FUN_100006cdc(uVar17,uVar2);
  }
  else if ((uVar8 & 0x3000000000000000) == 0) {
    uVar17 = *puVar20;
    FUN_100008184(uVar17,uVar8);
    *puVar15 = uVar17;
    puVar15[1] = uVar8;
  }
  else {
LAB_1002decd4:
    uVar17 = *puVar20;
    puVar15[1] = puVar20[1];
    *puVar15 = uVar17;
  }
  puVar15[2] = puVar20[2];
  puVar15[3] = puVar20[3];
  lVar19 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar21 = *(long *)(lVar19 + -8);
  lVar23 = *(long *)(lVar5 + -8);
  uVar8 = (ulong)(*(byte *)(lVar23 + 0x50) | *(byte *)(lVar21 + 0x50));
  puVar12 = (uint *)(uVar8 + 8 + (long)(puVar15 + 3) & (uVar8 ^ 0xffffffffffffffff));
  puVar14 = (uint *)(uVar8 + 8 + (long)(puVar20 + 3) & (uVar8 ^ 0xffffffffffffffff));
  if (puVar12 == puVar14) {
    return param_1;
  }
  uVar8 = *(ulong *)(lVar23 + 0x40);
  if (*(ulong *)(lVar23 + 0x40) <= *(ulong *)(lVar21 + 0x40)) {
    uVar8 = *(ulong *)(lVar21 + 0x40);
  }
  bVar3 = *(byte *)((long)puVar12 + uVar8);
  uVar9 = (uint)bVar3;
  uVar24 = (uint)uVar8;
  if (1 < bVar3) {
    uVar10 = 4;
    if (uVar24 < 4) {
      uVar10 = uVar24;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002dee1c;
      uVar10 = (uint)(byte)*puVar12;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar12;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar12;
    }
    else {
      uVar10 = *puVar12;
    }
    uVar9 = uVar10 | bVar3 - 2 << (ulong)((uVar24 & 3) << 3);
    if (3 < uVar24) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1002dee1c:
  lVar1 = lVar5;
  lVar4 = lVar23;
  if (uVar9 != 1) {
    lVar1 = lVar19;
    lVar4 = lVar21;
  }
  (**(code **)(lVar4 + 8))(puVar12,lVar1);
  bVar3 = *(byte *)((long)puVar14 + uVar8);
  uVar9 = (uint)bVar3;
  if (1 < bVar3) {
    uVar10 = 4;
    if (uVar24 < 4) {
      uVar10 = uVar24;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002deea8;
      uVar10 = (uint)(byte)*puVar14;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar14;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar14;
    }
    else {
      uVar10 = *puVar14;
    }
    uVar9 = uVar10 | bVar3 - 2 << (ulong)((uVar24 & 3) << 3);
    if (3 < uVar24) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1002deea8:
  if (uVar9 != 1) {
    lVar5 = lVar19;
    lVar23 = lVar21;
  }
  (**(code **)(lVar23 + 0x10))(puVar12,puVar14,lVar5);
  *(bool *)((long)puVar12 + uVar8) = uVar9 == 1;
  return param_1;
}

