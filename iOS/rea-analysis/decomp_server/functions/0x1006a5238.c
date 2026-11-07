// rea decompile_all
// name: FUN_1006a5238
// address: 0x1006a5238
// body: available
// range: 0x1006a5238-0x1006a531f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006a5238(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100384eb8(&local_50,*param_3,param_3[1]);
  }
  else {
    uStack_48 = param_3[1];
    local_50 = (void *)*param_3;
    local_40 = param_3[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_100384eb8(&local_70,*param_4,param_4[1]);
  }
  else {
    uStack_68 = param_4[1];
    local_70 = (void *)*param_4;
    local_60 = param_4[2];
  }
  FUN_1006a5320(param_1,param_2,&local_50,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    FUN_100384eb8(param_1 + 0x38,*param_5,param_5[1]);
  }
  else {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x48) = param_5[2];
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  return param_1;
}

