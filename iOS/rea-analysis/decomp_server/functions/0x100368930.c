// rea decompile_all
// name: FUN_100368930
// address: 0x100368930
// body: available
// range: 0x100368930-0x100368a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100368930(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2a);
  _swift_bridgeObjectRelease(local_38);
  local_40 = 0xd000000000000019;
  local_38 = 0x80000001008ad230;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_50 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x4d726f727245202c,0xad00009abcef6773);
  if (param_1 == 0) {
    uStack_68 = 0;
    local_60 = 0;
  }
  else {
    _swift_getErrorValue(param_1,auStack_58,local_70);
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
  }
  puVar2 = &DAT_100a88e90;
  local_50 = uStack_68;
  uStack_48 = local_60;
  FUN_100004bb4(&DAT_100a88e90,&DAT_10081cfc0);
  __sSS10describingSSx_tclufC(&local_50,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

