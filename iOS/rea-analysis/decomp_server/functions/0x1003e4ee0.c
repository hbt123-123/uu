// rea decompile_all
// name: FUN_1003e4ee0
// address: 0x1003e4ee0
// body: available
// range: 0x1003e4ee0-0x1003e51ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003e4ee0(code *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  code *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  
  local_a8 = *(long *)(param_4 + -8);
  local_a0 = param_4;
  local_98 = param_7;
  local_78 = param_1;
  local_70 = param_2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  puVar1 = PTR___sSTTL_100995860;
  lVar4 = 0;
  local_88 = param_5;
  local_68 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness(0,param_5);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar5 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar13 - extraout_x8_01;
  local_80 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_80 + 0x40));
  lVar5 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,param_5,param_3,puVar1,PTR___s8IteratorSTTl_100995710);
  local_90 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar5 - extraout_x8_03;
  (**(code **)(local_80 + 0x10))(lVar5,unaff_x20,param_3);
  uVar7 = local_88;
  __sST12makeIterator0B0QzyFTj(lVar11,param_3,local_88);
  _swift_getAssociatedConformanceWitness
            (uVar7,param_3,lVar6,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
  lVar5 = 0;
  while( true ) {
    __sSt4next7ElementQzSgyFTj(lVar10,lVar6,uVar7);
    lVar8 = lVar10;
    (**(code **)(lVar12 + 0x30))(lVar10,1,lVar4);
    if ((int)lVar8 == 1) {
      (**(code **)(local_90 + 8))(lVar11,lVar6);
      return lVar5;
    }
    (**(code **)(lVar12 + 0x20))(uVar13,lVar10,lVar4);
    uVar9 = uVar13;
    (*local_78)(uVar13,local_68);
    if (unaff_x21 != 0) break;
    (**(code **)(lVar12 + 8))(uVar13,lVar4);
    bVar3 = SCARRY8(lVar5,uVar9 & 1);
    lVar5 = lVar5 + (uVar9 & 1);
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e5130);
      (*pcVar2)();
    }
  }
  (**(code **)(lVar12 + 8))(uVar13,lVar4);
  (**(code **)(local_90 + 8))(lVar11,lVar6);
  (**(code **)(local_a8 + 0x20))(local_98,local_68,local_a0);
  return lVar5;
}

