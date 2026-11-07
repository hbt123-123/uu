// rea decompile_all
// name: FUN_100681b34
// address: 0x100681b34
// body: available
// range: 0x100681b34-0x100681cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100681b34(void)

{
  ulong uVar1;
  ID IVar2;
  char *pcVar3;
  ID unaff_x20;
  
  IVar2 = unaff_x20;
  _objc_retainAutorelease();
  pcVar3 = "objCType";
  uVar1 = _objc_msgSend(IVar2,"objCType");
  __sSS7cStringSSSPys4Int8VG_tcfC();
  if (DAT_100b2b4f0 != -1) {
    _swift_once(&DAT_100b2b4f0,FUN_10068bdf0);
  }
  IVar2 = _objc_msgSend(unaff_x20,"compare:",DAT_100b2b4f8);
  if (IVar2 == 0) {
    if (DAT_100b2b510 != -1) {
      _swift_once(&DAT_100b2b510,FUN_10068be58);
    }
    if ((uVar1 == DAT_100b2b518 && pcVar3 == DAT_100b2b520) ||
       (IVar2 = uVar1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar1,pcVar3,DAT_100b2b518,DAT_100b2b520,0), (IVar2 & 1) != 0))
    goto LAB_100681c40;
  }
  if (DAT_100b2b500 != -1) {
    _swift_once(&DAT_100b2b500,FUN_10068be24);
  }
  IVar2 = _objc_msgSend(unaff_x20,"compare:",DAT_100b2b508);
  if (IVar2 != 0) {
    _swift_bridgeObjectRelease(pcVar3);
    return 0;
  }
  if (DAT_100b2b528 != -1) {
    _swift_once(&DAT_100b2b528,FUN_10068bebc);
  }
  if ((uVar1 != DAT_100b2b530) || (pcVar3 != DAT_100b2b538)) {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar1,pcVar3,DAT_100b2b530,DAT_100b2b538,0);
    _swift_bridgeObjectRelease(pcVar3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    return 0;
  }
LAB_100681c40:
  _swift_bridgeObjectRelease(pcVar3);
  return 1;
}

