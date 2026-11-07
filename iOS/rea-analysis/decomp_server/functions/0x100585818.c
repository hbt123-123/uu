// rea decompile_all
// name: FUN_100585818
// address: 0x100585818
// body: available
// range: 0x100585818-0x10058595f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10058595c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100585818(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_1 = (undefined8 *)*param_1;
  lVar4 = param_1[0x12];
  if ((param_2 & 1) == 0) {
    uVar7 = param_1[1];
    uVar2 = *param_1;
    uVar11 = param_1[3];
    uVar9 = param_1[2];
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((uVar1 & 1) == 0) {
      lVar5 = param_1[0x12];
      uVar3 = 0;
      FUN_1005a8534(0);
      _swift_allocObject();
      FUN_1005a0a24(lVar4,uVar3);
      *(long *)(lVar5 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x38,param_1 + 4,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    uVar8 = *(undefined8 *)(lVar4 + 0x40);
    uVar6 = *(undefined8 *)(lVar4 + 0x48);
    uVar10 = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x40) = uVar7;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
    *(undefined8 *)(lVar4 + 0x50) = uVar11;
    *(undefined8 *)(lVar4 + 0x48) = uVar9;
    FUN_100541944(uVar3,uVar8,uVar6,uVar10);
  }
  else {
    param_1[5] = param_1[1];
    param_1[4] = *param_1;
    param_1[7] = param_1[3];
    param_1[6] = param_1[2];
    FUN_1005a7f80(param_1 + 4,param_1 + 8);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((uVar1 & 1) == 0) {
      lVar5 = param_1[0x12];
      uVar2 = 0;
      FUN_1005a8534(0);
      _swift_allocObject();
      FUN_1005a0a24(lVar4,uVar2);
      *(long *)(lVar5 + 0x10) = lVar4;
    }
    uVar6 = param_1[5];
    uVar3 = param_1[4];
    uVar10 = param_1[7];
    uVar8 = param_1[6];
    _swift_beginAccess(lVar4 + 0x38,param_1 + 0xf,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    uVar11 = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x40) = uVar6;
    *(undefined8 *)(lVar4 + 0x38) = uVar3;
    *(undefined8 *)(lVar4 + 0x50) = uVar10;
    *(undefined8 *)(lVar4 + 0x48) = uVar8;
    FUN_100541944(uVar2,uVar9,uVar7,uVar11);
    param_1[9] = param_1[1];
    param_1[8] = *param_1;
    param_1[0xb] = param_1[3];
    param_1[10] = param_1[2];
    FUN_1005a7fb4(param_1 + 8);
  }
  _free(param_1);
  return;
}

