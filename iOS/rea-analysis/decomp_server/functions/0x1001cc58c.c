// rea decompile_all
// name: FUN_1001cc58c
// address: 0x1001cc58c
// body: available
// range: 0x1001cc58c-0x1001ccfe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001cca40) */
/* WARNING: Removing unreachable block (ram,0x0001001cc858) */

void FUN_1001cc58c(undefined4 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *aBlock;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_260 [16];
  ulong auStack_250 [3];
  undefined2 auStack_238 [4];
  undefined8 local_230;
  undefined8 uStack_228;
  long local_220;
  long local_218;
  undefined *local_210;
  ulong local_208;
  ulong local_200;
  long local_1f8;
  long local_1f0;
  undefined4 local_1e4;
  ulong local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  code *local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined1 auStack_170 [72];
  undefined1 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined1 local_c8;
  char local_c0 [16];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_1d0 = CONCAT44(local_1d0._4_4_,param_1);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_190 = *(long *)(lVar2 + -8);
  local_188 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_190 + 0x40));
  lVar13 = (long)&local_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_198 = lVar13;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar2 + -8);
  local_1a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_1a8 = lVar13;
  __s8Dispatch0A4TimeVMa();
  local_1c0 = *(code **)(lVar2 + -8);
  local_1b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_1c0 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - extraout_x12;
  lVar2 = 0;
  local_1b8 = lVar13;
  __s7Network10NWEndpointO4HostOMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a7d3f0;
  puVar11 = &DAT_100812370;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar13 - extraout_x8_03;
  uVar4 = 0;
  __s7Network10NWEndpointO4PortVMa();
  lVar2 = *(long *)(uVar4 - 8);
  uVar5 = uVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar2 + 0x40));
  lVar17 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar17 - extraout_x12_00;
  FUN_1001ce1fc();
  if ((uVar5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    local_d0 = 1;
    local_c8 = 0;
    local_c0[0] = '\x17';
    local_c0[1] = '\0';
    local_c0[2] = '\0';
    local_c0[3] = '\0';
    local_c0[4] = '\0';
    local_c0[5] = '\0';
    local_c0[6] = '\0';
    local_c0[7] = -0x30;
    local_c0[8] = -0x50;
    local_c0[9] = -0x21;
    local_c0[10] = -0x77;
    local_c0[0xb] = '\0';
    local_c0[0xc] = '\x01';
    local_c0[0xd] = '\0';
    local_c0[0xe] = '\0';
    local_c0[0xf] = -0x80;
    uVar9 = uVar7;
    FUN_1001d2d04();
    puVar3 = &DAT_1009a3870;
    puVar6 = &local_d0;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar6,&DAT_1009a3870,uVar9);
    _swift_release(uVar7);
    local_128 = 1;
    FUN_100006cdc(0,0xc000000000000000);
    local_b0 = (undefined *)0x1;
    puStack_98 = (undefined *)0x3;
    local_90 = (code *)CONCAT71(local_90._1_7_,local_128);
    uStack_70 = 0xc000000000000000;
    local_78 = 0;
    local_120 = (undefined *)0x1;
    uStack_108 = 3;
    local_100 = local_128;
    uStack_e0 = 0xc000000000000000;
    local_e8 = 0;
    uStack_118 = uVar8;
    local_110 = uVar1;
    local_f8 = puVar6;
    puStack_f0 = puVar3;
    local_a8 = uVar8;
    local_a0 = (code *)uVar1;
    local_88 = puVar6;
    puStack_80 = puVar3;
    FUN_1001d2ad0(&local_b0,auStack_170);
    FUN_1001d2d44(&local_120);
    puVar3 = &DAT_1009a33f8;
    _swift_allocObject(&DAT_1009a33f8,0x18,7);
    _swift_weakInit(puVar3 + 0x10,unaff_x20);
    _swift_retain(puVar3);
    FUN_1001cdaac(&local_b0,0x4b43415f4e5953,0xe700000000000000,thunk_FUN_1001d3780,puVar3,0,0);
    _swift_release_n(puVar3,2);
    FUN_1001d2d44(&local_b0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(lVar14 + -0x10) = param_2;
    FUN_1003fb4bc(FUN_1001d2d78,lVar14 + -0x20,0xd0000000000000a1,0x800000010089dec0,
                  &DAT_d000000000000018,0x800000010089dfd0,0x4a,0);
  }
  else {
    uVar5 = param_2;
    local_1d8 = lVar15;
    FUN_1001d2d80();
    if (puVar11 != (undefined *)0x0) {
      local_1e0 = uVar5;
      FUN_1001d2e44();
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar11);
      }
      else {
        __s7Network10NWEndpointO4PortV8rawValueAESgs6UInt16V_tcfC(lVar16,param_3);
        local_1e4 = (undefined4)param_3;
        lVar15 = lVar16;
        (**(code **)(lVar2 + 0x30))(lVar16,1,uVar4);
        if ((int)lVar15 != 1) {
          local_1f8 = lVar14;
          (**(code **)(lVar2 + 0x20))(lVar14,lVar16,uVar4);
          local_230 = *(undefined8 *)(param_2 + 8);
          uStack_228 = *(undefined8 *)(param_2 + 0x10);
          local_208 = param_2;
          local_200 = uVar4;
          local_1f0 = lVar2;
          FUN_1001cd2ec(local_230,uStack_228,0);
          __s7Network12NWConnectionCMa(0);
          local_210 = puVar11;
          _swift_bridgeObjectRetain(puVar11);
          __s7Network10NWEndpointO4HostOyAESScfC(lVar13,local_1e0,puVar11);
          (**(code **)(lVar2 + 0x10))(lVar17,lVar14,uVar4);
          uVar8 = 0;
          __s7Network12NWParametersCMa(0);
          __s7Network12NWParametersC3tcpACvgZ();
          __s7Network12NWConnectionC4host4port5usingAcA10NWEndpointO4HostO_AH4PortVAA12NWParametersCtcfC
                    (lVar13,lVar17,uVar8);
          lVar2 = 0;
          FUN_1001d2c80();
          _swift_allocObject();
          uVar1 = uStack_228;
          uVar8 = local_230;
          *(undefined2 *)(lVar2 + 0x30) = 0;
          *(undefined1 *)(lVar2 + 0x32) = 0;
          puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          *(undefined **)(lVar2 + 0x40) = puVar3;
          *(undefined **)(lVar2 + 0x48) = puVar3;
          *(undefined2 *)(lVar2 + 0x50) = 0;
          *(undefined1 *)(lVar2 + 0x52) = 0;
          *(undefined4 *)(lVar2 + 0x10) = (undefined4)local_1d0;
          *(undefined8 *)(lVar2 + 0x18) = local_230;
          *(undefined8 *)(lVar2 + 0x20) = uStack_228;
          *(long *)(lVar2 + 0x28) = lVar13;
          _swift_beginAccess(unaff_x20 + 0x20,&local_b0,0x21,0);
          _swift_retain(lVar13);
          local_218 = lVar2;
          _swift_retain(lVar2);
          uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
          _swift_isUniquelyReferenced_nonNull_native(uVar9);
          local_120 = *(undefined **)(unaff_x20 + 0x20);
          *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
          FUN_1000625ac(lVar2,uVar8,uVar1,uVar9);
          *(undefined **)(unaff_x20 + 0x20) = local_120;
          _swift_endAccess(&local_b0);
          puVar3 = &DAT_1009a33f8;
          puVar10 = puVar3;
          _swift_allocObject(&DAT_1009a33f8,0x18,7);
          _swift_weakInit(puVar10 + 0x10,unaff_x20);
          puVar11 = &DAT_1009a3420;
          _swift_allocObject(&DAT_1009a3420,0x28,7);
          *(undefined **)(puVar11 + 0x10) = puVar10;
          *(undefined8 *)(puVar11 + 0x18) = uVar8;
          *(undefined8 *)(puVar11 + 0x20) = uVar1;
          _swift_retain(puVar10);
          FUN_10004090c(FUN_1001d306c,puVar11);
          local_220 = lVar13;
          __s7Network12NWConnectionC18stateUpdateHandleryAC5StateOcSgvs(FUN_1001d306c,puVar11);
          _swift_release(puVar10);
          _swift_release(puVar11);
          local_1d0 = *(undefined8 *)(unaff_x20 + 0x18);
          __s7Network12NWConnectionC5start5queueySo012OS_dispatch_D0C_tF();
          lVar2 = local_1c8;
          __s8Dispatch0A4TimeV3nowACyFZ(local_1c8);
          lVar13 = local_1b8;
          __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF
                    (local_1b8,lVar2,
                     unaff_x20 + _TtC14UURemoteServer18PortMappingHandler::connectTimeout);
          lVar15 = local_1b0;
          local_1c0 = *(code **)((long)local_1c0 + 8);
          (*local_1c0)(lVar2,local_1b0);
          _swift_allocObject(&DAT_1009a33f8,0x18,7);
          _swift_weakInit(puVar3 + 0x10,unaff_x20);
          puVar11 = &DAT_1009a3448;
          _swift_allocObject(&DAT_1009a3448,0x28,7);
          *(undefined **)(puVar11 + 0x10) = puVar3;
          *(undefined8 *)(puVar11 + 0x18) = uVar8;
          *(undefined8 *)(puVar11 + 0x20) = uVar1;
          local_90 = FUN_1001d3078;
          local_b0 = PTR___NSConcreteStackBlock_100995490;
          local_a8 = 0x42000000;
          local_a0 = FUN_1000acdb4;
          puStack_98 = &DAT_1009a3460;
          local_88 = (undefined8 *)puVar11;
          aBlock = __Block_copy(&local_b0);
          _swift_retain(puVar3);
          lVar2 = local_1a8;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_1a8);
          local_120 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar6 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar11 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar12 = &DAT_100a75aa0;
          FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
          lVar17 = local_188;
          lVar16 = local_198;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_198,&local_120,puVar11,puVar12,local_188,puVar6);
          __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (lVar13,lVar2,lVar16,aBlock);
          __Block_release(aBlock);
          (**(code **)(local_190 + 8))(lVar16,lVar17);
          (**(code **)(local_1d8 + 8))(lVar2,local_1a0);
          (*local_1c0)(lVar13,lVar15);
          puVar6 = local_88;
          _swift_release(puVar3);
          _swift_release(puVar6);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          uVar5 = local_1e0;
          puVar3 = local_210;
          *(ulong *)(lVar14 + -0x20) = local_208;
          *(ulong *)(lVar14 + -0x18) = uVar5;
          *(undefined **)(lVar14 + -0x10) = puVar3;
          *(short *)(lVar14 + -8) = (short)local_1e4;
          FUN_1003fb48c(FUN_1001d3084,lVar14 + -0x30,0xd0000000000000a1,0x800000010089dec0,
                        &DAT_d000000000000018,0x800000010089dfd0,0x6f,0);
          _swift_release(local_220);
          _swift_release(local_218);
          _swift_bridgeObjectRelease(puVar3);
          (**(code **)(local_1f0 + 8))(local_1f8,local_200);
          return;
        }
        _swift_bridgeObjectRelease(puVar11);
        FUN_100040bb4(lVar16,&DAT_100a7d3f0,&DAT_100812370);
      }
    }
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    local_d0 = 1;
    local_c8 = 0;
    builtin_strncpy(local_c0,"invalid target",0xf);
    local_c0[0xf] = -0x12;
    uVar9 = uVar7;
    FUN_1001d2d04();
    puVar3 = &DAT_1009a3870;
    puVar6 = &local_d0;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar6,&DAT_1009a3870,uVar9);
    _swift_release(uVar7);
    FUN_100006cdc(0,0xc000000000000000);
    local_b0 = (undefined *)0x1;
    puStack_98 = (undefined *)0x3;
    local_90 = (code *)CONCAT71(local_90._1_7_,1);
    uStack_70 = 0xc000000000000000;
    local_78 = 0;
    local_120 = (undefined *)0x1;
    uStack_108 = 3;
    local_100 = 1;
    uStack_e0 = 0xc000000000000000;
    local_e8 = 0;
    uStack_118 = uVar8;
    local_110 = uVar1;
    local_f8 = puVar6;
    puStack_f0 = puVar3;
    local_a8 = uVar8;
    local_a0 = (code *)uVar1;
    local_88 = puVar6;
    puStack_80 = puVar3;
    FUN_1001d2ad0(&local_b0,auStack_170);
    FUN_1001d2d44(&local_120);
    puVar3 = &DAT_1009a33f8;
    _swift_allocObject(&DAT_1009a33f8,0x18,7);
    _swift_weakInit(puVar3 + 0x10,unaff_x20);
    _swift_retain(puVar3);
    FUN_1001cdaac(&local_b0,0x4b43415f4e5953,0xe700000000000000,thunk_FUN_1001d3780,puVar3,0,0);
    _swift_release_n(puVar3,2);
    FUN_1001d2d44(&local_b0);
  }
  return;
}

