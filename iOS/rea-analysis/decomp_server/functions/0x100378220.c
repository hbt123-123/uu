// rea decompile_all
// name: FUN_100378220
// address: 0x100378220
// body: available
// range: 0x100378220-0x10037835b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100378220(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_50 = param_1;
  uStack_48 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
  FUN_10009ff0c();
  uVar7 = 0;
  lVar4 = lVar8;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar8,0,PTR___sSSN_1009957f8,lVar3);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  lVar3 = 0;
  if (uVar7 >> 0x3c < 0xf) {
    lVar3 = lVar4;
  }
  uVar1 = 0xc000000000000000;
  if (uVar7 >> 0x3c < 0xf) {
    uVar1 = uVar7;
  }
  uVar5 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar6 = uVar5;
  FUN_100378740();
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&local_50,&DAT_1009b5798,lVar3,uVar1,&DAT_1009b5798,uVar6);
  FUN_100006cdc(lVar3,uVar1);
  _swift_release(uVar5);
  return;
}

