// rea decompile_all
// name: FUN_100251b50
// address: 0x100251b50
// body: available
// range: 0x100251b50-0x100251c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100251b50(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int local_44;
  
  local_44 = 0;
  uVar1 = param_1;
  FUN_10025415c(param_1,param_2,&local_44);
  if ((int)uVar1 == 0) {
    lVar3 = (long)local_44;
    uVar1 = param_1;
    FUN_10025415c(param_1,param_2,&local_44);
    if ((int)uVar1 == 0) {
      lVar4 = (long)local_44;
      uVar1 = param_1;
      FUN_10025415c(param_1,param_2,&local_44);
      if ((int)uVar1 == 0) {
        lVar2 = (long)local_44;
        FUN_10025415c(param_1,param_2,&local_44);
        lVar3 = lVar3 + lVar4 * 0x100 + lVar2 * 0x10000 + (long)local_44 * 0x1000000;
        if ((int)param_1 != 0) {
          lVar3 = 0;
        }
        goto LAB_100251bbc;
      }
    }
  }
  lVar3 = 0;
LAB_100251bbc:
  *param_3 = lVar3;
  return;
}

