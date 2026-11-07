// rea decompile_all
// name: FUN_100555350
// address: 0x100555350
// body: available
// range: 0x100555350-0x1005554d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100555350(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 != pcVar1) && (*pcVar3 == ':')) {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_100560bb8();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
  }
  if ((pcVar3 == pcVar1) || (*pcVar3 != '[')) {
    FUN_100554980(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_100560bb8();
    pcVar3 = *(char **)(unaff_x20 + 0x28);
    if ((pcVar3 == *(char **)(unaff_x20 + 0x30)) || (*pcVar3 != ']')) {
      while (puVar2 = param_1, FUN_100554980(param_1,param_2,param_3,param_4,param_5,param_6),
            unaff_x21 == 0) {
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        pcVar1 = *(char **)(unaff_x20 + 0x30);
        if ((pcVar3 != pcVar1) && (*pcVar3 == ']')) goto LAB_1005553ec;
        FUN_100560bb8();
        pcVar3 = *(char **)(unaff_x20 + 0x28);
        if ((pcVar3 == pcVar1) || (*pcVar3 != ',')) {
          FUN_1004f9b10();
          _swift_allocError(&DAT_1009d1c98,puVar2,0,0);
          *puVar2 = 0;
          _swift_willThrow();
          return;
        }
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
        FUN_100560bb8();
      }
    }
    else {
LAB_1005553ec:
      *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      FUN_100560bb8();
    }
  }
  return;
}

