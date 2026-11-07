// rea decompile_all
// name: FUN_100265484
// address: 0x100265484
// body: available
// range: 0x100265484-0x100265637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100265484(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [8];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  if ((3 < param_3) && (5 < param_3)) {
    if (param_3 == 6) {
      _swift_getErrorValue(param_1,auStack_58,local_70);
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,local_60);
    }
    else if (param_3 != 7) {
      local_30 = 0;
      local_28 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x2e);
      _swift_bridgeObjectRelease(local_28);
      local_30 = 0xd00000000000002c;
      local_28 = 0x80000001008a83d0;
      _swift_getErrorValue(param_1,auStack_38,local_50);
      uVar1 = local_40;
      __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_48,local_40);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return;
}

