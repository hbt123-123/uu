// rea decompile_all
// name: FUN_10005b4a8
// address: 0x10005b4a8
// body: available
// range: 0x10005b4a8-0x10005b60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10005b4a8(long param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    local_40 = 0x5f;
    uStack_38 = 0xe100000000000000;
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar4 = 0xe000000000000000;
    }
    else {
      uVar4 = 0xe100000000000000;
      FUN_100053b50(0x2d,0xe100000000000000,0x5f,0xe100000000000000,*(undefined8 *)(param_1 + 0x40))
      ;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    if (*(char *)(param_1 + 0x28) == '\0') {
      _swift_bridgeObjectRelease(0xe400000000000000);
      uVar4 = 0x5f5f5f;
      uVar7 = 0xe300000000000000;
    }
    else {
      uVar3 = 0x74726f6873;
      uVar4 = 0xe500000000000000;
      if (*(char *)(param_1 + 0x28) != '\x01') {
        uVar3 = 0xd000000000000012;
        uVar4 = 0x80000001000c9c90;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar4,0x676e6f6c,0xe400000000000000,0);
      _swift_bridgeObjectRelease(uVar4);
      bVar2 = (uVar3 & 1) == 0;
      uVar4 = 0x5f5f5f;
      if (bVar2) {
        uVar4 = 0x5f5f;
      }
      uVar7 = 0xe300000000000000;
      if (bVar2) {
        uVar7 = 0xe200000000000000;
      }
    }
    __sSS6appendyySSF(uVar4,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = 0xe100000000000000;
    FUN_100053b50(0x2d,0xe100000000000000,0x5f,0xe100000000000000,uVar6,lVar5);
  }
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

