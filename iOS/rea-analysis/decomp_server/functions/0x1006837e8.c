// rea decompile_all
// name: FUN_1006837e8
// address: 0x1006837e8
// body: available
// range: 0x1006837e8-0x10068383f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068383c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006837e8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *(undefined8 *)((long)pvVar1 + 0xb8) = *(undefined8 *)((long)pvVar1 + 0x70);
  *(undefined8 *)((long)pvVar1 + 0xb0) = *(undefined8 *)((long)pvVar1 + 0x68);
  *(undefined8 *)((long)pvVar1 + 200) = *(undefined8 *)((long)pvVar1 + 0x80);
  *(undefined8 *)((long)pvVar1 + 0xc0) = *(undefined8 *)((long)pvVar1 + 0x78);
  *(undefined4 *)((long)pvVar1 + 0xcf) = *(undefined4 *)((long)pvVar1 + 0x87);
  *(undefined8 *)((long)pvVar1 + 0x98) = *(undefined8 *)((long)pvVar1 + 0x50);
  *(undefined8 *)((long)pvVar1 + 0x90) = *(undefined8 *)((long)pvVar1 + 0x48);
  *(undefined8 *)((long)pvVar1 + 0xa8) = *(undefined8 *)((long)pvVar1 + 0x60);
  *(undefined8 *)((long)pvVar1 + 0xa0) = *(undefined8 *)((long)pvVar1 + 0x58);
  FUN_100040bb4((long)pvVar1 + 0x90,&DAT_100ab9fa0,&DAT_10084dd58);
  _free(pvVar1);
  return;
}

