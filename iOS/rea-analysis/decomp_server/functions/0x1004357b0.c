// rea decompile_all
// name: FUN_1004357b0
// address: 0x1004357b0
// body: available
// range: 0x1004357b0-0x1004358d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004358d4 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004357b0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar8 = param_1[2];
  lVar7 = param_1[0xc];
  if ((param_2 & 1) == 0) {
    uVar4 = *(ulong *)(lVar7 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((uVar4 & 1) == 0) {
      lVar9 = param_1[0xc];
      uVar5 = 0;
      FUN_1004341f8(0);
      _swift_allocObject();
      FUN_10043886c(lVar7,uVar5);
      *(long *)(lVar9 + 0x10) = lVar7;
    }
    _swift_beginAccess(lVar7 + 0xd0,param_1 + 9,1,0);
    uVar5 = *(undefined8 *)(lVar7 + 0xd0);
    uVar3 = *(undefined8 *)(lVar7 + 0xd8);
    uVar6 = *(undefined8 *)(lVar7 + 0xe0);
    *(undefined8 *)(lVar7 + 0xd0) = uVar1;
    *(undefined8 *)(lVar7 + 0xd8) = uVar2;
    *(undefined8 *)(lVar7 + 0xe0) = uVar8;
    switchD_10004048c::caseD_6d(uVar5,uVar3,uVar6);
  }
  else {
    FUN_100008184(uVar2,uVar8);
    uVar4 = *(ulong *)(lVar7 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((uVar4 & 1) == 0) {
      lVar9 = param_1[0xc];
      uVar5 = 0;
      FUN_1004341f8(0);
      _swift_allocObject();
      FUN_10043886c(lVar7,uVar5);
      *(long *)(lVar9 + 0x10) = lVar7;
    }
    _swift_beginAccess(lVar7 + 0xd0,param_1 + 6,1,0);
    uVar5 = *(undefined8 *)(lVar7 + 0xd0);
    uVar3 = *(undefined8 *)(lVar7 + 0xd8);
    uVar6 = *(undefined8 *)(lVar7 + 0xe0);
    *(undefined8 *)(lVar7 + 0xd0) = uVar1;
    *(undefined8 *)(lVar7 + 0xd8) = uVar2;
    *(undefined8 *)(lVar7 + 0xe0) = uVar8;
    switchD_10004048c::caseD_6d(uVar5,uVar3,uVar6);
    FUN_100006cdc(param_1[1],param_1[2]);
  }
  _free(param_1);
  return;
}

