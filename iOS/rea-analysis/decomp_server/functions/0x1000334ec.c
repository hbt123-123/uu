// rea decompile_all
// name: FUN_1000334ec
// address: 0x1000334ec
// body: available
// range: 0x1000334ec-0x100033607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_1000334ec(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
             ulong param_6,double param_7,ulong param_8,ID param_9)

{
  undefined8 uVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  if ((param_9 & 0x180000000) == 0) {
    uVar1 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    FUN_1003d56bc(param_9,uVar1);
    if (param_9 == 0) goto LAB_100033520;
  }
  else {
LAB_100033520:
    param_9 = _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"screenId");
    FUN_100027f54();
    if (param_9 == 0) {
      dVar2 = 0.0;
      dVar3 = 0.0;
      goto LAB_1000335e8;
    }
  }
  dVar3 = 0.0;
  dVar2 = 0.0;
  if ((param_6 & 1) == 0) {
    _objc_msgSend(param_9,"frame");
    dVar2 = param_3 * param_5 + 0.0;
  }
  if ((param_8 & 1) == 0) {
    _objc_msgSend(param_9,"frame");
    dVar3 = param_4 * param_7 + 0.0;
  }
  FUN_10003f55c(dVar2,dVar3,param_9);
LAB_1000335e8:
  auVar4._8_8_ = dVar3;
  auVar4._0_8_ = dVar2;
  return auVar4;
}

