// rea decompile_all
// name: FUN_10055e368
// address: 0x10055e368
// body: available
// range: 0x10055e368-0x10055e427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055e368(undefined1 *param_1)

{
  byte *pbVar1;
  bool bVar2;
  long unaff_x20;
  long unaff_x21;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  if (pbVar1 != *(byte **)(unaff_x20 + 0x30)) {
    if (*pbVar1 == 0x2d) {
      pbVar1 = pbVar1 + 1;
      *(byte **)(unaff_x20 + 0x28) = pbVar1;
      if ((pbVar1 != *(byte **)(unaff_x20 + 0x30)) && (0xfffffff5 < *pbVar1 - 0x3a)) {
        FUN_10055e428();
        if (unaff_x21 != 0) {
          return;
        }
        if (-1 < (long)param_1) {
          return;
        }
        bVar2 = param_1 == (undefined1 *)0x8000000000000000;
        param_1 = (undefined1 *)0x8000000000000000;
        if (bVar2) {
          return;
        }
      }
    }
    else {
      FUN_10055e428();
      if (unaff_x21 != 0) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
    }
  }
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,param_1,0,0);
  *param_1 = 1;
  _swift_willThrow();
  return;
}

