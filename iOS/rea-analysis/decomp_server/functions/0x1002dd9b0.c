// rea decompile_all
// name: FUN_1002dd9b0
// address: 0x1002dd9b0
// body: available
// range: 0x1002dd9b0-0x1002ddcbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_1002dd9b0(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  uint uVar21;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar17 = *(long *)(lVar4 + -8);
  pcVar19 = *(code **)(lVar17 + 0x30);
  pvVar5 = param_1;
  (*pcVar19)(param_1,1,lVar4);
  pvVar6 = param_2;
  (*pcVar19)(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 != 0) {
      (**(code **)(lVar17 + 8))(param_1,lVar4);
      goto LAB_1002dda5c;
    }
    (**(code **)(lVar17 + 0x28))(param_1,param_2,lVar4);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar17 + 0x38))(param_1,0,1,lVar4);
  }
  else {
LAB_1002dda5c:
    sVar11 = *(size_t *)(lVar17 + 0x40);
    if (*(int *)(lVar17 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy(param_1,param_2,sVar11);
  }
  lVar4 = *(long *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  puVar15 = (undefined8 *)(lVar4 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar16 = (undefined8 *)(lVar4 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar15 = *puVar16;
  puVar13 = puVar15 + 1;
  if ((puVar15[2] & 0x3000000000000000) == 0) {
    uVar8 = puVar16[2];
    if ((uVar8 & 0x3000000000000000) != 0) {
      FUN_100006cdc(*puVar13);
      goto LAB_1002ddad4;
    }
    uVar7 = *puVar13;
    *puVar13 = puVar16[1];
    puVar15[2] = uVar8;
    FUN_100006cdc(uVar7);
  }
  else {
LAB_1002ddad4:
    uVar7 = puVar16[1];
    puVar15[2] = puVar16[2];
    *puVar13 = uVar7;
  }
  puVar15[3] = puVar16[3];
  puVar15[4] = puVar16[4];
  lVar17 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar17 + -8);
  lVar20 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)(*(byte *)(lVar20 + 0x50) | *(byte *)(lVar18 + 0x50));
  puVar12 = (uint *)(uVar8 + 8 + (long)(puVar15 + 4) & (uVar8 ^ 0xffffffffffffffff));
  puVar14 = (uint *)(uVar8 + 8 + (long)(puVar16 + 4) & (uVar8 ^ 0xffffffffffffffff));
  if (puVar12 == puVar14) {
    return param_1;
  }
  uVar8 = *(ulong *)(lVar20 + 0x40);
  if (*(ulong *)(lVar20 + 0x40) <= *(ulong *)(lVar18 + 0x40)) {
    uVar8 = *(ulong *)(lVar18 + 0x40);
  }
  bVar2 = *(byte *)((long)puVar12 + uVar8);
  uVar9 = (uint)bVar2;
  uVar21 = (uint)uVar8;
  if (1 < bVar2) {
    uVar10 = 4;
    if (uVar21 < 4) {
      uVar10 = uVar21;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002ddbf0;
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
    uVar9 = uVar10 | bVar2 - 2 << (ulong)((uVar21 & 3) << 3);
    if (3 < uVar21) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1002ddbf0:
  lVar1 = lVar4;
  lVar3 = lVar20;
  if (uVar9 != 1) {
    lVar1 = lVar17;
    lVar3 = lVar18;
  }
  (**(code **)(lVar3 + 8))(puVar12,lVar1);
  bVar2 = *(byte *)((long)puVar14 + uVar8);
  uVar9 = (uint)bVar2;
  if (1 < bVar2) {
    uVar10 = 4;
    if (uVar21 < 4) {
      uVar10 = uVar21;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002ddc7c;
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
    uVar9 = uVar10 | bVar2 - 2 << (ulong)((uVar21 & 3) << 3);
    if (3 < uVar21) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1002ddc7c:
  if (uVar9 != 1) {
    lVar4 = lVar17;
    lVar20 = lVar18;
  }
  (**(code **)(lVar20 + 0x20))(puVar12,puVar14,lVar4);
  *(bool *)((long)puVar12 + uVar8) = uVar9 == 1;
  return param_1;
}

