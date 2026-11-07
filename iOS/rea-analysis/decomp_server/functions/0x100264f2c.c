// rea decompile_all
// name: FUN_100264f2c
// address: 0x100264f2c
// body: available
// range: 0x100264f2c-0x100264fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100264fd8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100264f2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  ID self;
  undefined *puVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_1009a8dc8;
    _swift_allocObject(&DAT_1009a8dc8,0x20,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    pcVar5 = FUN_100265378;
  }
  self = *(ID *)(lVar3 + 0x10);
  _swift_retain(lVar3);
  FUN_10004090c(param_1,param_2);
  _objc_msgSend(self,"lock");
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(code **)(lVar3 + 0x18) = pcVar5;
  *(undefined **)(lVar3 + 0x20) = puVar4;
  FUN_10007ed2c(uVar1,uVar2);
  _objc_msgSend(*(ID *)(lVar3 + 0x10),"unlock");
  _swift_release(lVar3);
  return;
}

