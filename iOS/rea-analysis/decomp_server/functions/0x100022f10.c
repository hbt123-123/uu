// rea decompile_all
// name: FUN_100022f10
// address: 0x100022f10
// body: available
// range: 0x100022f10-0x100023007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100022f10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x80,auStack_48,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  local_50 = param_2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(param_2);
  FUN_10006daa4(auStack_68,param_1);
  _swift_beginAccess(unaff_x20 + 0x80,auStack_68,0x21,0);
  FUN_1001ddf0c(param_1);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(unaff_x20 + 0x88,auStack_68,0x21,0);
  FUN_1001df648(param_1);
  _swift_endAccess(auStack_68);
  uVar1 = local_50;
  FUN_100019690(local_50);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  FUN_10004cc78(uVar2,*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(uVar2);
  return ((uint)uVar1 ^ 0xffffffff) & 1;
}

