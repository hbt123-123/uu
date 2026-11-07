// rea decompile_all
// name: FUN_1002dce64
// address: 0x1002dce64
// body: available
// range: 0x1002dce64-0x1002dd0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002dce64(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar19 = *(long *)(lVar4 + -8);
  sVar6 = *(size_t *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar1 + -8);
  lVar18 = *(long *)(lVar2 + -8);
  uVar9 = *(uint *)(lVar18 + 0x50) | *(uint *)(lVar17 + 0x50);
  uVar15 = uVar9 & 0xff;
  uVar7 = *(ulong *)(lVar18 + 0x40);
  if (*(ulong *)(lVar18 + 0x40) <= *(ulong *)(lVar17 + 0x40)) {
    uVar7 = *(ulong *)(lVar17 + 0x40);
  }
  uVar16 = uVar15 | *(uint *)(lVar19 + 0x50) & 0xf8;
  if ((7 < uVar16 || ((*(uint *)(lVar19 + 0x50) | uVar9) & 0x100000) != 0) ||
      0x18 < uVar7 - ((-0x11 - (ulong)uVar15) - ((sVar6 + 7 & 0xfffffffffffffff8) + 0x18) |
                     (ulong)uVar15)) {
    uVar7 = (ulong)(uVar16 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  plVar5 = param_2;
  (**(code **)(lVar19 + 0x30))(param_2,1,lVar4);
  if ((int)plVar5 == 0) {
    (**(code **)(lVar19 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar19 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,sVar6);
  }
  puVar8 = (undefined8 *)((long)param_1 + sVar6 + 7 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)param_2 + sVar6 + 7 & 0xfffffffffffffff8);
  *puVar8 = *puVar10;
  uVar11 = puVar10[2];
  if ((uVar11 & 0x3000000000000000) == 0) {
    uVar13 = puVar10[1];
    FUN_100008184(uVar13,uVar11);
    puVar8[1] = uVar13;
    puVar8[2] = uVar11;
  }
  else {
    uVar13 = puVar10[1];
    puVar8[2] = puVar10[2];
    puVar8[1] = uVar13;
  }
  puVar8[3] = puVar10[3];
  puVar14 = (uint *)(puVar10 + 5);
  puVar12 = puVar8 + 5;
  puVar8[4] = puVar10[4];
  bVar3 = *(byte *)((long)puVar14 + uVar7);
  uVar15 = (uint)bVar3;
  if (1 < bVar3) {
    uVar16 = (uint)uVar7;
    uVar9 = 4;
    if (uVar16 < 4) {
      uVar9 = uVar16;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1002dd094;
      uVar9 = (uint)(byte)*puVar14;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar14;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar14;
    }
    else {
      uVar9 = *puVar14;
    }
    uVar15 = uVar9 | bVar3 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar15 = uVar9;
    }
    uVar15 = uVar15 + 2;
  }
LAB_1002dd094:
  if (uVar15 == 1) {
    (**(code **)(lVar18 + 0x10))(puVar12,puVar14,lVar2);
    *(undefined1 *)((long)puVar12 + uVar7) = 1;
  }
  else {
    (**(code **)(lVar17 + 0x10))(puVar12,puVar14,lVar1);
    *(undefined1 *)((long)puVar12 + uVar7) = 0;
  }
  return param_1;
}

