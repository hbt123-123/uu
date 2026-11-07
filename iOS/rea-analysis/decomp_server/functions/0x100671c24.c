// rea decompile_all
// name: FUN_100671c24
// address: 0x100671c24
// body: available
// range: 0x100671c24-0x100671e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100671c24(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  iVar1 = 0;
  FUN_100671e20();
  iVar2 = 7;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 6;
  FUN_100671e20();
  FUN_10067d3f4();
  *piVar4 = iVar2 + iVar1 + iVar3;
  iVar1 = 1;
  FUN_100671e20();
  iVar2 = 0;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 7;
  FUN_100671e20();
  piVar4[1] = iVar2 + iVar1 + iVar3;
  iVar1 = 2;
  FUN_100671e20();
  iVar2 = 1;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 0;
  FUN_100671e20();
  FUN_10067d3f4();
  piVar4[2] = iVar2 + iVar1 + iVar3;
  iVar1 = 3;
  FUN_100671e20();
  iVar2 = 2;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 1;
  FUN_100671e20();
  piVar4[3] = iVar2 + iVar1 + iVar3;
  iVar1 = 4;
  FUN_100671e20();
  iVar2 = 3;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 2;
  FUN_100671e20();
  FUN_10067d3f4();
  piVar4[4] = iVar2 + iVar1 + iVar3;
  iVar1 = 5;
  FUN_100671e20();
  iVar2 = 4;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 3;
  FUN_100671e20();
  piVar4[5] = iVar2 + iVar1 + iVar3;
  iVar1 = 6;
  FUN_100671e20();
  iVar2 = 5;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 4;
  FUN_100671e20();
  FUN_10067d3f4();
  piVar4[6] = iVar2 + iVar1 + iVar3;
  iVar1 = 7;
  FUN_100671e20();
  iVar2 = 6;
  FUN_100671e20();
  FUN_10067d3f4();
  iVar3 = 5;
  FUN_100671e20();
  piVar4[7] = iVar2 + iVar1 + iVar3;
  *param_2 = 8;
  return;
}

