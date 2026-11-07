// rea decompile_all
// name: FUN_1000add24
// address: 0x1000add24
// body: available
// range: 0x1000add24-0x1000ae027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000add24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar11 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffff70 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation12URLQueryItemVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100a76b08;
  FUN_100004bb4(&DAT_100a76b08,&DAT_10080b6e0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar13 - extraout_x8_01;
  lVar3 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  puVar11 = (undefined *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC(lVar10);
  lVar4 = lVar10;
  (**(code **)(lVar15 + 0x30))(lVar10,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a76b08,&DAT_10080b6e0);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    pcVar9 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  }
  else {
    puVar5 = puVar11;
    (**(code **)(lVar15 + 0x20))(puVar11,lVar10,lVar3);
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg();
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar5 != (undefined *)0x0) {
      puVar8 = puVar5;
    }
    __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC(lVar13,param_2,param_3,param_4,param_5)
    ;
    puVar5 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar5 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100034f70(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100034f70(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    (**(code **)(lVar14 + 0x20))
              (puVar8 + *(long *)(lVar14 + 0x48) * uVar1 +
                        ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)),lVar13,lVar2);
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(puVar8);
    __s10Foundation13URLComponentsV3urlAA3URLVSgvg(puVar12);
    (**(code **)(lVar15 + 8))(puVar11,lVar3);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar2 = *(long *)(lVar4 + -8);
    pcVar9 = *(code **)(lVar2 + 0x30);
    puVar6 = puVar12;
    (*pcVar9)(puVar12,1,lVar4);
    if ((int)puVar6 == 1) {
      (**(code **)(lVar2 + 0x10))(param_1,unaff_x20,lVar4);
      puVar6 = puVar12;
      (*pcVar9)(puVar12,1,lVar4);
      if ((int)puVar6 == 1) {
        return;
      }
      FUN_100040bb4(puVar12,&DAT_100a766c8,&DAT_10080b1d0);
      return;
    }
    pcVar9 = *(code **)(lVar2 + 0x20);
  }
  (*pcVar9)(param_1);
  return;
}

