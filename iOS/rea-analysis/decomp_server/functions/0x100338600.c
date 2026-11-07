// rea decompile_all
// name: FUN_100338600
// address: 0x100338600
// body: available
// range: 0x100338600-0x1003386f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003386f0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100338600(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined *self;
  long lVar3;
  ID IVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  FUN_10033abb0(param_3,param_4,param_5,param_6,param_7,param_8);
  self = &_OBJC_CLASS___NSInputStream;
  _objc_allocWithZone();
  lVar3 = param_1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
  IVar4 = _objc_msgSend((ID)self,"initWithData:",lVar3);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar5 = param_2 >> 0x30 & 0xff;
      goto LAB_1003386c8;
    }
    iVar7 = (int)((ulong)param_1 >> 0x20);
    if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003386f8);
      (*pcVar2)();
    }
    uVar5 = (ulong)(iVar7 - (int)param_1);
  }
  else {
    if (uVar6 != 2) {
      uVar5 = 0;
      goto LAB_1003386c8;
    }
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003386ac);
      (*pcVar2)();
    }
  }
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003386c4);
    (*pcVar2)();
  }
LAB_1003386c8:
  FUN_100338e34(IVar4,uVar5,param_3);
  _swift_bridgeObjectRelease(param_3);
  return 0;
}

