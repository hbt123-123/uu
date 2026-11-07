// rea decompile_all
// name: FUN_1001d1550
// address: 0x1001d1550
// body: available
// range: 0x1001d1550-0x1001d1a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d1550(long param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar12;
  long extraout_x12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1a0 [16];
  undefined8 auStack_190 [2];
  long alStack_180 [2];
  undefined1 auStack_170 [8];
  undefined8 local_168;
  code *local_160;
  undefined8 local_158;
  code *local_150;
  undefined8 local_148;
  undefined1 *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  code *local_108;
  long local_100;
  undefined *local_f8 [9];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar5 = 0;
  local_118 = param_8;
  local_110 = param_6;
  local_108 = param_7;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_120 = *(long *)(lVar5 + -8);
  local_138 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  lVar5 = 0;
  local_140 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_130 = *(long *)(lVar5 + -8);
  local_128 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_130 + 0x40));
  lVar13 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar14 = *(long *)(lVar5 + -8);
  local_100 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar5 - extraout_x12;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  puVar6 = (undefined *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    local_148 = param_3;
    (*param_2)();
    if (((ulong)puVar7 & 1) != 0) {
      puVar8 = param_4;
      FUN_1001d0b74();
      uVar9 = 0;
      FUN_100401b14(0);
      if ((int)puVar8 == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)(uVar9);
        uVar9 = local_110;
        *(undefined8 *)(lVar15 + -0x20) = param_5;
        *(undefined8 *)(lVar15 + -0x18) = uVar9;
        *(undefined8 **)(lVar15 + -0x10) = param_4;
        FUN_1003fb48c(FUN_1001d3724,lVar15 + -0x30,0xd0000000000000a1,0x800000010089dec0,
                      0xd00000000000002d,0x800000010089e1f0,0x14d,0);
        if (local_108 != (code *)0x0) {
          (*local_108)();
        }
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar4 = local_110;
        local_168 = param_5;
        local_160 = param_2;
        *(undefined8 *)(lVar15 + -0x20) = param_5;
        *(undefined8 *)(lVar15 + -0x18) = uVar4;
        *(int *)(lVar15 + -0x10) = (int)puVar8;
        *(undefined8 **)(lVar15 + -8) = param_4;
        FUN_1003fb4bc(FUN_1001d36a8,lVar15 + -0x30,0xd0000000000000a1,0x800000010089dec0,
                      0xd00000000000002d,0x800000010089e1f0,0x151,0);
        local_158 = *(undefined8 *)(puVar6 + 0x18);
        __s8Dispatch0A4TimeV3nowACyFZ(lVar5);
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar15,0x3fb999999999999a,lVar5);
        local_150 = *(code **)(lVar14 + 8);
        (*local_150)(lVar5,local_100);
        puVar7 = &DAT_1009a33f8;
        _swift_allocObject(&DAT_1009a33f8,0x18,7);
        _swift_weakInit(puVar7 + 0x10,puVar6);
        puVar10 = &DAT_1009a3740;
        _swift_allocObject(&DAT_1009a3740,0x90,7);
        pcVar1 = local_108;
        uVar3 = local_118;
        uVar9 = local_148;
        uVar17 = param_4[1];
        uVar16 = *param_4;
        uVar12 = param_4[2];
        *(undefined8 *)(puVar10 + 0x40) = param_4[3];
        *(undefined8 *)(puVar10 + 0x38) = uVar12;
        uVar12 = param_4[4];
        uVar19 = param_4[7];
        uVar18 = param_4[6];
        *(undefined8 *)(puVar10 + 0x50) = param_4[5];
        *(undefined8 *)(puVar10 + 0x48) = uVar12;
        *(undefined8 *)(puVar10 + 0x60) = uVar19;
        *(undefined8 *)(puVar10 + 0x58) = uVar18;
        *(undefined **)(puVar10 + 0x10) = puVar7;
        *(code **)(puVar10 + 0x18) = local_160;
        *(undefined8 *)(puVar10 + 0x20) = local_148;
        uVar12 = param_4[8];
        *(undefined8 *)(puVar10 + 0x30) = uVar17;
        *(undefined8 *)(puVar10 + 0x28) = uVar16;
        *(undefined8 *)(puVar10 + 0x68) = uVar12;
        *(undefined8 *)(puVar10 + 0x70) = local_168;
        *(undefined8 *)(puVar10 + 0x78) = uVar4;
        *(code **)(puVar10 + 0x80) = local_108;
        *(undefined8 *)(puVar10 + 0x88) = local_118;
        local_90 = thunk_FUN_1001d370c;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_1009a3758;
        local_88 = puVar10;
        local_160 = __Block_copy(&local_b0);
        _swift_retain(puVar7);
        _swift_retain(uVar9);
        FUN_1001d2ad0(param_4,local_f8);
        _swift_bridgeObjectRetain(uVar4);
        FUN_10004090c(pcVar1,uVar3);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
        local_f8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar8 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar10 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar11 = &DAT_100a75aa0;
        FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
        lVar5 = local_138;
        puVar2 = local_140;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_140,local_f8,puVar10,puVar11,local_138,puVar8);
        pcVar1 = local_160;
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (lVar15,lVar13,puVar2,local_160);
        __Block_release(pcVar1);
        (**(code **)(local_120 + 8))(puVar2,lVar5);
        (**(code **)(local_130 + 8))(lVar13,local_128);
        (*local_150)(lVar15,local_100);
        _swift_release(puVar6);
        puVar6 = local_88;
        _swift_release(puVar7);
      }
    }
    _swift_release(puVar6);
  }
  return;
}

