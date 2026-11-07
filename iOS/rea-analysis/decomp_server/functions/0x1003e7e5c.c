// rea decompile_all
// name: FUN_1003e7e5c
// address: 0x1003e7e5c
// body: available
// range: 0x1003e7e5c-0x1003e7ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e7ec8 to 0x1003e82c8 FUN_1003e82c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e7e5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = 0;
  FUN_10039845c(0);
  uVar2 = uVar1;
  FUN_1003afbb4();
  puVar3 = auStack_78;
  __s14CoreFoundation9_CFObjectPAAE4hash4intoys6HasherVz_tF(puVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  FUN_1003e82c8(param_1,puVar3);
  return;
}

