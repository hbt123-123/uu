// rea decompile_all
// name: FUN_10031908c
// address: 0x10031908c
// body: available
// range: 0x10031908c-0x100319157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031908c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined1 auStack_68 [40];
  
  FUN_1000b142c(param_2,auStack_68);
  lVar1 = 0;
  FUN_100347cbc();
  _swift_allocObject();
  FUN_1000a0074(auStack_68,lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  puVar2 = &DAT_1009b0818;
  _swift_allocObject(&DAT_1009b0818,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(long *)(puVar2 + 0x20) = lVar1;
  _swift_retain_n();
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  return;
}

