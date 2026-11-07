// rea decompile_all
// name: FUN_10069a0c0
// address: 0x10069a0c0
// body: available
// range: 0x10069a0c0-0x10069a1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069a0c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  int local_40 [2];
  undefined8 local_38;
  
  local_40[0] = 0;
  uVar2 = param_2;
  FUN_10069f164();
  local_38 = uVar2;
  FUN_10069a1a4(local_58,param_3,local_40);
  iVar1 = local_40[0];
  FUN_100699888(local_40[0],param_3,param_4,"mars_boost::filesystem::relative");
  if (iVar1 == 0) {
    FUN_10069a1a4(local_70,param_2,local_40);
    iVar1 = local_40[0];
    FUN_100699888(local_40[0],param_3,param_4,"mars_boost::filesystem::relative");
    if (iVar1 == 0) {
      FUN_10069d0e4(param_1,local_70,local_58);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}

