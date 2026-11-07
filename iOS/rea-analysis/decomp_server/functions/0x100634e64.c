// rea decompile_all
// name: FUN_100634e64
// address: 0x100634e64
// body: available
// range: 0x100634e64-0x100634ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100634e64(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_allocObject();
  uVar1 = 0;
  FUN_1006295a0(0,0x10,0,PTR___swiftEmptyArrayStorage_100995ea0);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x40) = param_2;
  FUN_1000a0074(param_3,unaff_x20 + 0x18);
  return unaff_x20;
}

