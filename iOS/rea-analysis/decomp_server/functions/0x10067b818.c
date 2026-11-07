// rea decompile_all
// name: FUN_10067b818
// address: 0x10067b818
// body: available
// range: 0x10067b818-0x10067b9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10067b818(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  long local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar8 = (long)&local_70 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar1;
  local_70 = param_3;
  uStack_68 = param_4;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
  FUN_100665380();
  uVar4 = 1;
  lVar3 = lVar8;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar8,1,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar6 + 8))(lVar8,lVar1);
  if (uVar4 >> 0x3c < 0xf) {
    param_3 = lVar3;
    FUN_100665cbc(lVar3,uVar4);
    FUN_100006cc8(lVar3,uVar4);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_1006653c0(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  _swift_getObjectType(param_1);
  pcVar7 = *(code **)(param_2 + 0x10);
  lVar2 = param_3;
  _swift_bridgeObjectRetain(param_3);
  (*pcVar7)();
  uVar5 = 2;
  _swift_bridgeObjectRelease_n(param_3,2);
  if (unaff_x21 == 0) {
    param_2 = lVar2;
    FUN_10062fda8(lVar2);
    _swift_bridgeObjectRelease(lVar2);
    param_1 = uVar5;
  }
  auVar9._8_8_ = param_1;
  auVar9._0_8_ = param_2;
  return auVar9;
}

