// rea decompile_all
// name: FUN_10027a418
// address: 0x10027a418
// body: available
// range: 0x10027a418-0x10027a52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10027a418(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
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
  
  uVar2 = (uint)(param_1 >> 0x3e);
  if (uVar2 == 0) {
    local_30 = 0;
    local_28 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2e);
    _swift_bridgeObjectRelease(local_28);
    local_30 = 0xd00000000000002c;
    local_28 = 0x80000001008a8be0;
    _swift_getErrorValue(param_1,auStack_58,local_70);
    uStack_48 = uStack_68;
    uVar1 = local_60;
  }
  else {
    if (uVar2 != 1) {
      local_28 = 0x80000001008a8c10;
      local_30 = 0xd000000000000027;
      goto LAB_10027a51c;
    }
    local_30 = 0;
    local_28 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2e);
    _swift_bridgeObjectRelease(local_28);
    local_30 = 0xd00000000000002c;
    local_28 = 0x80000001008a8bb0;
    _swift_getErrorValue(param_1 & 0x3fffffffffffffff,auStack_38,local_50);
    uVar1 = local_40;
  }
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_48,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
LAB_10027a51c:
  auVar3._8_8_ = local_28;
  auVar3._0_8_ = local_30;
  return auVar3;
}

