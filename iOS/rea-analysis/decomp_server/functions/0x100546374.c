// rea decompile_all
// name: FUN_100546374
// address: 0x100546374
// body: available
// range: 0x100546374-0x100546483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100546374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar1 = &local_b0;
  local_b0 = 0x2e;
  uStack_a8 = 0xe100000000000000;
  local_90 = param_1;
  uStack_88 = param_2;
  FUN_1004f9a5c();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&local_b0,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
  FUN_100548074(param_3,&local_b0);
  FUN_100546b58(&local_90,puVar1,&local_b0,param_4,param_5);
  if (unaff_x21 == 0) {
    pcVar3 = *(code **)(param_6 + 0x40);
    lVar2 = 0;
    FUN_1005480c4(0,param_5,param_6);
    (*pcVar3)(&local_90,lVar2,&PTR_PTR_1009d1158,param_5,param_6);
    (**(code **)(*(long *)(lVar2 + -8) + 8))(&local_90,lVar2);
  }
  return;
}

