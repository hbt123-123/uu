// rea decompile_all
// name: FUN_10069ac9c
// address: 0x10069ac9c
// body: available
// range: 0x10069ac9c-0x10069ada3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069ad30 to 0x100384eb8 FUN_100384eb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ac9c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  void *local_58;
  undefined8 uStack_50;
  char cStack_41;
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char cStack_29;
  
  uVar4 = (uint)(char)*(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (int)uVar4) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar1 != 0) {
    puVar2 = param_2;
    FUN_10069b58c();
    if ((int)puVar2 == 0) {
      FUN_100699694(&local_58,0);
      if (cStack_41 < '\0') {
        FUN_100384eb8(&local_40,local_58,uStack_50);
      }
      else {
        uStack_38 = uStack_50;
        local_40 = local_58;
        cStack_29 = cStack_41;
      }
      ppvVar3 = &local_40;
      FUN_10069bf10(ppvVar3,param_2);
      if (*(char *)((long)ppvVar3 + 0x17) < '\0') {
        FUN_100384eb8(param_1,*ppvVar3,ppvVar3[1]);
      }
      else {
        pvVar7 = ppvVar3[1];
        pvVar6 = *ppvVar3;
        param_1[2] = ppvVar3[2];
        param_1[1] = pvVar7;
        *param_1 = pvVar6;
      }
      if (cStack_29 < '\0') {
        operator_delete(local_40);
      }
      if (-1 < cStack_41) {
        return;
      }
      operator_delete(local_58);
      return;
    }
    uVar4 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  if ((uVar4 >> 7 & 1) == 0) {
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[2] = param_2[2];
    return;
  }
  FUN_100384eb8(param_1,*param_2,param_2[1]);
  return;
}

