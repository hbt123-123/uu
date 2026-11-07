// rea decompile_all
// name: FUN_1000a13e0
// address: 0x1000a13e0
// body: available
// range: 0x1000a13e0-0x1000a1463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a13e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_38;
  
  uVar1 = 0;
  FUN_100365888();
  uVar2 = uVar1;
  FUN_1000a21cc();
  _swift_allocError(uVar1,uVar2,0,0);
  FUN_1000a2210(param_2);
  puVar3 = &DAT_100a76920;
  local_38 = uVar1;
  FUN_100004bb4(&DAT_100a76920,&DAT_10080b400);
  __sScC6resume8throwingyq_n_tF(&local_38,puVar3);
  return;
}

