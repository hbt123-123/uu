// rea decompile_all
// name: FUN_10026d5bc
// address: 0x10026d5bc
// body: available
// range: 0x10026d5bc-0x10026d873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10026d5bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong local_70 [2];
  
  lVar8 = 0;
  __s10Foundation3URLVMa();
  local_70[0] = *(ulong *)(lVar8 + -8);
  lVar15 = (long)local_70 - (*(long *)(local_70[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_70[1] = lVar8;
  FUN_10026d874();
  uVar12 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar18 = (ulong *)(lVar15 - uVar12);
  lVar17 = (long)puVar18 - uVar12;
  puVar19 = (undefined8 *)(lVar17 - uVar12);
  puVar10 = &DAT_100a81138;
  FUN_100004bb4(&DAT_100a81138,&DAT_100815250);
  lVar13 = (long)puVar19 - (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(lVar13 + *(int *)(puVar10 + 0x30));
  FUN_100082394(param_1,lVar13,FUN_10026d874);
  FUN_100082394(param_2,puVar1,FUN_10026d874);
  lVar8 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar9);
  if ((int)lVar8 == 0) {
    FUN_100082394(lVar13,puVar19,FUN_10026d874);
    uVar2 = *puVar19;
    uVar4 = puVar19[1];
    puVar19 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar9);
    if ((int)puVar19 == 0) {
      uVar3 = *puVar1;
      uVar7 = puVar1[1];
      uVar11 = uVar2;
      FUN_1000094a4(uVar2,uVar4,uVar3,uVar7);
      uVar16 = (uint)uVar11;
      FUN_100006cdc(uVar3,uVar7);
      FUN_100006cdc(uVar2,uVar4);
LAB_10026d82c:
      FUN_1000d27dc(lVar13,FUN_10026d874);
      goto LAB_10026d83c;
    }
    FUN_100006cdc(uVar2,uVar4);
LAB_10026d7e8:
    FUN_10026e6d8(lVar13);
  }
  else {
    if ((int)lVar8 == 1) {
      FUN_100082394(lVar13,lVar17,FUN_10026d874);
      puVar19 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar9);
      uVar5 = local_70[1];
      uVar12 = local_70[0];
      if ((int)puVar19 == 1) {
        (**(code **)(local_70[0] + 0x20))(lVar15,puVar1,local_70[1]);
        lVar8 = lVar17;
        __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar17,lVar15);
        uVar16 = (uint)lVar8;
        pcVar14 = *(code **)(uVar12 + 8);
        (*pcVar14)(lVar15,uVar5);
        (*pcVar14)(lVar17,uVar5);
        goto LAB_10026d82c;
      }
      (**(code **)(local_70[0] + 8))(lVar17,local_70[1]);
      goto LAB_10026d7e8;
    }
    FUN_100082394(lVar13,puVar18,FUN_10026d874);
    uVar12 = *puVar18;
    uVar5 = puVar18[1];
    puVar19 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar9);
    if ((int)puVar19 != 2) goto LAB_10026d7e8;
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    FUN_100263ce4(0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar12,uVar2);
    if ((uVar12 & 1) != 0) {
      uVar16 = (uint)(uVar5 == uVar6);
      goto LAB_10026d82c;
    }
    FUN_1000d27dc(lVar13,FUN_10026d874);
  }
  uVar16 = 0;
LAB_10026d83c:
  return uVar16 & 1;
}

