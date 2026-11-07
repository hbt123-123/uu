// rea decompile_all
// name: FUN_10044f830
// address: 0x10044f830
// body: available
// range: 0x10044f830-0x10044f987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044f984 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044f830(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar10 = param_1[2];
  uVar5 = param_1[3];
  lVar9 = param_1[0xd];
  if ((param_2 & 1) == 0) {
    uVar8 = *(ulong *)(lVar9 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar9 = lVar11;
    if ((uVar8 & 1) == 0) {
      lVar12 = param_1[0xd];
      FUN_10045e65c(0);
      _swift_allocObject();
      FUN_10045e67c();
      _swift_release(lVar11);
      *(long *)(lVar12 + 0x10) = lVar9;
    }
    _swift_beginAccess(lVar9 + 0x90,param_1 + 10,1,0);
    uVar2 = *(undefined8 *)(lVar9 + 0x90);
    uVar6 = *(undefined8 *)(lVar9 + 0x98);
    uVar3 = *(undefined8 *)(lVar9 + 0xa0);
    uVar7 = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)(lVar9 + 0x90) = uVar1;
    *(undefined8 *)(lVar9 + 0x98) = uVar4;
    *(undefined8 *)(lVar9 + 0xa0) = uVar10;
    *(undefined8 *)(lVar9 + 0xa8) = uVar5;
    FUN_1004338a4(uVar2,uVar6,uVar3,uVar7);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    FUN_100008184(uVar10,uVar5);
    uVar8 = *(ulong *)(lVar9 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar9 = lVar11;
    if ((uVar8 & 1) == 0) {
      lVar12 = param_1[0xd];
      FUN_10045e65c(0);
      _swift_allocObject();
      FUN_10045e67c();
      _swift_release(lVar11);
      *(long *)(lVar12 + 0x10) = lVar9;
    }
    _swift_beginAccess(lVar9 + 0x90,param_1 + 7,1,0);
    uVar2 = *(undefined8 *)(lVar9 + 0x90);
    uVar6 = *(undefined8 *)(lVar9 + 0x98);
    uVar3 = *(undefined8 *)(lVar9 + 0xa0);
    uVar7 = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)(lVar9 + 0x90) = uVar1;
    *(undefined8 *)(lVar9 + 0x98) = uVar4;
    *(undefined8 *)(lVar9 + 0xa0) = uVar10;
    *(undefined8 *)(lVar9 + 0xa8) = uVar5;
    FUN_1004338a4(uVar2,uVar6,uVar3,uVar7);
    uVar1 = param_1[2];
    uVar10 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    FUN_100006cdc(uVar1,uVar10);
  }
  _free(param_1);
  return;
}

