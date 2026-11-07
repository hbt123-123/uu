// rea decompile_all
// name: FUN_100646734
// address: 0x100646734
// body: available
// range: 0x100646734-0x1006467c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100646734(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined1 *)(param_2 + 2);
  uVar5 = param_2[3];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar6 = param_3[3];
  uVar4 = *(undefined1 *)(param_3 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  _swift_bridgeObjectRetain(uVar5);
  FUN_100642874(uVar1,uVar2,uVar4,uVar6,0);
  param_1[1] = uVar8;
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = uVar5;
  return;
}

