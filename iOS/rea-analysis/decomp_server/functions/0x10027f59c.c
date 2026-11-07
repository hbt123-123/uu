// rea decompile_all
// name: FUN_10027f59c
// address: 0x10027f59c
// body: available
// range: 0x10027f59c-0x10027f72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027f6c8 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10027f59c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 3) {
      if (iVar2 == 0) {
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
        uVar4 = 0;
      }
      else if (iVar2 == 1) {
        lVar6 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
        uVar4 = 1;
      }
      else {
        if (iVar2 != 2) {
LAB_10027f6b0:
          plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
          return plVar3;
        }
        lVar6 = *param_2;
        _swift_errorRetain(lVar6);
        *param_1 = lVar6;
        uVar4 = 2;
      }
    }
    else if (iVar2 == 3) {
      lVar6 = *param_2;
      _swift_errorRetain(lVar6);
      *param_1 = lVar6;
      uVar4 = 3;
    }
    else if (iVar2 == 4) {
      lVar6 = *param_2;
      _swift_errorRetain(lVar6);
      *param_1 = lVar6;
      uVar4 = 4;
    }
    else {
      if (iVar2 != 5) goto LAB_10027f6b0;
      lVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar6;
      _swift_bridgeObjectRetain();
      uVar4 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

