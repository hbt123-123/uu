// rea decompile_all
// name: FUN_10048270c
// address: 0x10048270c
// body: available
// range: 0x10048270c-0x1004827db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048270c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,code *UNRECOVERED_JUMPTABLE_00)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)(param_10 >> 0x3b) & 6 | (uint)((ulong)param_8 >> 0x3f);
  if (uVar1 < 3) {
    uVar2 = param_3;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        (*UNRECOVERED_JUMPTABLE_00)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001004827c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_9,param_10 & 0xcfffffffffffffff);
        return;
      }
      uVar2 = param_2;
      param_4 = param_3;
      if (uVar1 != 2) {
        return;
      }
    }
  }
  else {
    uVar2 = param_2;
    param_4 = param_3;
    if (((uVar1 != 3) && (uVar2 = param_6, param_4 = param_7, uVar1 != 4)) &&
       (uVar2 = param_2, param_4 = param_3, uVar1 != 5)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001004827d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar2,param_4);
  return;
}

