// rea decompile_all
// name: FUN_100545b18
// address: 0x100545b18
// body: available
// range: 0x100545b18-0x100545b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100545b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar5 = *(undefined1 *)((long)param_2 + 0x21);
  uVar6 = *(undefined1 *)(param_2 + 4);
  FUN_10050f830(uVar1,uVar3,uVar6,uVar5);
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar7 = *(undefined1 *)((long)param_1 + 0x21);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar8 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar6;
  *(undefined1 *)((long)param_1 + 0x21) = uVar5;
  FUN_10051f490(uVar2,uVar4,uVar8,uVar7);
  return param_1;
}

