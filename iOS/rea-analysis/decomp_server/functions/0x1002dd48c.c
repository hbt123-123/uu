// rea decompile_all
// name: FUN_1002dd48c
// address: 0x1002dd48c
// body: available
// range: 0x1002dd48c-0x1002dd7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_1002dd48c(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  uint uVar24;
  
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar18 = *(long *)(lVar5 + -8);
  pcVar22 = *(code **)(lVar18 + 0x30);
  pvVar6 = param_1;
  (*pcVar22)(param_1,1,lVar5);
  pvVar7 = param_2;
  (*pcVar22)(param_2,1,lVar5);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 != 0) {
      (**(code **)(lVar18 + 8))(param_1,lVar5);
      goto LAB_1002dd538;
    }
    (**(code **)(lVar18 + 0x18))(param_1,param_2,lVar5);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar18 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_1002dd538:
    sVar10 = *(size_t *)(lVar18 + 0x40);
    if (*(int *)(lVar18 + 0x54) == 0) {
      sVar10 = sVar10 + 1;
    }
    _memcpy(param_1,param_2,sVar10);
  }
  lVar5 = *(long *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  puVar14 = (undefined8 *)(lVar5 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar19 = (undefined8 *)(lVar5 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar14 = *puVar19;
  puVar17 = puVar14 + 1;
  puVar20 = puVar19 + 1;
  uVar12 = puVar19[2];
  if ((puVar14[2] & 0x3000000000000000) == 0) {
    if ((uVar12 & 0x3000000000000000) != 0) {
      FUN_100006cdc(*puVar17);
      goto LAB_1002dd5d4;
    }
    uVar16 = *puVar20;
    FUN_100008184(uVar16,uVar12);
    uVar15 = *puVar17;
    uVar2 = puVar14[2];
    *puVar17 = uVar16;
    puVar14[2] = uVar12;
    FUN_100006cdc(uVar15,uVar2);
  }
  else if ((uVar12 & 0x3000000000000000) == 0) {
    uVar15 = *puVar20;
    FUN_100008184(uVar15,uVar12);
    *puVar17 = uVar15;
    puVar14[2] = uVar12;
  }
  else {
LAB_1002dd5d4:
    uVar15 = *puVar20;
    puVar14[2] = puVar19[2];
    *puVar17 = uVar15;
  }
  puVar14[3] = puVar19[3];
  puVar14[4] = puVar19[4];
  lVar18 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar21 = *(long *)(lVar18 + -8);
  lVar23 = *(long *)(lVar5 + -8);
  uVar12 = (ulong)(*(byte *)(lVar23 + 0x50) | *(byte *)(lVar21 + 0x50));
  puVar11 = (uint *)(uVar12 + 8 + (long)(puVar14 + 4) & (uVar12 ^ 0xffffffffffffffff));
  puVar13 = (uint *)(uVar12 + 8 + (long)(puVar19 + 4) & (uVar12 ^ 0xffffffffffffffff));
  if (puVar11 == puVar13) {
    return param_1;
  }
  uVar12 = *(ulong *)(lVar23 + 0x40);
  if (*(ulong *)(lVar23 + 0x40) <= *(ulong *)(lVar21 + 0x40)) {
    uVar12 = *(ulong *)(lVar21 + 0x40);
  }
  bVar3 = *(byte *)((long)puVar11 + uVar12);
  uVar8 = (uint)bVar3;
  uVar24 = (uint)uVar12;
  if (1 < bVar3) {
    uVar9 = 4;
    if (uVar24 < 4) {
      uVar9 = uVar24;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1002dd704;
      uVar9 = (uint)(byte)*puVar11;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar11;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar11;
    }
    else {
      uVar9 = *puVar11;
    }
    uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar24 & 3) << 3);
    if (3 < uVar24) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1002dd704:
  lVar1 = lVar5;
  lVar4 = lVar23;
  if (uVar8 != 1) {
    lVar1 = lVar18;
    lVar4 = lVar21;
  }
  (**(code **)(lVar4 + 8))(puVar11,lVar1);
  bVar3 = *(byte *)((long)puVar13 + uVar12);
  uVar8 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = 4;
    if (uVar24 < 4) {
      uVar9 = uVar24;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1002dd790;
      uVar9 = (uint)(byte)*puVar13;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar13;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar13;
    }
    else {
      uVar9 = *puVar13;
    }
    uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar24 & 3) << 3);
    if (3 < uVar24) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1002dd790:
  if (uVar8 != 1) {
    lVar5 = lVar18;
    lVar23 = lVar21;
  }
  (**(code **)(lVar23 + 0x10))(puVar11,puVar13,lVar5);
  *(bool *)((long)puVar11 + uVar12) = uVar8 == 1;
  return param_1;
}

