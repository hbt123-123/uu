// rea decompile_all
// name: FUN_100421dcc
// address: 0x100421dcc
// body: available
// range: 0x100421dcc-0x100421e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100421dcc(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_100421e20:
  lVar1 = param_2;
  uVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || ((uVar2 & 1) != 0)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000100421e34;
  pcVar3 = *(code **)(param_3 + 0x78);
  goto LAB_100421e08;
code_r0x000100421e34:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_100421e08:
    (*pcVar3)();
  }
  goto LAB_100421e20;
}

