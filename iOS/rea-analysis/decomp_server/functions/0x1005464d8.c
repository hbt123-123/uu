// rea decompile_all
// name: FUN_1005464d8
// address: 0x1005464d8
// body: available
// range: 0x1005464d8-0x1005468cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005464d8(ulong param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70 [2];
  
  uVar7 = param_3;
  _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_10090176c);
  if (uVar7 == 0 || param_3 == 0) {
LAB_100546870:
    lVar13 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar8 = param_1;
    FUN_1005481e4(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    lVar13 = *(long *)(uVar8 + 0x10);
    pcVar14 = *(code **)(uVar7 + 8);
    (*pcVar14)(&local_118,param_3,uVar7);
    local_70[0] = local_108;
    if (*(long *)(local_108 + 0x10) == 0) {
LAB_100546590:
      lVar13 = 0;
      bVar15 = true;
    }
    else {
      lVar9 = uVar8 + 0x20;
      uVar10 = lVar9 + lVar13;
      FUN_100511c0c();
      if ((uVar10 & 1) == 0) goto LAB_100546590;
      bVar15 = false;
      lVar13 = *(long *)(*(long *)(local_108 + 0x38) + lVar9 * 8);
    }
    _swift_release(local_118);
    local_78 = local_110;
    FUN_100040bb4(&local_78,&DAT_100aaa400,&DAT_100837ad0);
    FUN_100040bb4(local_70,&DAT_100aaa3e8,&DAT_100837fb0);
    local_80 = local_100;
    FUN_100040bb4(&local_80,&DAT_100aaa3e8,&DAT_100837fb0);
    local_88 = local_f8;
    FUN_100040bb4(&local_88,&DAT_100aaa3f0,&DAT_100837ae0);
    local_90 = local_f0;
    FUN_100040bb4(&local_90,&DAT_100aaa3f8,&DAT_100837fc0);
    _swift_release(uVar8);
    if (!bVar15) {
      (*pcVar14)(&local_e8,param_3);
      local_98 = local_e0;
      if ((*(long *)(local_e0 + 0x10) != 0) && (lVar9 = lVar13, FUN_1003618e4(), (uVar7 & 1) != 0))
      {
        puVar12 = (undefined8 *)(*(long *)(local_e0 + 0x38) + lVar9 * 0x50);
        uVar11 = *puVar12;
        uVar2 = puVar12[1];
        uVar1 = puVar12[2];
        uVar3 = puVar12[3];
        uVar7 = puVar12[7];
        lVar9 = puVar12[8];
        uVar4 = *(undefined1 *)(puVar12 + 9);
        bVar5 = *(byte *)((long)puVar12 + 0x49);
        uVar6 = *(undefined2 *)(puVar12 + 4);
        FUN_10051f440();
        FUN_10050f830(uVar7,lVar9,uVar4,bVar5);
        _swift_release(local_e8);
        FUN_100040bb4(&local_98,&DAT_100aaa400,&DAT_100837ad0);
        local_a0 = local_d8;
        FUN_100040bb4(&local_a0,&DAT_100aaa3e8,&DAT_100837fb0);
        local_a8 = local_d0;
        FUN_100040bb4(&local_a8,&DAT_100aaa3e8,&DAT_100837fb0);
        local_b0 = local_c8;
        FUN_100040bb4(&local_b0,&DAT_100aaa3f0,&DAT_100837ae0);
        local_b8 = local_c0;
        FUN_100040bb4(&local_b8,&DAT_100aaa3f8,&DAT_100837fc0);
        FUN_10050f830(uVar7,lVar9,uVar4,bVar5);
        FUN_10051f468(uVar11,uVar2,uVar1,uVar3,uVar6);
        FUN_10051f490(uVar7,lVar9,uVar4,bVar5);
        if ((bVar5 & 1) != 0) {
          __ss12StaticStringV11descriptionSSvg(uVar7,lVar9,uVar4);
        }
        if ((uVar7 == param_1) && (lVar9 == param_2)) {
          _swift_bridgeObjectRelease(lVar9);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar7,lVar9,param_1,param_2,0);
          _swift_bridgeObjectRelease(lVar9);
          if ((uVar7 & 1) == 0) goto LAB_100546870;
        }
        uVar11 = 0;
        goto LAB_100546878;
      }
      _swift_release(local_e8);
      FUN_100040bb4(&local_98,&DAT_100aaa400,&DAT_100837ad0);
      local_a0 = local_d8;
      FUN_100040bb4(&local_a0,&DAT_100aaa3e8,&DAT_100837fb0);
      local_a8 = local_d0;
      FUN_100040bb4(&local_a8,&DAT_100aaa3e8,&DAT_100837fb0);
      local_b0 = local_c8;
      FUN_100040bb4(&local_b0,&DAT_100aaa3f0,&DAT_100837ae0);
      local_b8 = local_c0;
      FUN_100040bb4(&local_b8,&DAT_100aaa3f8,&DAT_100837fc0);
      goto LAB_100546870;
    }
  }
  uVar11 = 1;
LAB_100546878:
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = lVar13;
  return auVar16;
}

