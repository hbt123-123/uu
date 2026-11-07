// rea decompile_all
// name: FUN_100666a9c
// address: 0x100666a9c
// body: available
// range: 0x100666a9c-0x100666bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100666a9c(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 auStack_80 [12];
  undefined4 local_74;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  local_74 = param_3;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar5 = auStack_80 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar1;
  local_70 = param_1;
  uStack_68 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar5);
  FUN_100665380();
  uVar4 = 1;
  puVar3 = puVar5;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar5,1,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar6 + 8))(puVar5,lVar1);
  if (uVar4 >> 0x3c < 0xf) {
    param_1 = puVar3;
    FUN_100665cbc(puVar3,uVar4);
    FUN_100006cc8(puVar3,uVar4);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006653c0(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_allocObject();
  FUN_100668564(param_1,local_74,unaff_x20);
  return;
}

