// rea decompile_all
// name: FUN_1005c0e60
// address: 0x1005c0e60
// body: available
// range: 0x1005c0e60-0x1005c105b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c0e60(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar9 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar9 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar9 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_1005bf7f4(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  uVar9 = unaff_x20[3];
  lVar8 = *(long *)(uVar9 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(lVar8);
    puVar10 = (undefined8 *)(uVar9 + 0x28);
    do {
      uVar2 = puVar10[-1];
      uVar4 = *puVar10;
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      puVar10 = puVar10 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((*(long *)(unaff_x20[4] + 0x10) != 0) && (FUN_1005ba5d0(unaff_x20[4],4), unaff_x21 != 0)) {
    return;
  }
  uVar9 = unaff_x20[0xc];
  if (uVar9 != 0) {
    uVar1 = unaff_x20[0xd];
    uVar3 = unaff_x20[0xe];
    uVar11 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(5);
    _swift_bridgeObjectRetain(uVar9);
    FUN_100008184(uVar1,uVar3);
    thunk_FUN_100574b34(param_1,uVar11,uVar9,uVar1,uVar3);
    FUN_1004338a4(uVar11,uVar9,uVar1,uVar3);
  }
  uVar9 = unaff_x20[5];
  if (uVar9 != 0) {
    uVar3 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(6);
    uVar1 = 1;
    if (uVar9 == 2) {
      uVar1 = 2;
    }
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar9;
    }
    __ss6HasherV8_combineyySuF(uVar1);
  }
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  uVar9 = uVar1 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar9 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar9 != 0) {
    __ss6HasherV8_combineyySuF(7);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  }
  uVar9 = unaff_x20[9];
  uVar5 = (uint)(unaff_x20[10] >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[10] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005c1038;
    }
    lVar8 = (long)(int)uVar9;
    lVar7 = (long)uVar9 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar8 = *(long *)(uVar9 + 0x10);
    lVar7 = *(long *)(uVar9 + 0x18);
  }
  if (lVar8 == lVar7) {
    return;
  }
LAB_1005c1038:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

