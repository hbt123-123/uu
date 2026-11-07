// rea decompile_all
// name: FUN_10014ec2c
// address: 0x10014ec2c
// body: available
// range: 0x10014ec2c-0x10014f4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014ec2c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_2c0 [16];
  long alStack_2b0 [4];
  undefined1 auStack_290 [8];
  code *local_288;
  ID local_280;
  long local_278;
  undefined1 *local_270;
  long local_268;
  long lStack_260;
  long local_258;
  long local_250;
  undefined *local_248;
  undefined1 auStack_240 [24];
  undefined *local_228;
  undefined8 local_220;
  code *local_218;
  undefined *puStack_210;
  code *local_208;
  undefined *local_200;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  code *local_1a0;
  undefined *puStack_198;
  code *local_190;
  undefined *puStack_188;
  ulong local_180;
  undefined8 local_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined *local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined *puStack_120;
  undefined1 local_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined *puStack_110;
  ulong local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_258 = *(long *)(lVar1 + -8);
  local_250 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_258 + 0x40));
  lVar1 = 0;
  local_270 = auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_268 = *(long *)(lVar1 + -8);
  lStack_260 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_268 + 0x40));
  lVar1 = (long)(auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = param_1[0xb];
  local_a0 = param_1[10];
  local_88 = param_1[0xd];
  local_90 = param_1[0xc];
  local_80 = param_1[0xe];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  local_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  local_d0 = param_1[4];
  uStack_b8 = param_1[7];
  local_c0 = param_1[6];
  if ((local_90 >> 8 != 0xffffffff) || ((local_80 & 0x3000000000000000) != 0)) {
    puStack_188 = (undefined *)param_1[5];
    local_190 = (code *)param_1[4];
    local_178 = param_1[7];
    local_180 = param_1[6];
    uStack_168 = param_1[9];
    local_170 = param_1[8];
    uStack_158 = param_1[0xb];
    uStack_160 = param_1[10];
    uStack_1a8 = param_1[1];
    local_1b0 = (undefined *)*param_1;
    puVar7 = (undefined *)param_1[3];
    local_1a0 = (code *)param_1[2];
    puStack_198 = puVar7;
    if (((uint)(local_80 >> 0x39) & 0x18 | (uint)(local_90 >> 0x3d)) == 3) {
      local_150 = local_90 & 0x1fffffffffffffff;
      local_140 = local_80 & 0xcfffffffffffffff;
      uStack_148 = local_88;
      if (((((ulong)local_190 & local_180 & local_170 ^ 0xffffffffffffffff) & 0x3000000000000000) !=
           0) && (((uint)(local_170 >> 0x3b) & 6 | (uint)(local_180 >> 0x3d) & 1) == 4)) {
        local_108 = local_180 & 0xdfffffffffffffff;
        local_f8 = local_170 & 0xcfffffffffffffff;
        local_118 = SUB81(local_190,0);
        uStack_111 = (undefined1)((ulong)local_190 >> 0x38);
        uStack_113 = (undefined2)((ulong)local_190 >> 0x28);
        uStack_117 = (undefined4)((ulong)local_190 >> 8);
        local_288 = local_1a0;
        local_280 = uStack_1a8;
        local_278 = lVar1;
        local_138 = local_1b0;
        uStack_130 = uStack_1a8;
        local_128 = local_1a0;
        puStack_120 = puVar7;
        puStack_110 = puStack_188;
        uStack_100 = local_178;
        FUN_100401b14(0);
        if (puVar7 == (undefined *)0x1) {
          (*(code *)PTR____chkstk_darwin_100995498)(param_6 + 0x10);
          *(undefined8 *)(lVar1 + -0x20) = param_4;
          *(undefined8 *)(lVar1 + -0x18) = extraout_x8_01;
          *(undefined ***)(lVar1 + -0x10) = &local_138;
          FUN_10007f314(&local_f0,&local_228,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_10007f314(&local_1b0,&local_228,&DAT_100a79598,&DAT_10080e930);
          pcVar2 = FUN_1001528dc;
          FUN_1003fb45c(FUN_1001528dc,lVar1 + -0x30,0xd0000000000000b5,0x8000000100891cf0,
                        &DAT_d000000000000028,0x8000000100892c90,0x105,7);
          FUN_100149dec();
          puVar7 = &DAT_10099f208;
          _swift_allocObject(&DAT_10099f208,0x60,7);
          *(undefined8 *)(puVar7 + 0x10) = param_2;
          *(undefined **)(puVar7 + 0x30) = puStack_120;
          *(code **)(puVar7 + 0x28) = local_128;
          *(undefined **)(puVar7 + 0x40) = puStack_110;
          *(ulong *)(puVar7 + 0x38) =
               CONCAT17(uStack_111,CONCAT25(uStack_113,CONCAT41(uStack_117,local_118)));
          *(undefined8 *)(puVar7 + 0x50) = uStack_100;
          *(ulong *)(puVar7 + 0x48) = local_108;
          *(ulong *)(puVar7 + 0x58) = local_f8;
          *(undefined8 *)(puVar7 + 0x20) = uStack_130;
          *(undefined **)(puVar7 + 0x18) = local_138;
          FUN_10007f314(&local_1b0,&local_228,&DAT_100a79598,&DAT_10080e930);
          _swift_retain(param_2);
          FUN_100151b34(local_280,local_288,pcVar2,FUN_10015291c,puVar7);
          _swift_release(puVar7);
          FUN_100040bb4(&local_1b0,&DAT_100a79598,&DAT_10080e930);
          FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
          return;
        }
        FUN_10007f314(&local_f0,&local_228,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_10007f314(&local_1b0,&local_228,&DAT_100a79598,&DAT_10080e930);
        FUN_1003fb45c(FUN_10014f4e4,0,0xd0000000000000b5,0x8000000100891cf0,&DAT_d000000000000028,
                      0x8000000100892c90,0xfc,7);
        puVar7 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        puVar8 = &DAT_d000000000000013;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (&DAT_d000000000000013,0x8000000100891cd0);
        local_280 = _objc_msgSend((ID)puVar7,"initWithDomain:code:userInfo:",puVar8,0x186a2,0);
        FUN_100616260();
        _swift_beginAccess(param_3 + 0x10,auStack_240,1,0);
        *(undefined1 *)(param_3 + 0x10) = 0;
        FUN_100149be8();
        puVar7 = &DAT_10099f1b8;
        _swift_allocObject(&DAT_10099f1b8,0x18,7);
        *(undefined8 *)(puVar7 + 0x10) = param_5;
        local_208 = thunk_FUN_1000a9f7c;
        local_228 = PTR___NSConcreteStackBlock_100995490;
        local_220 = 0x42000000;
        local_218 = FUN_1000acdb4;
        puStack_210 = &DAT_10099f1d0;
        local_200 = puVar7;
        pvVar9 = __Block_copy(&local_228);
        lVar1 = local_278;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_278,param_5);
        local_248 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar5 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar7 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar6 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        lVar4 = local_250;
        puVar8 = local_270;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_270,&local_248,puVar7,puVar6,local_250,puVar5);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar1,puVar8,pvVar9);
        __Block_release(pvVar9);
        FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_100040bb4(&local_1b0,&DAT_100a79598,&DAT_10080e930);
        (**(code **)(local_258 + 8))(puVar8,lVar4);
        (**(code **)(local_268 + 8))(lVar1,lStack_260);
        puVar7 = local_200;
        goto LAB_10014f1dc;
      }
    }
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10014f4b8,0,0xd0000000000000b5,0x8000000100891cf0,&DAT_d000000000000028,
                0x8000000100892c90,0xf2,7);
  puVar7 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  puVar8 = &DAT_d000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(&DAT_d000000000000013,0x8000000100891cd0);
  IVar3 = _objc_msgSend((ID)puVar7,"initWithDomain:code:userInfo:",puVar8,0x186a1,0);
  FUN_100616260(IVar3);
  lVar4 = param_3 + 0x10;
  _swift_beginAccess(lVar4,&local_228,1,0);
  *(undefined1 *)(param_3 + 0x10) = 0;
  FUN_100149be8();
  puVar7 = &DAT_10099f168;
  local_278 = lVar4;
  _swift_allocObject(&DAT_10099f168,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_5;
  local_190 = thunk_FUN_1000a9f7c;
  local_1b0 = PTR___NSConcreteStackBlock_100995490;
  uStack_1a8 = 0x42000000;
  local_1a0 = FUN_1000acdb4;
  puStack_198 = &DAT_10099f180;
  puStack_188 = puVar7;
  pvVar9 = __Block_copy(&local_1b0);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar1,param_5);
  local_138 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar7 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar4 = local_250;
  puVar8 = local_270;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_270,&local_138,puVar7,puVar6,local_250,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar1,puVar8,pvVar9);
  __Block_release(pvVar9);
  (**(code **)(local_258 + 8))(puVar8,lVar4);
  (**(code **)(local_268 + 8))(lVar1,lStack_260);
  puVar7 = puStack_188;
LAB_10014f1dc:
  _swift_release(puVar7);
  return;
}

