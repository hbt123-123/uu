// rea decompile_all
// name: FUN_1000ff448
// address: 0x1000ff448
// body: available
// range: 0x1000ff448-0x1000ff4ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ff448(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_10099cbf8;
  _swift_allocObject(&DAT_10099cbf8,0x41,7);
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  puVar2 = (undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *puVar2 = 0;
  puVar1[0x40] = 2;
  FUN_100100fe8(param_2);
  _swift_beginAccess(puVar2,auStack_58,0,0);
  FUN_1001024dc(puVar2,auStack_90);
  (*param_3)(auStack_90);
  FUN_100102518(auStack_90);
  _swift_release(puVar1);
  return;
}

