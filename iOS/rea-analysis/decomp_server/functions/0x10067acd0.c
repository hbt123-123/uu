// rea decompile_all
// name: FUN_10067acd0
// address: 0x10067acd0
// body: available
// range: 0x10067acd0-0x10067adcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10067acd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar5 = (long)&local_60 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar1;
  local_60 = param_1;
  uStack_58 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar5);
  FUN_100665380();
  uVar4 = 1;
  lVar3 = lVar5;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar5,1,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  if (uVar4 >> 0x3c < 0xf) {
    param_1 = lVar3;
    FUN_100665cbc(lVar3,uVar4);
    FUN_100006cc8(lVar3,uVar4);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006653c0(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  return param_1;
}

