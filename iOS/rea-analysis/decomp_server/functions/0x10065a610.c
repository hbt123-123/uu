// rea decompile_all
// name: FUN_10065a610
// address: 0x10065a610
// body: available
// range: 0x10065a610-0x10065a6cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10065a610(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  if ((char)param_1[4] == '\x01') {
    _swift_bridgeObjectRetain(param_5);
    FUN_10065eb84(uVar4,uVar1,(char)uVar2,uVar5,0);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065a678);
      (*pcVar3)();
    }
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    FUN_100642874(uVar4,uVar1,(char)uVar2,uVar5,0);
  }
  return param_2;
}

