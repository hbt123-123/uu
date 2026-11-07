// rea decompile_all
// name: FUN_100535fa0
// address: 0x100535fa0
// body: available
// range: 0x100535fa0-0x100536093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100535fa0(float *param_1,double param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x21;
  undefined1 auStack_a8 [96];
  long local_48;
  
  if ((param_2 != 0.0) && (lVar1 = param_3 - (long)param_2, 0 < lVar1)) {
    local_48 = 0;
    FUN_10052a52c(param_4,auStack_a8);
    FUN_100535954(param_2,param_3,&local_48,lVar1);
    if (unaff_x21 != 0) {
      FUN_1004f9924(auStack_a8);
      return;
    }
    FUN_1004f9924(auStack_a8);
    if ((((param_3 & 1) == 0) && (local_48 == lVar1)) && ((uint)ABS((float)param_2) < 0x7f800000)) {
      *param_1 = (float)param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0.0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

