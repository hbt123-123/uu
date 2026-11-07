// rea decompile_all
// name: FUN_10021a60c
// address: 0x10021a60c
// body: available
// range: 0x10021a60c-0x10021abef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021a60c(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  pid_t pVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  char *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong auStack_1a0 [4];
  undefined8 local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  byte local_150 [8];
  undefined8 uStack_148;
  undefined8 local_140;
  byte bStack_138;
  undefined7 uStack_137;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  byte local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  
  lVar6 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_160 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_160 + 0x40));
  lVar18 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar16 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  plVar8 = (long *)0x0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(plVar8[-1] + 0x40));
  lVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1003dc0f4();
  (**(code **)(*plVar8 + 0x108))(local_150);
  _swift_release(plVar8);
  bVar1 = local_150[0];
  uStack_c8 = uStack_148;
  uVar14 = uStack_c8;
  local_c0 = local_140;
  local_80 = local_100;
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uVar12 = local_a0;
  local_88 = uStack_108;
  uVar4 = local_88;
  uStack_90 = local_110;
  uStack_a8 = uStack_128;
  local_b0 = local_130;
  uVar15 = local_b0;
  if (CONCAT71(uStack_137,bStack_138) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10021b0a4,0,0xd00000000000009f,0x80000001008a54e0,&DAT_d000000000000018,
                  0x80000001008a55c0,0x3a,0);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar14 = 0;
    if (lVar6 != 0) {
      _swift_retain(lVar6);
      FUN_100414840();
      _swift_release(lVar6);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
    }
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  else {
    local_a0._0_1_ = (byte)local_120;
    bVar2 = (byte)local_a0;
    local_88._0_1_ = (byte)uStack_108;
    bVar3 = (byte)local_88;
    local_b0._0_1_ = (byte)local_130;
    uStack_c8._0_1_ = (byte)uStack_148;
    local_150[0] = (byte)uStack_c8 & 1;
    uStack_148 = local_140;
    bStack_138 = (byte)local_b0 & 1;
    local_130 = uStack_128;
    local_178 = lVar16;
    local_170 = lVar18;
    local_168 = lVar6;
    uStack_c8 = uVar14;
    local_b0 = uVar15;
    local_a0 = uVar12;
    local_88 = uVar4;
    FUN_10040ec0c();
    if (param_2 == 0) {
      local_f8[0] = bVar2 & 1;
      local_f0 = uStack_118;
      uStack_e8 = local_110;
      local_e0 = bVar3 & 1;
      local_d8 = local_100;
      FUN_10040ec0c();
      if (param_2 == 0) {
        if ((bVar1 & 1) == 0) {
          FUN_100040bb4(local_d0,&DAT_100a7dda8,&DAT_100813088);
          FUN_100401b14(0);
          FUN_1003fb48c(FUN_10021b19c,0,0xd00000000000009f,0x80000001008a54e0,&DAT_d000000000000018,
                        0x80000001008a55c0,0x45,0);
          lVar6 = *(long *)(unaff_x20 + 0x18);
          uVar14 = 0;
          if (lVar6 != 0) {
            _swift_retain(lVar6);
            FUN_100414840();
            _swift_release(lVar6);
            uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
          }
          *(undefined8 *)(unaff_x20 + 0x18) = 0;
        }
        else {
          _swift_bridgeObjectRetain(local_110);
          FUN_100040bb4(local_d0,&DAT_100a7dda8,&DAT_100813088);
          puVar9 = &DAT_1009a53f8;
          _swift_allocObject(&DAT_1009a53f8,0x18,7);
          _swift_weakInit(puVar9 + 0x10);
          _swift_retain(puVar9);
          pVar5 = _getpid();
          uVar14 = 0;
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
          local_158 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_1000aad00();
          puVar10 = &DAT_100a750d8;
          local_180 = uVar14;
          FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
          puVar11 = puVar10;
          FUN_100004bf8();
          lVar6 = local_178;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_178,&local_158,puVar10,puVar11,lVar7,local_180);
          lVar7 = local_170;
          (**(code **)(local_160 + 0x68))
                    (local_170,
                     *(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
                     ,local_168);
          uVar15 = 0xd000000000000023;
          __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
                    (0xd000000000000023,0x80000001008a55e0,lVar17,lVar6,lVar7,0);
          uVar12 = 0;
          FUN_100415800(0);
          _swift_allocObject();
          *(code **)(lVar17 + -0x18) = FUN_10021b380;
          *(undefined **)(lVar17 + -0x10) = puVar9;
          *(undefined8 *)(lVar17 + -0x20) = 0;
          uVar14 = 1;
          FUN_100414798(uVar12,1,pVar5,uVar15,FUN_10021b990,0,FUN_10021b1c8,0,thunk_FUN_10021b9f4);
          _swift_release(puVar9);
          uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
          *(undefined8 *)(unaff_x20 + 0x18) = uVar14;
          _swift_retain(uVar14);
          _swift_release(uVar15);
          FUN_100414918(local_f8);
          _swift_bridgeObjectRelease(local_110);
        }
        goto LAB_10021a948;
      }
      pcVar13 = s_controlled_1008a5630;
    }
    else {
      pcVar13 = s_controller_1008a5650;
    }
    _swift_bridgeObjectRelease(param_2);
    FUN_100040bb4(local_d0,&DAT_100a7dda8,&DAT_100813088);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar17 + -0x10) = 0x100000000000001a;
    *(ulong *)(lVar17 + -8) = (ulong)(pcVar13 + -0x20) | 0x8000000000000000;
    FUN_1003fb48c(FUN_10021b9c0,lVar17 + -0x20,0xd00000000000009f,0x80000001008a54e0,
                  &DAT_d000000000000018,0x80000001008a55c0,0x40,0);
    _swift_bridgeObjectRelease((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar14 = 0;
    if (lVar6 != 0) {
      _swift_retain(lVar6);
      FUN_100414840();
      _swift_release(lVar6);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
    }
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
LAB_10021a948:
  _swift_release(uVar14);
  return;
}

