// rea decompile_all
// name: FUN_1002df17c
// address: 0x1002df17c
// body: available
// range: 0x1002df17c-0x1002df57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_1002df17c(void *param_1,void *param_2,long param_3)

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
  void *pvVar14;
  uint *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  uint uVar22;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar18 = *(long *)(lVar4 + -8);
  pcVar20 = *(code **)(lVar18 + 0x30);
  pvVar5 = param_1;
  (*pcVar20)(param_1,1,lVar4);
  pvVar6 = param_2;
  (*pcVar20)(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 != 0) {
      (**(code **)(lVar18 + 8))(param_1,lVar4);
      goto LAB_1002df228;
    }
    (**(code **)(lVar18 + 0x28))(param_1,param_2,lVar4);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar18 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar18 + 0x38))(param_1,0,1,lVar4);
  }
  else {
LAB_1002df228:
    sVar11 = *(size_t *)(lVar18 + 0x40);
    if (*(int *)(lVar18 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy(param_1,param_2,sVar11);
  }
  lVar4 = *(long *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  puVar16 = (undefined8 *)(lVar4 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(lVar4 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar16 = *puVar13;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar18 + 0x50);
  pvVar17 = (void *)(uVar8 + 8 + (long)puVar16 & (uVar8 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar8 + 8 + (long)puVar13 & (uVar8 ^ 0xffffffffffffffff));
  pcVar20 = *(code **)(lVar18 + 0x30);
  pvVar5 = pvVar17;
  (*pcVar20)(pvVar17,1,lVar4);
  pvVar6 = pvVar14;
  (*pcVar20)(pvVar14,1,lVar4);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 != 0) {
      (**(code **)(lVar18 + 8))(pvVar17,lVar4);
      goto LAB_1002df314;
    }
    (**(code **)(lVar18 + 0x28))(pvVar17,pvVar14,lVar4);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar18 + 0x20))(pvVar17,pvVar14,lVar4);
    (**(code **)(lVar18 + 0x38))(pvVar17,0,1,lVar4);
  }
  else {
LAB_1002df314:
    sVar11 = *(size_t *)(lVar18 + 0x40);
    if (*(int *)(lVar18 + 0x54) == 0) {
      sVar11 = sVar11 + 1;
    }
    _memcpy(pvVar17,pvVar14,sVar11);
  }
  lVar4 = *(long *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  puVar16 = (undefined8 *)((long)pvVar17 + lVar4 + 7 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)((long)pvVar14 + lVar4 + 7 & 0xfffffffffffffff8);
  if ((puVar16[1] & 0x3000000000000000) == 0) {
    uVar8 = puVar13[1];
    if ((uVar8 & 0x3000000000000000) != 0) {
      FUN_100006cdc(*puVar16);
      goto LAB_1002df378;
    }
    uVar7 = *puVar16;
    *puVar16 = *puVar13;
    puVar16[1] = uVar8;
    FUN_100006cdc(uVar7);
  }
  else {
LAB_1002df378:
    uVar7 = *puVar13;
    puVar16[1] = puVar13[1];
    *puVar16 = uVar7;
  }
  puVar16[2] = puVar13[2];
  puVar16[3] = puVar13[3];
  lVar18 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar18 + -8);
  lVar21 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)(*(byte *)(lVar21 + 0x50) | *(byte *)(lVar19 + 0x50));
  puVar12 = (uint *)(uVar8 + 8 + (long)(puVar16 + 3) & (uVar8 ^ 0xffffffffffffffff));
  puVar15 = (uint *)(uVar8 + 8 + (long)(puVar13 + 3) & (uVar8 ^ 0xffffffffffffffff));
  if (puVar12 == puVar15) {
    return param_1;
  }
  uVar8 = *(ulong *)(lVar21 + 0x40);
  if (*(ulong *)(lVar21 + 0x40) <= *(ulong *)(lVar19 + 0x40)) {
    uVar8 = *(ulong *)(lVar19 + 0x40);
  }
  bVar2 = *(byte *)((long)puVar12 + uVar8);
  uVar9 = (uint)bVar2;
  uVar22 = (uint)uVar8;
  if (1 < bVar2) {
    uVar10 = 4;
    if (uVar22 < 4) {
      uVar10 = uVar22;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002df4ac;
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
    uVar9 = uVar10 | bVar2 - 2 << (ulong)((uVar22 & 3) << 3);
    if (3 < uVar22) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1002df4ac:
  lVar1 = lVar4;
  lVar3 = lVar21;
  if (uVar9 != 1) {
    lVar1 = lVar18;
    lVar3 = lVar19;
  }
  (**(code **)(lVar3 + 8))(puVar12,lVar1);
  bVar2 = *(byte *)((long)puVar15 + uVar8);
  uVar9 = (uint)bVar2;
  if (1 < bVar2) {
    uVar10 = 4;
    if (uVar22 < 4) {
      uVar10 = uVar22;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002df538;
      uVar10 = (uint)(byte)*puVar15;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar15;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar15;
    }
    else {
      uVar10 = *puVar15;
    }
    uVar9 = uVar10 | bVar2 - 2 << (ulong)((uVar22 & 3) << 3);
    if (3 < uVar22) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1002df538:
  if (uVar9 != 1) {
    lVar4 = lVar18;
    lVar21 = lVar19;
  }
  (**(code **)(lVar21 + 0x20))(puVar12,puVar15,lVar4);
  *(bool *)((long)puVar12 + uVar8) = uVar9 == 1;
  return param_1;
}

