// rea decompile_all
// name: FUN_1002eecec
// address: 0x1002eecec
// body: available
// range: 0x1002eecec-0x1002eed4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002eecec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar5 = *param_3;
  puVar3 = &DAT_100a83828;
  FUN_100004bb4(&DAT_100a83828,&DAT_100817d88);
  iVar2 = *(int *)(puVar3 + 0x30);
  lVar4 = param_1;
  (*pcVar1)(param_1,param_2,uVar5);
  *(long *)(param_1 + iVar2) = lVar4;
  return;
}

