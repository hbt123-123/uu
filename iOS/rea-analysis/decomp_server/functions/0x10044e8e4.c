// rea decompile_all
// name: FUN_10044e8e4
// address: 0x10044e8e4
// body: available
// range: 0x10044e8e4-0x10044ea6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044ea68 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044e8e4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1 = (undefined8 *)*param_1;
  lVar4 = param_1[0x15];
  if ((param_2 & 1) == 0) {
    uVar12 = param_1[1];
    uVar10 = *param_1;
    uVar2 = param_1[3];
    uVar14 = param_1[2];
    uVar8 = param_1[4];
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = param_1[0x15];
      FUN_10045e65c(0);
      _swift_allocObject();
      FUN_10045e67c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x20,param_1 + 5,1,0);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    uVar11 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    uVar13 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x28) = uVar12;
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
    *(undefined8 *)(lVar4 + 0x30) = uVar14;
    *(undefined8 *)(lVar4 + 0x40) = uVar8;
    FUN_1004337b0(uVar5,uVar11,uVar9,uVar13,uVar3);
  }
  else {
    param_1[6] = param_1[1];
    param_1[5] = *param_1;
    param_1[8] = param_1[3];
    param_1[7] = param_1[2];
    param_1[9] = param_1[4];
    FUN_10003efc8(param_1 + 5,param_1 + 10);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = param_1[0x15];
      FUN_10045e65c(0);
      _swift_allocObject();
      FUN_10045e67c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    uVar5 = param_1[9];
    uVar3 = param_1[8];
    uVar13 = param_1[7];
    uVar11 = param_1[6];
    uVar9 = param_1[5];
    _swift_beginAccess(lVar4 + 0x20,param_1 + 0x12,1,0);
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar12 = *(undefined8 *)(lVar4 + 0x28);
    uVar10 = *(undefined8 *)(lVar4 + 0x30);
    uVar14 = *(undefined8 *)(lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x28) = uVar11;
    *(undefined8 *)(lVar4 + 0x20) = uVar9;
    *(undefined8 *)(lVar4 + 0x38) = uVar3;
    *(undefined8 *)(lVar4 + 0x30) = uVar13;
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    FUN_1004337b0(uVar8,uVar12,uVar10,uVar14,uVar2);
    param_1[0xb] = param_1[1];
    param_1[10] = *param_1;
    param_1[0xd] = param_1[3];
    param_1[0xc] = param_1[2];
    param_1[0xe] = param_1[4];
    FUN_10045eb24(param_1 + 10);
  }
  _free(param_1);
  return;
}

