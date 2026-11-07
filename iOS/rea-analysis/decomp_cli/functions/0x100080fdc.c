// rea decompile_all
// name: FUN_100080fdc
// address: 0x100080fdc
// body: available
// range: 0x100080fdc-0x10008109b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100081098 to 0x100081208 FUN_100081208 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100080fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (uint)param_3 >> 6 & 3;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (uVar1 == 1) {
      __ss6HasherV8_combineyySuF(1);
      __sSJ4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
      puVar2 = (undefined1 *)(ulong)((uint)param_3 & 1);
      __ss6HasherV8_combineyys5UInt8VF(puVar2);
      goto LAB_10008106c;
    }
    uVar3 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  puVar2 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar2,param_1,param_2);
LAB_10008106c:
  __ss6HasherV9_finalizeSiyF();
  FUN_100081208(param_1,param_2,param_3,puVar2);
  return;
}

