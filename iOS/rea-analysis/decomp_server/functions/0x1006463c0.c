// rea decompile_all
// name: FUN_1006463c0
// address: 0x1006463c0
// body: available
// range: 0x1006463c0-0x100646453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006463c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_50 = *(undefined1 *)(param_2 + 2);
  local_48 = param_2[3];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = param_3[3];
  uVar3 = *(undefined1 *)(param_3 + 2);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  _swift_bridgeObjectRetain(local_48);
  (*param_6)(&local_60,uVar1,uVar2,uVar3,uVar4);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  *(undefined1 *)(param_1 + 2) = local_50;
  param_1[3] = local_48;
  return;
}

