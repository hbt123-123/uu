// rea decompile_all
// name: FUN_1005c38e4
// address: 0x1005c38e4
// body: available
// range: 0x1005c38e4-0x1005c3a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c38e4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
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
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uVar7 = unaff_x20[6];
  local_60 = uVar7;
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(2);
    _swift_beginAccess(uVar7 + 0x10,auStack_88,0,0);
    uVar1 = *(ulong *)(uVar7 + 0x10);
    uVar2 = *(ulong *)(uVar7 + 0x18);
    uVar7 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar7 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      FUN_10007f314(&local_70,auStack_a0,&DAT_100aad3d0,&DAT_10083e010);
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      FUN_100040bb4(&local_70,&DAT_100aad3d0,&DAT_10083e010);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  uVar7 = unaff_x20[2];
  uVar3 = (uint)(unaff_x20[3] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[3] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005c3a18;
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
LAB_1005c3a18:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

