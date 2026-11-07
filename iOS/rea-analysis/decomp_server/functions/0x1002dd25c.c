// rea decompile_all
// name: FUN_1002dd25c
// address: 0x1002dd25c
// body: available
// range: 0x1002dd25c-0x1002dd48b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_1002dd25c(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  size_t sVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar16 = *(long *)(lVar4 + -8);
  pvVar5 = param_2;
  (**(code **)(lVar16 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar4);
    iVar10 = *(int *)(lVar16 + 0x54);
    sVar14 = *(size_t *)(lVar16 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar16 + 0x54);
    sVar14 = *(size_t *)(lVar16 + 0x40);
    sVar1 = sVar14;
    if (iVar10 == 0) {
      sVar1 = sVar14 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar10 == 0) {
    sVar14 = sVar14 + 1;
  }
  puVar8 = (undefined8 *)(sVar14 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(sVar14 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar8 = *puVar6;
  uVar13 = puVar6[2];
  if ((uVar13 & 0x3000000000000000) == 0) {
    uVar15 = puVar6[1];
    FUN_100008184(uVar15,uVar13);
    puVar8[1] = uVar15;
    puVar8[2] = uVar13;
  }
  else {
    uVar15 = puVar6[1];
    puVar8[2] = puVar6[2];
    puVar8[1] = uVar15;
  }
  puVar8[3] = puVar6[3];
  puVar8[4] = puVar6[4];
  lVar16 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = (ulong)(*(byte *)(lVar4 + 0x50) | *(byte *)(lVar16 + 0x50));
  puVar12 = (uint *)(uVar9 + 8 + (long)(puVar6 + 4) & (uVar9 ^ 0xffffffffffffffff));
  uVar13 = *(ulong *)(lVar4 + 0x40);
  if (*(ulong *)(lVar4 + 0x40) <= *(ulong *)(lVar16 + 0x40)) {
    uVar13 = *(ulong *)(lVar16 + 0x40);
  }
  bVar3 = *(byte *)((long)puVar12 + uVar13);
  uVar11 = (uint)bVar3;
  if (1 < bVar3) {
    uVar17 = (uint)uVar13;
    uVar7 = 4;
    if (uVar17 < 4) {
      uVar7 = uVar17;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1002dd43c;
      uVar7 = (uint)(byte)*puVar12;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar12;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar12;
    }
    else {
      uVar7 = *puVar12;
    }
    uVar11 = uVar7 | bVar3 - 2 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar11 = uVar7;
    }
    uVar11 = uVar11 + 2;
  }
LAB_1002dd43c:
  uVar9 = uVar9 + 8 + (long)(puVar8 + 4) & ~uVar9;
  lVar2 = *(long *)(param_3 + 0x18);
  if (uVar11 != 1) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar4 = lVar16;
  }
  (**(code **)(lVar4 + 0x10))(uVar9,puVar12,lVar2);
  *(bool *)(uVar9 + uVar13) = uVar11 == 1;
  return param_1;
}

