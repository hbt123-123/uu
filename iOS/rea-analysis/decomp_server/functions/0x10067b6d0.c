// rea decompile_all
// name: FUN_10067b6d0
// address: 0x10067b6d0
// body: available
// range: 0x10067b6d0-0x10067b817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10067b6d0(uint param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar4 = auStack_80 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar1;
  local_70 = param_2;
  uStack_68 = param_3;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
  FUN_100665380();
  uVar5 = 1;
  puVar3 = puVar4;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar4,1,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar7 + 8))(puVar4,lVar1);
  if (uVar5 >> 0x3c < 0xf) {
    param_2 = puVar3;
    FUN_100665cbc(puVar3,uVar5);
    FUN_100006cc8(puVar3,uVar5);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    FUN_1006653c0(param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  puVar3 = param_2;
  FUN_1006638d0(param_2,param_1 & 0x1ffff);
  _swift_bridgeObjectRelease(param_2);
  uVar6 = 2;
  FUN_10066679c(puVar3,2);
  puVar4 = puVar3;
  FUN_10062fda8();
  _swift_bridgeObjectRelease(puVar3);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = puVar4;
  return auVar8;
}

