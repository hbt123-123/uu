// rea decompile_all
// name: FUN_1002174b0
// address: 0x1002174b0
// body: available
// range: 0x1002174b0-0x100217697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002174b0(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong local_70 [2];
  
  lVar3 = 0;
  local_70[0] = param_1;
  local_70[1] = param_2;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a77e70;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar9 - extraout_x8_00;
  lVar5 = 0;
  FUN_1000e49dc();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_3,lVar13,&DAT_100a77e70,&DAT_10080cca0);
  lVar6 = lVar13;
  (**(code **)(lVar10 + 0x30))(lVar13,1,lVar5);
  if ((int)lVar6 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a77e70,&DAT_10080cca0);
  }
  else {
    FUN_1000823d8(lVar13,lVar12,FUN_1000e49dc);
    puVar1 = (ulong *)(lVar12 + *(int *)(lVar5 + 0x1c));
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar2 = uVar7 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar2 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      _swift_bridgeObjectRetain(uVar8);
      FUN_1000d27dc(lVar12,FUN_1000e49dc);
      goto LAB_100217670;
    }
    FUN_1000d27dc(lVar12,FUN_1000e49dc);
  }
  uVar7 = local_70[1];
  FUN_1000d6df8(local_70[0],local_70[1]);
  uVar8 = uVar7;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar9);
  _swift_bridgeObjectRelease(uVar7);
  __s10Foundation3URLV17lastPathComponentSSvg();
  (**(code **)(lVar11 + 8))(lVar9,lVar3);
LAB_100217670:
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uVar7;
  return auVar14;
}

