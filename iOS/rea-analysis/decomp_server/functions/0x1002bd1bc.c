// rea decompile_all
// name: FUN_1002bd1bc
// address: 0x1002bd1bc
// body: available
// range: 0x1002bd1bc-0x1002bd217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002bd1bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)unaff_x20[1];
  uVar2 = *(undefined8 *)(unaff_x20[1] + 8);
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(0x203a,0xe200000000000000);
  __sSS6appendyySSF(uVar1,uVar2);
  return auVar3;
}

