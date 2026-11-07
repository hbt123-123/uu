// rea decompile_all
// name: FUN_100484b80
// address: 0x100484b80
// body: available
// range: 0x100484b80-0x100484d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100484d18 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100484b80(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar6 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = param_1[3];
  uVar3 = param_1[4];
  uVar8 = param_1[5];
  uVar16 = param_1[6];
  lVar15 = param_1[0x10];
  if ((param_2 & 1) == 0) {
    uVar12 = *(ulong *)(lVar15 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((uVar12 & 1) == 0) {
      lVar17 = param_1[0x10];
      uVar13 = 0;
      FUN_100492e44(0);
      _swift_allocObject();
      FUN_10048be0c(lVar15,uVar13);
      *(long *)(lVar17 + 0x10) = lVar15;
    }
    _swift_beginAccess(lVar15 + 0x28,param_1 + 0xd,1,0);
    uVar13 = *(undefined8 *)(lVar15 + 0x28);
    uVar9 = *(undefined8 *)(lVar15 + 0x30);
    uVar4 = *(undefined8 *)(lVar15 + 0x38);
    uVar10 = *(undefined8 *)(lVar15 + 0x40);
    uVar5 = *(undefined8 *)(lVar15 + 0x48);
    uVar11 = *(undefined8 *)(lVar15 + 0x50);
    uVar14 = *(undefined8 *)(lVar15 + 0x58);
    *(undefined8 *)(lVar15 + 0x28) = uVar1;
    *(undefined8 *)(lVar15 + 0x30) = uVar6;
    *(undefined8 *)(lVar15 + 0x38) = uVar2;
    *(undefined8 *)(lVar15 + 0x40) = uVar7;
    *(undefined8 *)(lVar15 + 0x48) = uVar3;
    *(undefined8 *)(lVar15 + 0x50) = uVar8;
    *(undefined8 *)(lVar15 + 0x58) = uVar16;
    FUN_100492ebc(uVar13,uVar9,uVar4,uVar10,uVar5,uVar11,uVar14);
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar3);
    FUN_100008184(uVar8,uVar16);
    uVar12 = *(ulong *)(lVar15 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((uVar12 & 1) == 0) {
      lVar17 = param_1[0x10];
      uVar13 = 0;
      FUN_100492e44(0);
      _swift_allocObject();
      FUN_10048be0c(lVar15,uVar13);
      *(long *)(lVar17 + 0x10) = lVar15;
    }
    _swift_beginAccess(lVar15 + 0x28,param_1 + 10,1,0);
    uVar13 = *(undefined8 *)(lVar15 + 0x28);
    uVar9 = *(undefined8 *)(lVar15 + 0x30);
    uVar4 = *(undefined8 *)(lVar15 + 0x38);
    uVar10 = *(undefined8 *)(lVar15 + 0x40);
    uVar5 = *(undefined8 *)(lVar15 + 0x48);
    uVar11 = *(undefined8 *)(lVar15 + 0x50);
    uVar14 = *(undefined8 *)(lVar15 + 0x58);
    *(undefined8 *)(lVar15 + 0x28) = uVar1;
    *(undefined8 *)(lVar15 + 0x30) = uVar6;
    *(undefined8 *)(lVar15 + 0x38) = uVar2;
    *(undefined8 *)(lVar15 + 0x40) = uVar7;
    *(undefined8 *)(lVar15 + 0x48) = uVar3;
    *(undefined8 *)(lVar15 + 0x50) = uVar8;
    *(undefined8 *)(lVar15 + 0x58) = uVar16;
    FUN_100492ebc(uVar13,uVar9,uVar4,uVar10,uVar5,uVar11,uVar14);
    uVar1 = param_1[3];
    uVar3 = param_1[4];
    uVar2 = param_1[5];
    uVar6 = param_1[6];
    _swift_bridgeObjectRelease(param_1[1]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar3);
    FUN_100006cdc(uVar2,uVar6);
  }
  _free(param_1);
  return;
}

