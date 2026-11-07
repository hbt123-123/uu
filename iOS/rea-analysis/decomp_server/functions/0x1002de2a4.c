// rea decompile_all
// name: FUN_1002de2a4
// address: 0x1002de2a4
// body: available
// range: 0x1002de2a4-0x1002de60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002de2a4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  size_t sVar11;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar16 = *(long *)(lVar6 + -8);
  sVar11 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar7 + -8);
  uVar12 = (ulong)*(uint *)(lVar24 + 0x50) & 0xff;
  sVar13 = *(size_t *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  lVar1 = sVar13 + 7;
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(lVar3 + -8);
  lVar8 = *(long *)(lVar4 + -8);
  uVar10 = *(uint *)(lVar8 + 0x50) | *(uint *)(lVar14 + 0x50);
  uVar15 = uVar10 & 0xff;
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (*(ulong *)(lVar8 + 0x40) <= *(ulong *)(lVar14 + 0x40)) {
    uVar2 = *(ulong *)(lVar14 + 0x40);
  }
  uVar17 = uVar15 | *(uint *)(lVar16 + 0x50) & 0xf8 | (uint)uVar12;
  if ((7 < uVar17 ||
      ((uVar10 | *(uint *)(lVar24 + 0x50) | *(uint *)(lVar16 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar2 - ((-9 - (ulong)uVar15) -
                      ((lVar1 + (uVar12 + (sVar11 + 7 & 0xfffffffffffffff8) + 8 &
                                (uVar12 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x18) |
                     (ulong)uVar15)) {
    uVar12 = (ulong)(uVar17 | 7);
    lVar6 = *param_2;
    *param_1 = lVar6;
    _swift_retain();
    return (long *)(lVar6 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
  }
  plVar9 = param_2;
  (**(code **)(lVar16 + 0x30))(param_2,1,lVar6);
  if ((int)plVar9 == 0) {
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar6);
  }
  else {
    _memcpy(param_1,param_2,sVar11);
  }
  puVar22 = (undefined8 *)((long)param_1 + sVar11 + 7 & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)((long)param_2 + sVar11 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar18 + 1;
  puVar23 = puVar22 + 1;
  *puVar22 = *puVar18;
  puVar18 = puVar19;
  (**(code **)(lVar24 + 0x30))(puVar19,1,lVar7);
  if ((int)puVar18 == 0) {
    (**(code **)(lVar24 + 0x10))(puVar23,puVar19,lVar7);
    (**(code **)(lVar24 + 0x38))(puVar23,0,1,lVar7);
  }
  else {
    _memcpy(puVar23,puVar19,sVar13);
  }
  puVar22 = (undefined8 *)(lVar1 + (long)puVar23 & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)(lVar1 + (long)puVar19 & 0xfffffffffffffff8);
  uVar12 = puVar18[1];
  if ((uVar12 & 0x3000000000000000) == 0) {
    uVar20 = *puVar18;
    FUN_100008184(uVar20,uVar12);
    *puVar22 = uVar20;
    puVar22[1] = uVar12;
  }
  else {
    uVar20 = *puVar18;
    puVar22[1] = puVar18[1];
    *puVar22 = uVar20;
  }
  puVar22[2] = puVar18[2];
  puVar21 = (uint *)(puVar18 + 4);
  puVar19 = puVar22 + 4;
  puVar22[3] = puVar18[3];
  bVar5 = *(byte *)((long)puVar21 + uVar2);
  uVar15 = (uint)bVar5;
  if (1 < bVar5) {
    uVar17 = (uint)uVar2;
    uVar10 = 4;
    if (uVar17 < 4) {
      uVar10 = uVar17;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1002de5a8;
      uVar10 = (uint)(byte)*puVar21;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar21;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar21;
    }
    else {
      uVar10 = *puVar21;
    }
    uVar15 = uVar10 | bVar5 - 2 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar15 = uVar10;
    }
    uVar15 = uVar15 + 2;
  }
LAB_1002de5a8:
  if (uVar15 == 1) {
    (**(code **)(lVar8 + 0x10))(puVar19,puVar21,lVar4);
    *(undefined1 *)((long)puVar19 + uVar2) = 1;
  }
  else {
    (**(code **)(lVar14 + 0x10))(puVar19,puVar21,lVar3);
    *(undefined1 *)((long)puVar19 + uVar2) = 0;
  }
  return param_1;
}

