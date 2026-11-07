// rea decompile_all
// name: FUN_1003ef6d4
// address: 0x1003ef6d4
// body: available
// range: 0x1003ef6d4-0x1003ef867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ef7b0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003ef864 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003ef748) */

ulong FUN_1003ef6d4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar5 = unaff_x20[3];
  lVar1 = unaff_x20[4];
  uVar6 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = param_1;
  FUN_1003eae24(param_1,uVar6);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj
              (param_1,uVar6,*(undefined8 *)(lVar7 + 0x60));
    _swift_release(uVar3);
    IVar4 = unaff_x20[2];
    if (IVar4 == 0) {
      FUN_100006cdc(param_1,uVar6);
      return param_1;
    }
    uVar2 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,uVar6);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar1);
    _objc_msgSend(IVar4,"setData:forKey:",uVar2,lVar5);
    FUN_100006cdc(param_1,uVar6);
  }
  else {
    IVar4 = unaff_x20[2];
    if (IVar4 == 0) {
      return 0;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar1);
    _objc_msgSend(IVar4,"removeValueForKey:",lVar5);
  }
  return 0;
}

