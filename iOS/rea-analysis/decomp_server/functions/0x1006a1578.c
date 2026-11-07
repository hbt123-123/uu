// rea decompile_all
// name: FUN_1006a1578
// address: 0x1006a1578
// body: available
// range: 0x1006a1578-0x1006a1647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a1578(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined7 local_48;
  char cStack_41;
  
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    FUN_100384eb8(&local_80,*param_5,param_5[1]);
  }
  else {
    uStack_78 = param_5[1];
    local_80 = (void *)*param_5;
    local_70 = param_5[2];
  }
  FUN_1006a4e58(&local_60,param_4,&local_80);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = local_60;
  if (cStack_41 < '\0') {
    FUN_100384eb8(param_1 + 3,local_58,uStack_50);
    if (cStack_41 < '\0') {
      operator_delete(local_58);
    }
  }
  else {
    param_1[4] = uStack_50;
    param_1[3] = local_58;
    param_1[5] = CONCAT17(cStack_41,local_48);
  }
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  return;
}

