// rea decompile_all
// name: FUN_10039ab9c
// address: 0x10039ab9c
// body: available
// range: 0x10039ab9c-0x10039accf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010039ac74) */

byte FUN_10039ab9c(void)

{
  ID IVar1;
  undefined8 uVar2;
  char *pcVar3;
  long unaff_x20;
  byte local_41;
  
  IVar1 = *(ID *)(unaff_x20 + 0x10);
  if (IVar1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
    pcVar3 = "getDataForKey:";
    IVar1 = _objc_msgSend(IVar1,"getDataForKey:",uVar2);
    if (IVar1 != 0) {
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar1);
      uVar2 = 0;
      __s10Foundation11JSONDecoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONDecoderCACycfc();
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (&local_41,PTR___sSbN_1009958c8,IVar1,pcVar3,PTR___sSbN_1009958c8,
                 PTR___sSbSesWP_1009958e0);
      FUN_100006cdc(IVar1,pcVar3);
      _swift_release(uVar2);
      goto LAB_10039ac98;
    }
  }
  local_41 = *(byte *)(unaff_x20 + 0x28);
LAB_10039ac98:
  return local_41 & 1;
}

