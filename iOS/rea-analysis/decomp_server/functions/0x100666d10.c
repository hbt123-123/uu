// rea decompile_all
// name: FUN_100666d10
// address: 0x100666d10
// body: available
// range: 0x100666d10-0x100666edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100666d10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long local_80;
  
  lVar1 = 0;
  local_80 = param_3;
  __sSS10FoundationE8EncodingVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar7 = (long)&local_80 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar1;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar7);
  FUN_100665380();
  uVar4 = 1;
  lVar3 = lVar7;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar7,1,PTR___sSSN_1009957f8,lVar2);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(lVar7,lVar1);
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
  _swift_bridgeObjectRelease(param_2);
  lVar3 = local_80;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar7);
  uVar4 = 1;
  lVar5 = lVar7;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar7,1,PTR___sSSN_1009957f8,lVar2);
  (*pcVar6)(lVar7,lVar1);
  if (uVar4 >> 0x3c < 0xf) {
    lVar3 = lVar5;
    FUN_100665cbc(lVar5,uVar4);
    FUN_100006cc8(lVar5,uVar4);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_1006653c0(lVar3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  _swift_bridgeObjectRelease(param_4);
  _swift_allocObject(unaff_x20,0x40,7);
  FUN_100671288(param_1,lVar3);
  return;
}

