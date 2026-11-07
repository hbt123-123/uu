// rea decompile_all
// name: FUN_100683024
// address: 0x100683024
// body: available
// range: 0x100683024-0x1006830d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100683024(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 local_38;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    bVar3 = SCARRY8(param_1,1);
    param_1 = param_1 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006830d8);
      (*pcVar2)();
    }
  }
  else if (uVar1 == 1) {
    uVar4 = *(undefined8 *)(unaff_x20 + 8);
    local_38 = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    FUN_10068d8f4(param_1,param_2,param_3 & 1,uVar4);
    FUN_100040bb4(&local_38,&DAT_100ab9ea0,&DAT_10084d528);
  }
  return param_1;
}

