// rea decompile_all
// name: FUN_1003fd404
// address: 0x1003fd404
// body: available
// range: 0x1003fd404-0x1003fd577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fd404(undefined8 *param_1)

{
  ID IVar1;
  undefined *puVar2;
  ID self;
  ID local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  IVar1 = DAT_100a8e0c8;
  if (DAT_100a8e0c8 == 0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    DAT_100a8e0c8 = 0;
    local_50 = 0;
    local_48 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1b);
    _swift_bridgeObjectRelease(local_48);
    local_50 = 0x707954726f727265;
    local_48 = 0xea00000000003d65;
    _swift_getErrorValue(IVar1,auStack_38,&local_68);
    _swift_getDynamicType(local_68,uStack_60,1);
    uStack_70 = local_58;
    puVar2 = &DAT_100a8e1b0;
    FUN_100004bb4(&DAT_100a8e1b0,&DAT_100824ad8);
    __sSS10describingSSx_tclufC(&local_78,puVar2);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar2);
    __sSS6appendyySSF(0x726f7272658cbcef,0xad00003d65646f43);
    self = IVar1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    local_78 = _objc_msgSend(self,"code");
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar2);
    _swift_errorRelease(IVar1);
  }
  *param_1 = local_50;
  param_1[1] = local_48;
  return;
}

