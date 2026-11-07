// rea decompile_all
// name: FUN_100095184
// address: 0x100095184
// body: available
// range: 0x100095184-0x10009529b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100095184(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1b);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd00000000000001a;
  local_48 = 0x80000001008804a0;
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x203e2d20,0xe400000000000000);
  uVar2 = *param_4;
  uVar1 = param_4[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x203a,0xe200000000000000);
  _swift_getErrorValue(param_5,auStack_58,local_70);
  uVar2 = local_60;
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,local_60);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = local_48;
  return;
}

