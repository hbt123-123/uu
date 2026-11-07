// rea decompile_all
// name: FUN_10022ee10
// address: 0x10022ee10
// body: available
// range: 0x10022ee10-0x10022eff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10022ee10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  char *pcVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  ID local_70;
  char *pcStack_68;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xe;
  _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (*(long *)(lVar5 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar5);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10022eff4);
    (*pcVar3)();
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(lVar5);
    IVar6 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    pcVar7 = "bundleIdentifier";
    local_70 = NSBundle::bundleIdentifier(IVar6,"bundleIdentifier");
    if (local_70 == 0) {
      pcVar7 = (char *)0xec00000064695f65;
      local_70 = 0x6c646e75625f6f6e;
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    }
    pcStack_68 = pcVar7;
    _swift_bridgeObjectRetain(pcVar7);
    __sSS6appendyySSF(0x4c746e756f43462f,0xec0000002f73676f);
    _swift_bridgeObjectRelease(pcVar7);
    pcVar7 = pcStack_68;
    IVar6 = local_70;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar8,uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,IVar6,pcVar7);
    _swift_bridgeObjectRelease(pcVar7);
    (**(code **)(lVar9 + 8))(lVar8,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10022efe8);
  (*pcVar3)();
}

