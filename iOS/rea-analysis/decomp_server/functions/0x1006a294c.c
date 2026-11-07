// rea decompile_all
// name: FUN_1006a294c
// address: 0x1006a294c
// body: available
// range: 0x1006a294c-0x1006a2b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a2b00 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a294c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,char *param_6,int param_7)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 **local_78 [2];
  char local_61;
  char local_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_1006a1e14(local_78,param_1,param_2,param_4);
  if (*(long *)(param_1 + 0x248) == 0) {
    param_1 = 0;
  }
  else {
    FUN_1006a22dc(param_1,local_78,param_5);
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100384eb8(&local_90,*param_3,param_3[1]);
  }
  else {
    uStack_88 = param_3[1];
    local_90 = (char *)*param_3;
    local_80 = param_3[2];
  }
  std::string::append((char *)&local_90);
  pppuVar1 = (undefined8 ***)local_78[0];
  if (-1 < local_61) {
    pppuVar1 = local_78;
  }
  std::string::append((char *)&local_90,(ulong)pppuVar1);
  if (0 < param_1) {
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    _snprintf(local_60,0x18,"_%ld");
    std::string::append((char *)&local_90);
  }
  std::string::append((char *)&local_90);
  puVar2 = (undefined8 *)*param_5;
  if (-1 < *(char *)((long)param_5 + 0x17)) {
    puVar2 = param_5;
  }
  std::string::append((char *)&local_90,(ulong)puVar2);
  pcVar3 = local_90;
  if (local_80 < 0) {
    _strncpy(param_6,local_90,(ulong)(param_7 - 1));
    param_6[param_7 - 1] = '\0';
    operator_delete(pcVar3);
  }
  else {
    _strncpy(param_6,(char *)&local_90,(ulong)(param_7 - 1));
    param_6[param_7 - 1] = '\0';
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

