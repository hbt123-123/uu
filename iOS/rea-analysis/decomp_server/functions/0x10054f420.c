// rea decompile_all
// name: FUN_10054f420
// address: 0x10054f420
// body: available
// range: 0x10054f420-0x10054f4cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054f420(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  piVar2 = param_1;
  FUN_100560bb8();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_100560bb8();
    FUN_10055e368();
    if (unaff_x21 != 0) {
      return;
    }
    if (piVar2 == (int *)(long)(int)piVar2) {
      *param_1 = (int)piVar2;
      return;
    }
    uVar3 = 1;
  }
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,piVar2,0,0);
  *(undefined1 *)piVar2 = uVar3;
  _swift_willThrow();
  return;
}

