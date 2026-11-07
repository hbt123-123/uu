// rea decompile_all
// name: FUN_1007a54d0
// address: 0x1007a54d0
// body: available
// range: 0x1007a54d0-0x1007a5563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a54d0(long param_1,int param_2,long param_3,int param_4,long param_5,undefined8 param_6
                  ,undefined4 *param_7)

{
  int iVar1;
  long local_70;
  long lStack_68;
  long local_60;
  int local_58;
  long local_50;
  int local_48;
  long local_40;
  undefined8 uStack_38;
  
  local_58 = param_4 + 3;
  if (-1 < param_4) {
    local_58 = param_4;
  }
  lStack_68 = param_1 + param_2;
  local_58 = local_58 >> 2;
  local_50 = param_3 + local_58;
  local_48 = param_4 - local_58;
  iVar1 = 0;
  local_70 = param_1;
  local_60 = param_3;
  local_40 = param_5;
  uStack_38 = param_6;
  FUN_1007a5564(0,&local_70);
  if (iVar1 == 0) {
    (**(code **)(param_5 + 0x48))();
    iVar1 = (int)param_6;
  }
  if ((param_7 != (undefined4 *)0x0) && (iVar1 != 0)) {
    *param_7 = 0;
  }
  return;
}

