// rea decompile_all
// name: FUN_100529aa4
// address: 0x100529aa4
// body: available
// range: 0x100529aa4-0x100529b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100529aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined1 auStack_78 [40];
  
  pcVar3 = (code *)auStack_a0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = *(long *)(unaff_x20 + 0x50);
  FUN_10003f030(unaff_x20 + 0x30,uVar1);
  (**(code **)(lVar2 + 8))(auStack_a0,param_2,param_3,param_4,uVar1,lVar2);
  if (local_88 != 0) {
    FUN_1000a0074(auStack_a0,auStack_78);
    FUN_100505f7c(auStack_a0,param_4);
    FUN_100529b88(param_4);
    (*pcVar3)(auStack_a0,0);
    FUN_10003f094(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100529b88);
  (*pcVar3)();
}

