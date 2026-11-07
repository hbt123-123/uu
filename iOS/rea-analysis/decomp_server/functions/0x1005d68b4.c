// rea decompile_all
// name: FUN_1005d68b4
// address: 0x1005d68b4
// body: available
// range: 0x1005d68b4-0x1005d6c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d68b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  void *aBlock;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined8 local_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  undefined *local_1b8;
  undefined *local_198;
  undefined8 local_190;
  code *local_188;
  undefined *puStack_180;
  code *local_178;
  undefined *local_170;
  undefined *local_a0 [3];
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  local_1b8 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_1c0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1c0 + 0x40));
  puVar8 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_1d0 = *(long *)(lVar4 + -8);
  lStack_1c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1d0 + 0x40));
  lVar4 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(&DAT_100b3a708,auStack_80,0,0);
  uVar2 = DAT_100b3a710;
  pcVar1 = DAT_100b3a708;
  if (DAT_100b3a708 != (code *)0x0) {
    local_88 = &DAT_1009da430;
    puVar5 = &DAT_1009d92b8;
    _swift_allocObject(&DAT_1009d92b8,0x101,7);
    uVar9 = param_1[0x18];
    uVar11 = param_1[0x1b];
    uVar10 = param_1[0x1a];
    *(undefined8 *)(puVar5 + 0xd8) = param_1[0x19];
    *(undefined8 *)(puVar5 + 0xd0) = uVar9;
    *(undefined8 *)(puVar5 + 0xe8) = uVar11;
    *(undefined8 *)(puVar5 + 0xe0) = uVar10;
    uVar9 = param_1[0x1c];
    *(undefined8 *)(puVar5 + 0xf8) = param_1[0x1d];
    *(undefined8 *)(puVar5 + 0xf0) = uVar9;
    puVar5[0x100] = *(undefined1 *)(param_1 + 0x1e);
    uVar9 = param_1[0x10];
    uVar11 = param_1[0x13];
    uVar10 = param_1[0x12];
    *(undefined8 *)(puVar5 + 0x98) = param_1[0x11];
    *(undefined8 *)(puVar5 + 0x90) = uVar9;
    *(undefined8 *)(puVar5 + 0xa8) = uVar11;
    *(undefined8 *)(puVar5 + 0xa0) = uVar10;
    uVar9 = param_1[0x14];
    uVar11 = param_1[0x17];
    uVar10 = param_1[0x16];
    *(undefined8 *)(puVar5 + 0xb8) = param_1[0x15];
    *(undefined8 *)(puVar5 + 0xb0) = uVar9;
    *(undefined8 *)(puVar5 + 200) = uVar11;
    *(undefined8 *)(puVar5 + 0xc0) = uVar10;
    uVar9 = param_1[8];
    uVar11 = param_1[0xb];
    uVar10 = param_1[10];
    *(undefined8 *)(puVar5 + 0x58) = param_1[9];
    *(undefined8 *)(puVar5 + 0x50) = uVar9;
    *(undefined8 *)(puVar5 + 0x68) = uVar11;
    *(undefined8 *)(puVar5 + 0x60) = uVar10;
    uVar9 = param_1[0xc];
    uVar11 = param_1[0xf];
    uVar10 = param_1[0xe];
    *(undefined8 *)(puVar5 + 0x78) = param_1[0xd];
    *(undefined8 *)(puVar5 + 0x70) = uVar9;
    *(undefined8 *)(puVar5 + 0x88) = uVar11;
    *(undefined8 *)(puVar5 + 0x80) = uVar10;
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    *(undefined8 *)(puVar5 + 0x18) = param_1[1];
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(undefined8 *)(puVar5 + 0x28) = uVar11;
    *(undefined8 *)(puVar5 + 0x20) = uVar10;
    uVar9 = param_1[4];
    uVar11 = param_1[7];
    uVar10 = param_1[6];
    *(undefined8 *)(puVar5 + 0x38) = param_1[5];
    *(undefined8 *)(puVar5 + 0x30) = uVar9;
    *(undefined8 *)(puVar5 + 0x48) = uVar11;
    *(undefined8 *)(puVar5 + 0x40) = uVar10;
    local_a0[0] = puVar5;
    FUN_10004090c(pcVar1,uVar2);
    FUN_1005d66f8(param_1,&local_198);
    ppuVar6 = local_a0;
    puVar5 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(ppuVar6,puVar5);
    local_1d8 = param_2;
    *(undefined8 *)(lVar4 + -8) = 0x28;
    *(undefined1 *)(lVar4 + -0x10) = 2;
    (*pcVar1)(0,ppuVar6,puVar5,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
              ,0xab,2,"sendAsync(_:timeout:on:reply:)",0x1e);
    FUN_10007ed2c(pcVar1,uVar2);
    param_2 = local_1d8;
    _swift_bridgeObjectRelease(puVar5);
  }
  puVar5 = local_1b8;
  (**(code **)(param_7 + 8))();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &DAT_1009d9330;
    _swift_allocObject(&DAT_1009d9330,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_4;
    *(undefined8 *)(puVar5 + 0x18) = param_5;
    local_178 = FUN_1005d6cb0;
    local_198 = PTR___NSConcreteStackBlock_100995490;
    local_190 = 0x42000000;
    local_188 = thunk_FUN_1000acdb4;
    puStack_180 = &DAT_1009d9348;
    local_170 = puVar5;
    aBlock = __Block_copy(&local_198);
    FUN_10004090c(param_4,param_5);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
    local_a0[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1005d6870();
    puVar5 = &DAT_100aadc98;
    FUN_100004bb4(&DAT_100aadc98,&DAT_10083f248);
    puVar7 = puVar5;
    FUN_1005d446c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar8,local_a0,puVar5,puVar7,lVar3,param_4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar4,puVar8,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_1c0 + 8))(puVar8,lVar3);
    (**(code **)(local_1d0 + 8))(lVar4,lStack_1c8);
    puVar5 = local_170;
  }
  else {
    FUN_1005d2cf8(param_1,param_2,param_3,param_4,param_5);
  }
  _swift_release(puVar5);
  return;
}

