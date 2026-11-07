// rea decompile_all
// name: FUN_1000997ac
// address: 0x1000997ac
// body: available
// range: 0x1000997ac-0x100099883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000997ac(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long *unaff_x20;
  long lVar1;
  long local_48;
  
  lVar1 = *unaff_x20;
  if (*(long *)(lVar1 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    local_48 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    FUN_10008109c(param_2,param_3,param_4);
    if ((param_3 & 1) == 0) {
      FUN_10001fc18(&local_48,&DAT_100104b50,&DAT_1000d5bd8);
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      FUN_100083828(*(long *)(lVar1 + 0x38) + param_2 * 0x48,param_1);
      FUN_10001fc18(&local_48,&DAT_100104b50,&DAT_1000d5bd8);
    }
  }
  return;
}

