// rea decompile_all
// name: FUN_100769edc
// address: 0x100769edc
// body: available
// range: 0x100769edc-0x100769fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100769edc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_1[10] <= (int)param_1[5]) {
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    return;
  }
  if (param_1[0xd] == 0) {
    lVar2 = param_1[9];
    FUN_100761f90();
    param_1[0xd] = lVar2;
  }
  else {
    if ((param_1[0xe] == 0) && ((char)param_1[0xf] == '\0')) {
      lVar2 = param_1[9];
      FUN_100761f98();
      param_1[0xe] = lVar2;
      if (lVar2 != 0) goto LAB_100769f74;
    }
    lVar2 = param_1[0xb];
    if (lVar2 == 0) {
      if ((char)param_1[0xf] != '\0') {
        return;
      }
      lVar2 = param_1[9];
      FUN_100761f80();
      param_1[0xb] = lVar2;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    iVar1 = (int)lVar2;
    FUN_1007ae6e0();
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0xb] == 0) {
      return;
    }
    lVar2 = param_1[0xc];
  }
  if (lVar2 == 0) {
    return;
  }
LAB_100769f74:
  FUN_100762188();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  return;
}

