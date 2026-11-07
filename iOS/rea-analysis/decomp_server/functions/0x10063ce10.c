// rea decompile_all
// name: FUN_10063ce10
// address: 0x10063ce10
// body: available
// range: 0x10063ce10-0x10063ceb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063ce10(undefined8 param_1,long param_2,undefined8 param_3,byte param_4)

{
  long unaff_x20;
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  plVar1 = (long *)(unaff_x20 + 0x48);
  *plVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(byte *)(unaff_x20 + 0x28) = param_4 & 1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  _swift_beginAccess(plVar1,auStack_68,1,0);
  *plVar1 = param_2;
  return unaff_x20;
}

