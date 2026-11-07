// rea decompile_all
// name: FUN_10030cb38
// address: 0x10030cb38
// body: available
// range: 0x10030cb38-0x10030cc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030cc50 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10030cb38(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 1) {
      lVar6 = *param_2;
      _swift_errorRetain(lVar6);
      *param_1 = lVar6;
      uVar4 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
        plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
        return plVar3;
      }
      lVar6 = 0;
      __s10Foundation4DateVMa();
      pcVar7 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
      (*pcVar7)(param_1,param_2,lVar6);
      lVar2 = 0;
      FUN_10030cc54();
      (*pcVar7)((long)param_1 + (long)*(int *)(lVar2 + 0x14),
                (long)param_2 + (long)*(int *)(lVar2 + 0x14),lVar6);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x18));
      uVar4 = 0;
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

