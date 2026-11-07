// rea decompile_all
// name: thunk_FUN_100512958
// address: 0x100512954
// body: available
// range: 0x100512954-0x100512957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100512958(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar1,0x100900ffc,&TargetProtocolRequirement_100901004);
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ(uVar2,uVar3,uVar1,*(undefined8 *)(param_4 + 8));
  return;
}

