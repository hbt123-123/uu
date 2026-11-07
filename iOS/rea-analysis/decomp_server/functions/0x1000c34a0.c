// rea decompile_all
// name: FUN_1000c34a0
// address: 0x1000c34a0
// body: available
// range: 0x1000c34a0-0x1000c355f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c34a0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 local_48;
  byte local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3f);
  __sSS6appendyySSF(0x100000000000003d,0x8000000100884400);
  local_48 = (undefined4)param_2;
  local_44 = (byte)((ulong)param_2 >> 0x20) & 1;
  puVar1 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __sSS10describingSSx_tclufC(&local_48,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

