// rea decompile_all
// name: FUN_1005c2730
// address: 0x1005c2730
// body: available
// range: 0x1005c2730-0x1005c28e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c2730(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar7 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar7 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_1005bf914(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_1005ba5d0(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar7 = unaff_x20[0xb];
  if (uVar7 != 0) {
    uVar1 = unaff_x20[0xc];
    uVar2 = unaff_x20[0xd];
    uVar8 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(4);
    _swift_bridgeObjectRetain(uVar7);
    FUN_100008184(uVar1,uVar2);
    thunk_FUN_100574b34(param_1,uVar8,uVar7,uVar1,uVar2);
    FUN_1004338a4(uVar8,uVar7,uVar1,uVar2);
  }
  uVar7 = unaff_x20[4];
  if (uVar7 != 0) {
    uVar2 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(5);
    uVar1 = 1;
    if (uVar7 == 2) {
      uVar1 = 2;
    }
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar7;
    }
    __ss6HasherV8_combineyySuF(uVar1);
  }
  uVar1 = unaff_x20[6];
  uVar2 = unaff_x20[7];
  uVar7 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar7 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar7 = unaff_x20[8];
  uVar3 = (uint)(unaff_x20[9] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[9] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005c28bc;
    }
    lVar5 = (long)(int)uVar7;
    lVar6 = (long)uVar7 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(uVar7 + 0x10);
    lVar6 = *(long *)(uVar7 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_1005c28bc:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

