// rea decompile_all
// name: FUN_1006a1950
// address: 0x1006a1950
// body: available
// range: 0x1006a1950-0x1006a1a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a1950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  void *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined1 auStack_90 [8];
  void *local_88;
  char local_71;
  void *local_70;
  char local_59;
  void *local_58;
  char local_41;
  
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    FUN_100384eb8(&local_b0,*param_5,param_5[1]);
  }
  else {
    uStack_a8 = param_5[1];
    local_b0 = (void *)*param_5;
    local_a0 = param_5[2];
  }
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    FUN_100384eb8(&local_d0,*param_6,param_6[1]);
  }
  else {
    uStack_c8 = param_6[1];
    local_d0 = (void *)*param_6;
    local_c0 = param_6[2];
  }
  if (*(char *)((long)param_7 + 0x17) < '\0') {
    FUN_100384eb8(&local_f0,*param_7,param_7[1]);
  }
  else {
    uStack_e8 = param_7[1];
    local_f0 = (void *)*param_7;
    local_e0 = param_7[2];
  }
  FUN_1006a513c(auStack_90,param_4,&local_b0,&local_d0,&local_f0);
  FUN_1006a53e4(param_1,param_2,param_3,auStack_90);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  if (local_59 < '\0') {
    operator_delete(local_70);
  }
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  if (local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (local_c0 < 0) {
    operator_delete(local_d0);
  }
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  return;
}

